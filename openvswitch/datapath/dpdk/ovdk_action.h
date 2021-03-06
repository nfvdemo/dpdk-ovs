/*-
 *   BSD LICENSE
 *
 *   Copyright(c) 2010-2014 Intel Corporation. All rights reserved.
 *   All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in
 *       the documentation and/or other materials provided with the
 *       distribution.
 *     * Neither the name of Intel Corporation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#ifndef __OVDK_ACTION_H_
#define __OVDK_ACTION_H_

#include <rte_config.h>
#include <rte_mbuf.h>

#include "ovdk_action_types.h"

inline void ovdk_action_pop_vlan(struct rte_mbuf *mbuf);
inline void ovdk_action_push_vlan(const struct ovdk_action_push_vlan *action,
                    struct rte_mbuf *mbuf);
inline void ovdk_action_set_ethernet(const struct ovs_key_ethernet *ethernet_key,
                    struct rte_mbuf *mbuf);
inline void ovdk_action_set_ipv4(const struct ovs_key_ipv4 *ipv4_key,
                    struct rte_mbuf *mbuf);
inline void ovdk_action_set_tcp(const struct ovs_key_tcp *tcp_key,
                    struct rte_mbuf *mbuf);
inline void ovdk_action_set_udp(const struct ovs_key_udp *udp_key,
                    struct rte_mbuf *mbuf);
#endif /* __OVDK_ACTION_H_ */

