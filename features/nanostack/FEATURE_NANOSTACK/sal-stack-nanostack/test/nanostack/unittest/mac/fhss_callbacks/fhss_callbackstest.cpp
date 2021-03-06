/*
 * Copyright (c) 2016-2017, Arm Limited and affiliates.
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
#include "test_fhss_callbacks.h"

TEST_GROUP(fhss_callbacks)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

TEST(fhss_callbacks, test_mac_read_tx_queue_sizes)
{
    CHECK(test_mac_read_tx_queue_sizes());
}

TEST(fhss_callbacks, test_mac_read_64bit_mac_address)
{
    CHECK(test_mac_read_64bit_mac_address());
}

TEST(fhss_callbacks, test_mac_read_phy_datarate)
{
    CHECK(test_mac_read_phy_datarate());
}

TEST(fhss_callbacks, test_mac_set_channel)
{
    CHECK(test_mac_set_channel());
}

TEST(fhss_callbacks, test_mac_fhss_frame_tx)
{
    CHECK(test_mac_fhss_frame_tx());
}

TEST(fhss_callbacks, test_mac_synch_lost)
{
    CHECK(test_mac_synch_lost());
}

TEST(fhss_callbacks, test_mac_poll_tx_queue)
{
    CHECK(test_mac_poll_tx_queue());
}

TEST(fhss_callbacks, test_mac_broadcast_notification)
{
    CHECK(test_mac_broadcast_notification());
}

TEST(fhss_callbacks, test_mac_get_coordinator_mac_address)
{
    CHECK(test_mac_get_coordinator_mac_address());
}
