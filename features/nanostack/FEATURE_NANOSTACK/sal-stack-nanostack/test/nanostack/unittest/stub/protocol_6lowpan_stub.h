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
#ifndef __PROTOCOL_6LOWPAN_STUB_H__
#define __PROTOCOL_6LOWPAN_STUB_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "inttypes.h"

typedef struct {
    bool bool_value;
    int int_value;
    int8_t int8_value;
    uint8_t uint8_value;
    uint32_t uint32_value;
    protocol_interface_info_entry_t *entry_ptr;
} protocol_6lowpan_stub_def;

extern protocol_6lowpan_stub_def protocol_6lowpan_stub;

#ifdef __cplusplus
}
#endif

#endif // __PROTOCOL_6LOWPAN_STUB_H__
