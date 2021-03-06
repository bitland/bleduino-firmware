/* Copyright (c) 2012 Nordic Semiconductor. All Rights Reserved.
*
* The information contained herein is property of Nordic Semiconductor ASA.
* Terms and conditions of usage are described in detail in NORDIC
* SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
*
* Licensees are granted free, non-transferable use of the information. NO
* WARRANTY of ANY KIND is provided. This heading must NOT be removed from
* the file.
*/

/**
* This file is autogenerated by nRFgo Studio 1.15.1.2691 
*/

#ifndef SETUP_MESSAGES_H__
#define SETUP_MESSAGES_H__

#include "hal_platform.h" 
#include "aci.h"

#define ACI_DYNAMIC_DATA_SIZE 316
#define PIPE_GAP_DEVICE_NAME_SET 1
#define PIPE_GAP_DEVICE_NAME_SET_MAX_SIZE 0

#define PIPE_CONTROLLER__BUTTON_ACTION_TX 2
#define PIPE_CONTROLLER__BUTTON_ACTION_TX_MAX_SIZE 5

#define PIPE_CONTROLLER__BUTTON_ACTION_TX_ACK 3
#define PIPE_CONTROLLER__BUTTON_ACTION_TX_ACK_MAX_SIZE 5

#define PIPE_CONTROLLER__BUTTON_ACTION_RX 4
#define PIPE_CONTROLLER__BUTTON_ACTION_RX_MAX_SIZE 5

#define PIPE_CONTROLLER__BUTTON_ACTION_SET 5
#define PIPE_CONTROLLER__BUTTON_ACTION_SET_MAX_SIZE 5

#define PIPE_CONTROLLER__BUTTON_ACTION_RX_ACK_AUTO 6
#define PIPE_CONTROLLER__BUTTON_ACTION_RX_ACK_AUTO_MAX_SIZE 5

#define PIPE_FIRMATA_FIRMATA_COMMAND_TX 7
#define PIPE_FIRMATA_FIRMATA_COMMAND_TX_MAX_SIZE 4

#define PIPE_FIRMATA_FIRMATA_COMMAND_TX_ACK 8
#define PIPE_FIRMATA_FIRMATA_COMMAND_TX_ACK_MAX_SIZE 4

#define PIPE_FIRMATA_FIRMATA_COMMAND_RX 9
#define PIPE_FIRMATA_FIRMATA_COMMAND_RX_MAX_SIZE 4

#define PIPE_FIRMATA_FIRMATA_COMMAND_SET 10
#define PIPE_FIRMATA_FIRMATA_COMMAND_SET_MAX_SIZE 4

#define PIPE_FIRMATA_FIRMATA_COMMAND_RX_ACK_AUTO 11
#define PIPE_FIRMATA_FIRMATA_COMMAND_RX_ACK_AUTO_MAX_SIZE 4

#define PIPE_UART_RX_RX 12
#define PIPE_UART_RX_RX_MAX_SIZE 20

#define PIPE_UART_RX_RX_ACK_AUTO 13
#define PIPE_UART_RX_RX_ACK_AUTO_MAX_SIZE 20

#define PIPE_UART_TX_TX 14
#define PIPE_UART_TX_TX_MAX_SIZE 20

#define PIPE_UART_TX_TX_ACK 15
#define PIPE_UART_TX_TX_ACK_MAX_SIZE 20

#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_TX 16
#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_TX_MAX_SIZE 20

#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_TX_ACK 17
#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_TX_ACK_MAX_SIZE 20

#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_RX 18
#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_RX_MAX_SIZE 20

#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_SET 19
#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_SET_MAX_SIZE 20

#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_RX_ACK_AUTO 20
#define PIPE_NOTIFICATION_NOTIFICATION_ATTRIBUTES_RX_ACK_AUTO_MAX_SIZE 20

#define PIPE_BLE_BRIDGE_DEVICE_ID_RX 21
#define PIPE_BLE_BRIDGE_DEVICE_ID_RX_MAX_SIZE 1

#define PIPE_BLE_BRIDGE_DEVICE_ID_SET 22
#define PIPE_BLE_BRIDGE_DEVICE_ID_SET_MAX_SIZE 1

