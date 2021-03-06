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
#include "CppUTest/TestHarness.h"
#include "test_net_short_address_extension.h"

TEST_GROUP(net_short_address_extension)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

TEST(net_short_address_extension, test_net_ext_set_short_address_from_app)
{
    CHECK(test_net_ext_set_short_address_from_app());
}

