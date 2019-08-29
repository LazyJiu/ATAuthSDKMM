//
//  TXCommonUtils.h
//  authsdk
//
//  Created by yangli on 12/03/2018.

#import <Foundation/Foundation.h>

#define TX_Auth_Result_Success      @"6666"
#define TX_Auth_Result_TimeOut      @"5555"
#define TX_Auth_Result_Fail         @"4444"
#define TX_Auth_Result_No_SIM_Card  @"1111"
#define TX_Auth_Result_No_Network   @"2222"
#define TX_Auth_Result_Other_Err    @"3333"
#define TX_Auth_Result_Param_Err    @"3344"

#define TX_Login_Return_Action      @"6667" // 点击了返回按钮
#define TX_Login_SSO_Action         @"6668" // 点击了登录按钮并成功获取了token
#define TX_Login_Change_Action      @"6669" // 点击了切换按钮

@interface TXCommonUtils : NSObject

+ (BOOL)isChinaUnicom;

+ (BOOL)isChinaMobile;

+ (BOOL)isChinaTelecom;

+ (NSString *)getCurrentMobileNetworkName;

+ (NSString *)getCurrentCarrierName;

+ (NSString *)getNetworktype;
+ (BOOL)simSupportedIsOK;

/**
 判断wwan是否开着（通过p0网卡判断，无wifi或有wifi情况下都能检测到）
 @return 结果
 */
+ (BOOL)isWWANOpen;

/**
 判断wwan是否开着（仅无wifi情况下）
 @return 结果
 */
+ (BOOL)reachableViaWWAN;

/**
 获取设备当前网络私网IP地址
 */
+ (NSString *)getMobilePrivateIPAddress:(BOOL)preferIPv4;

@end