#define PIPE_BLE_BRIDGE_DEVICE_ID_RX_ACK_AUTO 23
#define PIPE_BLE_BRIDGE_DEVICE_ID_RX_ACK_AUTO_MAX_SIZE 1

#define PIPE_BLE_BRIDGE_BRIDGE_RX_RX 24
#define PIPE_BLE_BRIDGE_BRIDGE_RX_RX_MAX_SIZE 20

#define PIPE_BLE_BRIDGE_BRIDGE_RX_RX_ACK_AUTO 25
#define PIPE_BLE_BRIDGE_BRIDGE_RX_RX_ACK_AUTO_MAX_SIZE 20

#define PIPE_BLE_BRIDGE_BRIDGE_TX_TX 26
#define PIPE_BLE_BRIDGE_BRIDGE_TX_TX_MAX_SIZE 20

#define PIPE_BLE_BRIDGE_BRIDGE_TX_TX_ACK 27
#define PIPE_BLE_BRIDGE_BRIDGE_TX_TX_ACK_MAX_SIZE 20

#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_TX 28
#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_TX_MAX_SIZE 4

#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_TX_ACK 29
#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_TX_ACK_MAX_SIZE 4

#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_RX 30
#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_RX_MAX_SIZE 4

#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_SET 31
#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_SET_MAX_SIZE 4

#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_RX_ACK_AUTO 32
#define PIPE_VEHICLE_MOTION_THROTTLE_YAW_ROLL_PITCH_RX_ACK_AUTO_MAX_SIZE 4

#define PIPE_TX_POWER_TX_POWER_LEVEL_TX 33
#define PIPE_TX_POWER_TX_POWER_LEVEL_TX_MAX_SIZE 1


#define NUMBER_OF_PIPES 33

#define SERVICES_PIPE_TYPE_MAPPING_CONTENT {\
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX_ACK},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX_ACK},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX_ACK},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX_ACK},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX_ACK},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX_ACK},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
}

#define GAP_PPCP_MAX_CONN_INT 0xffff /**< Maximum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_MIN_CONN_INT  0xffff /**< Minimum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific maximum*/
#define GAP_PPCP_SLAVE_LATENCY 0
#define GAP_PPCP_CONN_TIMEOUT 0xffff /** Connection Supervision timeout multiplier as a multiple of 10msec, 0xFFFF means no specific value requested */

