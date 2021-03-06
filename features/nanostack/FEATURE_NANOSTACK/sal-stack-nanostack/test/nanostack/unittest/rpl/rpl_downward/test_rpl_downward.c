/*
 * Copyright (c) 2016, Arm Limited and affiliates.
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
#include "test_rpl_downward.h"
#include <string.h>

#include "RPL/rpl_control.h"
#include "RPL/rpl_upward.h"
#include "RPL/rpl_structures.h"

bool test_rpl_downward_dao_slow_timer()
{
    rpl_downward_dao_slow_timer(NULL, 0);

    return true;
}

