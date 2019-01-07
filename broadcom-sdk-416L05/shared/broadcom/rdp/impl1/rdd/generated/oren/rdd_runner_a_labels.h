#ifndef RUNNER_A_CODE_ADDRESSES
#define RUNNER_A_CODE_ADDRESSES

#define runner_a_start_task_initialization_task		(0x14)
#define runner_a_initialization_task		(0x14)
#define runner_a_start_task_timer_scheduler_set		(0x44BC)
#define runner_a_timer_scheduler_set		(0x44BC)
#define runner_a_start_task_cpu_rx_wakeup_request		(0x390C)
#define runner_a_cpu_rx_wakeup_request		(0x390C)
#define runner_a_start_task_downstream_multicast_wakeup_request		(0x32C8)
#define runner_a_downstream_multicast_wakeup_request		(0x32C8)
#define runner_a_start_task_cpu_tx_wakeup_request		(0x3F94)
#define runner_a_cpu_tx_wakeup_request		(0x3F94)
#define runner_a_start_task_policer_budget_allocator_1st_wakeup_request		(0x4588)
#define runner_a_policer_budget_allocator_1st_wakeup_request		(0x4588)
#define runner_a_start_task_wan_direct_wakeup_request		(0x2A4)
#define runner_a_wan_direct_wakeup_request		(0x2A4)
#define runner_a_start_task_wan_cpu_wakeup_request		(0x5EC)
#define runner_a_wan_cpu_wakeup_request		(0x5EC)
#define runner_a_start_task_wan_normal_wakeup_request		(0x610)
#define runner_a_wan_normal_wakeup_request		(0x610)
#define runner_a_start_task_flow_cache_wakeup_request		(0x1A80)
#define runner_a_flow_cache_wakeup_request		(0x1A80)
#define runner_a_start_task_cpu_flow_cache_wakeup_request		(0x1A60)
#define runner_a_cpu_flow_cache_wakeup_request		(0x1A60)
#define runner_a_start_task_debug_routine		(0x1BC)
#define runner_a_debug_routine		(0x1BC)
#define runner_a_start_task_dhd_tx_post		(0x4BF0)
#define runner_a_dhd_tx_post		(0x4BF0)
#define runner_a_start_task_dhd_tx_complete_wakeup_request		(0x4E6C)
#define runner_a_dhd_tx_complete_wakeup_request		(0x4E6C)
#define runner_a_ingress_classification_key_src_ip		(0x15B4)
#define runner_a_ingress_classification_key_dst_ip		(0x1600)
#define runner_a_ingress_classification_key_ipv6_flow_label		(0x164C)
#define runner_a_ingress_classification_key_generic_rule_1		(0x1674)
#define runner_a_ingress_classification_key_generic_rule_2		(0x167C)
#define runner_a_ingress_classification_key_outer_tpid		(0x16E8)
#define runner_a_ingress_classification_key_inner_tpid		(0x16F4)
#define runner_a_ingress_classification_key_src_port		(0x1710)
#define runner_a_ingress_classification_key_dst_port		(0x1730)
#define runner_a_ingress_classification_key_outer_vlan		(0x1750)
#define runner_a_ingress_classification_key_inner_vlan		(0x1768)
#define runner_a_ingress_classification_key_dst_mac		(0x1784)
#define runner_a_ingress_classification_key_src_mac		(0x178C)
#define runner_a_ingress_classification_key_ether_type		(0x17B4)
#define runner_a_ingress_classification_key_ip_protocol		(0x17C8)
#define runner_a_ingress_classification_key_dscp		(0x17EC)
#define runner_a_ingress_classification_key_ssid		(0x1808)
#define runner_a_ingress_classification_key_ingress_port		(0x180C)
#define runner_a_ingress_classification_key_outer_pbits		(0x181C)
#define runner_a_ingress_classification_key_inner_pbits		(0x1834)
#define runner_a_ingress_classification_key_number_of_vlans		(0x1850)
#define runner_a_ingress_classification_key_layer3_protocol		(0x1860)
#define runner_a_flow_cache_update_header		(0x1C0C)
#define runner_a_vlan_command_transparent		(0x2380)
#define runner_a_vlan_command_add_outer_tag		(0x23A4)
#define runner_a_vlan_command_add_always		(0x2404)
#define runner_a_vlan_command_add_3rd_tag		(0x246C)
#define runner_a_vlan_command_add_two_tags		(0x24CC)
#define runner_a_vlan_command_add_outer_tag_replace_inner_tag		(0x253C)
#define runner_a_vlan_command_replace_outer_tag		(0x25A8)
#define runner_a_vlan_command_replace_two_tags		(0x25D8)
#define runner_a_vlan_command_remove_tag		(0x2614)
#define runner_a_vlan_command_remove_tag_dont_save		(0x2670)
#define runner_a_vlan_command_remove_two_tags		(0x26C0)
#define runner_a_vlan_command_remove_outer_tag_replace_inner_tag		(0x2714)
#define runner_a_vlan_command_remove_outer_tag_replace_inner_tag_copy		(0x2774)
#define runner_a_vlan_command_remove_outer_tag_copy		(0x27D4)
#define runner_a_vlan_command_replace_outer_tag_replace_inner_tag		(0x2838)
#define runner_a_pbits_command_transparent		(0x2874)
#define runner_a_pbits_command_outer_configured		(0x2884)
#define runner_a_pbits_command_inner_configured		(0x28A0)
#define runner_a_pbits_command_dscp_copy		(0x28BC)
#define runner_a_pbits_command_copy_inner_to_outer		(0x2908)
#define runner_a_pbits_command_increment_offset_copy_inner_to_outer		(0x2930)
#define runner_a_pbits_command_remap		(0x2960)
#define runner_a_pbits_command_decrement_offset_remap		(0x2990)
#define runner_a_pbits_command_remap_outer_by_inner		(0x29C4)
#define runner_a_pbits_command_configured_two_tags		(0x2A04)
#define runner_a_pbits_command_dscp_copy_two_tags		(0x2A38)
#define runner_a_global_register_update_r0		(0x447C)
#define runner_a_global_register_update_r1		(0x4484)
#define runner_a_global_register_update_r2		(0x448C)
#define runner_a_global_register_update_r3		(0x4494)
#define runner_a_global_register_update_r4		(0x449C)
#define runner_a_global_register_update_r5		(0x44A4)
#define runner_a_global_register_update_r6		(0x44AC)
#define runner_a_global_register_update_r7		(0x44B4)
#define runner_a_cpu_rx_meter_budget_allocate		(0x453C)
#define runner_a_action_nat		(0x4894)
#define runner_a_action_ttl_decrement		(0x4930)
#define runner_a_action_policer		(0x49AC)
#define runner_a_action_gre_remark		(0x49F8)
#define runner_a_action_exception		(0x4A10)
#define runner_a_action_dscp_remarking		(0x4A34)
#define runner_a_action_outer_pbits_remarking		(0x4AAC)
#define runner_a_action_inner_pbits_remarking		(0x4B2C)
#define runner_a_action_pppoe		(0x4BAC)
#define runner_a_action_default		(0x4BE4)

#endif