#define NB_SETUP_MESSAGES 63
#define SETUP_MESSAGES_CONTENT {\
    {0x00,\
        {\
            0x07,0x06,0x00,0x00,0x03,0x02,0x41,0xd7,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0b,0x00,0x21,0x01,0x01,0x00,0x00,0x06,0x00,0x00,\
            0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x1c,0x13,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0x03,0x90,0x01,0xff,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x38,0xff,0xff,0x02,0x58,0x0a,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x05,0x06,0x10,0x54,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x00,0x04,0x04,0x02,0x02,0x00,0x01,0x28,0x00,0x01,0x00,0x18,0x04,0x04,0x05,0x05,0x00,\
            0x02,0x28,0x03,0x01,0x0e,0x03,0x00,0x00,0x2a,0x04,0x14,0x14,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x1c,0x08,0x00,0x03,0x2a,0x00,0x01,0x42,0x4c,0x45,0x64,0x75,0x69,0x6e,0x6f,0x6d,0x69,\
            0x2e,0x63,0x6f,0x6d,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x38,0x05,0x05,0x00,0x04,0x28,0x03,0x01,0x02,0x05,0x00,0x01,0x2a,0x06,0x04,0x03,0x02,\
            0x00,0x05,0x2a,0x01,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x54,0x06,0x28,0x03,0x01,0x02,0x07,0x00,0x04,0x2a,0x06,0x04,0x09,0x08,0x00,0x07,0x2a,\
            0x04,0x01,0xff,0xff,0xff,0xff,0x00,0x00,0xff,0xff,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x70,0x02,0x02,0x00,0x08,0x28,0x00,0x01,0x01,0x18,0x04,0x04,0x10,0x10,0x00,0x09,0x28,\
            0x00,0x01,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x8c,0x12,0xa3,0x01,0xf0,0x6b,0x8c,0x04,0x04,0x13,0x13,0x00,0x0a,0x28,0x03,0x01,0x3e,\
            0x0b,0x00,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xa8,0x12,0xa3,0x0d,0xd0,0x6b,0x8c,0x76,0x14,0x06,0x05,0x00,0x0b,0xd0,0x0d,0x02,0x00,\
            0x00,0x00,0x00,0x00,0x46,0x14,0x03,0x02,0x00,0x0c,0x29,0x02,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xc4,0x01,0x00,0x00,0x04,0x04,0x10,0x10,0x00,0x0d,0x28,0x00,0x01,0x2d,0x6a,0xd1,0xc0,\
            0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,0xa3,0xd1,0x1e,0x6b,0x8c,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xe0,0x04,0x04,0x13,0x13,0x00,0x0e,0x28,0x03,0x01,0x3e,0x0f,0x00,0x2d,0x6a,0xd1,0xc0,\
            0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,0xa3,0x51,0x25,0x6b,0x8c,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xfc,0x76,0x14,0x05,0x04,0x00,0x0f,0x25,0x51,0x02,0x00,0x00,0x00,0x00,0x46,0x14,0x03,\
            0x02,0x00,0x10,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x10,0x10,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x18,0x00,0x11,0x28,0x00,0x01,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,\
            0xa3,0x7a,0xda,0x6b,0x8c,0x04,0x04,0x13,0x13,0x00,0x12,0x28,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x34,0x03,0x01,0x0c,0x13,0x00,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,\
            0xa3,0xcd,0xab,0x6b,0x8c,0x44,0x10,0x14,0x00,0x00,0x13,0xab,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x50,0xcd,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x14,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x6c,0x28,0x03,0x01,0x30,0x15,0x00,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,\
            0x12,0xa3,0x10,0x10,0x6b,0x8c,0x34,0x00,0x14,0x00,0x00,0x15,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x88,0x10,0x10,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0x14,0x03,0x02,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xa4,0x16,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x10,0x10,0x00,0x17,0x28,0x00,0x01,0x2d,\
            0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,0xa3,0x41,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xc0,0x31,0x6b,0x8c,0x04,0x04,0x13,0x13,0x00,0x18,0x28,0x03,0x01,0x3e,0x19,0x00,0x2d,\
            0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,0xa3,0x18,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xdc,0x16,0x6b,0x8c,0x74,0x14,0x14,0x00,0x00,0x19,0x16,0x18,0x02,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xf8,0x00,0x00,0x00,0x00,0x46,0x14,0x03,0x02,0x00,0x1a,0x29,0x02,0x01,0x00,0x00,0x06,\
            0x04,0x3a,0x39,0x00,0x1b,0x29,0x01,0x01,0x54,0x68,0x65,0x20,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x14,0x6e,0x6f,0x74,0x69,0x66,0x69,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x61,0x74,0x74,\
            0x72,0x69,0x62,0x75,0x74,0x65,0x73,0x2c,0x20,0x69,0x6e,0x63,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x30,0x6c,0x75,0x64,0x69,0x6e,0x67,0x20,0x6d,0x65,0x73,0x73,0x61,0x67,0x65,0x20,0x61,\
            0x6e,0x64,0x20,0x74,0x69,0x74,0x6c,0x65,0x2e,0x04,0x04,0x10,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x4c,0x10,0x00,0x1c,0x28,0x00,0x01,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,\
            0x12,0xa3,0xeb,0xb1,0x6b,0x8c,0x04,0x04,0x13,0x13,0x00,0x1d,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x68,0x28,0x03,0x01,0x0e,0x1e,0x00,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,\
            0x12,0xa3,0xd0,0xd1,0x6b,0x8c,0x46,0x14,0x02,0x01,0x00,0x1e,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x84,0xd1,0xd0,0x02,0x00,0x06,0x04,0x26,0x25,0x00,0x1f,0x29,0x01,0x01,0x54,0x68,0x65,\
            0x20,0x64,0x65,0x76,0x69,0x63,0x65,0x20,0x49,0x44,0x20,0x67,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xa0,0x69,0x76,0x65,0x6e,0x20,0x74,0x6f,0x20,0x74,0x68,0x65,0x20,0x42,0x4c,0x45,0x20,\
            0x73,0x6c,0x61,0x76,0x65,0x2e,0x04,0x04,0x13,0x13,0x00,0x20,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xbc,0x28,0x03,0x01,0x0c,0x21,0x00,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,\
            0x12,0xa3,0x78,0x57,0x6b,0x8c,0x44,0x10,0x14,0x00,0x00,0x21,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xd8,0x57,0x78,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x04,0x36,0x35,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xf4,0x22,0x29,0x01,0x01,0x54,0x68,0x65,0x20,0x6d,0x65,0x73,0x73,0x61,0x67,0x65,0x20,\
            0x74,0x6f,0x20,0x62,0x65,0x20,0x73,0x65,0x6e,0x74,0x20,0x66,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x10,0x72,0x6f,0x6d,0x20,0x61,0x6e,0x6f,0x74,0x68,0x65,0x72,0x20,0x42,0x4c,0x45,0x20,\
            0x73,0x6c,0x61,0x76,0x65,0x20,0x64,0x65,0x76,0x69,0x63,0x65,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x2c,0x2e,0x04,0x04,0x13,0x13,0x00,0x23,0x28,0x03,0x01,0x30,0x24,0x00,0x2d,0x6a,0xd1,\
            0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,0xa3,0x4b,0x45,0x6b,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x48,0x8c,0x34,0x00,0x14,0x00,0x00,0x24,0x45,0x4b,0x02,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x64,0x00,0x00,0x46,0x14,0x03,0x02,0x00,0x25,0x29,0x02,0x01,0x00,0x00,0x06,0x04,0x2a,\
            0x29,0x00,0x26,0x29,0x01,0x01,0x54,0x68,0x65,0x20,0x64,0x61,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x80,0x74,0x61,0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x73,0x65,0x6e,0x74,0x20,0x74,0x6f,\
            0x20,0x61,0x6e,0x6f,0x74,0x68,0x65,0x72,0x20,0x42,0x4c,0x45,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x9c,0x20,0x73,0x6c,0x61,0x76,0x65,0x2e,0x04,0x04,0x10,0x10,0x00,0x27,0x28,0x00,0x01,\
            0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,0xa3,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0xb8,0x25,0x11,0x6b,0x8c,0x04,0x04,0x13,0x13,0x00,0x28,0x28,0x03,0x01,0x3e,0x29,0x00,\
            0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,0xa3,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0xd4,0x06,0x98,0x6b,0x8c,0x76,0x14,0x05,0x04,0x00,0x29,0x98,0x06,0x02,0x00,0x00,0x00,\
            0x00,0x46,0x14,0x03,0x02,0x00,0x2a,0x29,0x02,0x01,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0xf0,0x06,0x04,0x3a,0x39,0x00,0x2b,0x29,0x01,0x01,0x54,0x68,0x65,0x20,0x73,0x70,0x65,\
            0x65,0x64,0x20,0x61,0x6e,0x64,0x20,0x6f,0x72,0x69,0x65,0x6e,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x0c,0x74,0x61,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x77,0x68,0x69,0x63,0x68,0x20,\
            0x74,0x68,0x65,0x20,0x76,0x65,0x68,0x69,0x63,0x6c,0x65,0x20,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x28,0x69,0x73,0x20,0x6d,0x6f,0x76,0x69,0x6e,0x67,0x2e,0x04,0x04,0x10,0x10,0x00,0x2c,\
            0x28,0x00,0x01,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x44,0x68,0x12,0xa3,0x13,0x20,0x6b,0x8c,0x04,0x04,0x02,0x02,0x00,0x2d,0x28,0x00,0x01,\
            0x0a,0x18,0x04,0x04,0x05,0x05,0x00,0x2e,0x28,0x03,0x01,0x02,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x60,0x2f,0x00,0x24,0x2a,0x06,0x04,0x0b,0x0a,0x00,0x2f,0x2a,0x24,0x01,0x42,0x4c,0x45,\
            0x64,0x75,0x69,0x6e,0x6f,0x00,0x00,0x06,0x04,0x08,0x07,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x7c,0x30,0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,\
            0x31,0x28,0x03,0x01,0x02,0x32,0x00,0x26,0x2a,0x06,0x04,0x05,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x98,0x04,0x00,0x32,0x2a,0x26,0x01,0x31,0x2e,0x30,0x00,0x06,0x04,0x08,0x07,0x00,0x33,\
            0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0xb4,0x05,0x05,0x00,0x34,0x28,0x03,0x01,0x02,0x35,0x00,0x29,0x2a,0x06,0x04,0x0b,0x0a,\
            0x00,0x35,0x2a,0x29,0x01,0x4b,0x79,0x74,0x65,0x6c,0x61,0x62,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0xd0,0x73,0x00,0x00,0x06,0x04,0x08,0x07,0x00,0x36,0x29,0x04,0x01,0x19,0x00,0x00,0x00,\
            0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,0x37,0x28,0x03,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0xec,0x02,0x38,0x00,0x28,0x2a,0x04,0x04,0x0a,0x06,0x00,0x38,0x2a,0x28,0x01,0x52,0x65,\
            0x76,0x31,0x2e,0x30,0x00,0x00,0x00,0x00,0x06,0x04,0x08,0x07,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x25,0x08,0x00,0x39,0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x04,0x04,0x02,0x02,\
            0x00,0x3a,0x28,0x00,0x01,0x04,0x18,0x04,0x04,0x05,0x05,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x25,0x24,0x3b,0x28,0x03,0x01,0x12,0x3c,0x00,0x07,0x2a,0x16,0x04,0x02,0x01,0x00,0x3c,0x2a,\
            0x07,0x01,0x00,0x46,0x14,0x03,0x02,0x00,0x3d,0x29,0x02,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x25,0x40,0x00,0x00,0x06,0x04,0x23,0x22,0x00,0x3e,0x29,0x01,0x01,0x54,0x68,0x65,0x20,0x74,\
            0x72,0x61,0x6e,0x73,0x6d,0x69,0x73,0x73,0x69,0x6f,0x6e,0x20,\
        },\
    },\
    {0x00,\
        {\
            0x15,0x06,0x25,0x5c,0x73,0x69,0x67,0x6e,0x61,0x6c,0x20,0x73,0x74,0x72,0x65,0x6e,0x67,0x74,0x68,0x2e,\
            0x20,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x00,0x2a,0x00,0x01,0x00,0x80,0x04,0x00,0x03,0x00,0x00,0xd0,0x0d,0x02,0x04,0x8e,0x04,\
            0x00,0x0b,0x00,0x0c,0x25,0x51,0x02,0x04,0x8e,0x04,0x00,0x0f,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x1c,0x00,0x10,0xab,0xcd,0x02,0x04,0x08,0x04,0x00,0x13,0x00,0x00,0x10,0x10,0x02,0x00,\
            0x06,0x04,0x00,0x15,0x00,0x16,0x16,0x18,0x02,0x04,0x8e,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x38,0x00,0x19,0x00,0x1a,0xd1,0xd0,0x02,0x04,0x88,0x04,0x00,0x1e,0x00,0x00,0x57,0x78,\
            0x02,0x04,0x08,0x04,0x00,0x21,0x00,0x00,0x45,0x4b,0x02,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1d,0x06,0x40,0x54,0x06,0x04,0x00,0x24,0x00,0x25,0x98,0x06,0x02,0x04,0x8e,0x04,0x00,0x29,0x00,0x2a,\
            0x2a,0x07,0x01,0x00,0x02,0x04,0x00,0x3c,0x00,0x3d,\
        },\
    },\
    {0x00,\
        {\
            0x13,0x06,0x50,0x00,0x2d,0x6a,0xd1,0xc0,0x32,0x00,0x5b,0x02,0x1d,0x68,0x12,0xa3,0x00,0x00,0x6b,0x8c,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x08,0x06,0x60,0x1c,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x06,0x06,0xf0,0x00,0x83,0x57,0x84,\
        },\
    },\
}

#endif
