#include <arduino.h>

//#define _DEBUG  //DEBUG调试

//#define BLE_SoftSerial  //软串口模式
#ifndef BLE_SoftSerial  //如果没开启软串口,就开硬串口模式
#if defined(__AVR_ATmega32U4__)
#define BLE_HardSerial Serial1
#else
#define BLE_HardSerial Serial
#endif
#endif

#define BLE_SPEED 9600  //蓝牙接口速度
#define NRF_CHANNEL 70  //nRF通道

#define CHANNEL_NUM   8
#define SAFE_TIME_OUT 250   //失控保护时间
#define MAX_THROTTLE 255 //最大油门 < 255
#define MAX_STEERING 512 //最大转向 < 512
#define CHANNEL_THROTTLE  1 //油门通道
#define CHANNEL_STEERING  0 //转向通道

