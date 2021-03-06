/*
 * Copyright (c) 2015-2016, Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "nsconfig.h"

#ifdef HAVE_RPL

#include "ns_types.h"
#include "ns_trace.h"
#include "common_functions.h"

#include "net_rpl.h"

#include "NWK_INTERFACE/Include/protocol_abstract.h"
#include "Common_Protocols/ipv6_resolution.h"
#include "Service_Libs/etx/etx.h"

#include "RPL/rpl_protocol.h"
#include "RPL/rpl_objective.h"
#include "RPL/rpl_upward.h"
#include "RPL/rpl_downward.h"
#include "RPL/rpl_policy.h"
#include "RPL/rpl_structures.h"
#include "RPL/rpl_mrhof.h"

#define TRACE_GROUP "rplm"

/* Current implementation assumes ETX (and no metric container) - need to
 * ensure that we behave appropriately if a metric container is present.
 */

static void rpl_mrhof_parent_selection(rpl_instance_t *instance);
static uint16_t rpl_mrhof_path_cost_through_neighbour(const rpl_neighbour_t *neighbour);
static bool rpl_mrhof_neighbour_acceptable(const rpl_instance_t *instance, const rpl_neighbour_t *neighbour);

void rpl_mrhof_init(void)
{
}


#endif /* HAVE_RPL */
