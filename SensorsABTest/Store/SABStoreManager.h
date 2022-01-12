//
// SABStoreManager.h
// SensorsABTesting
//
// Created by 储强盛 on 2021/12/10.
// Copyright © 2020-2022 Sensors Data Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#if __has_include(<SensorsAnalyticsSDK/SABaseStoreManager.h>)
#import <SensorsAnalyticsSDK/SABaseStoreManager.h>
#elif __has_include("SABaseStoreManager.h")
#import "SABaseStoreManager.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface SABStoreManager : SABaseStoreManager

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
