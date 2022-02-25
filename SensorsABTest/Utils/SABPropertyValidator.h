//
// SABPropertyValidator.h
// SensorsABTest
//
// Created by 彭远洋 on 2021/10/21.
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

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SABPropertyValidator : NSObject

+ (NSDictionary *_Nullable)validateProperties:(NSDictionary *)properties error:(NSError **)error;

+ (NSDictionary *_Nullable)validateCustomIDs:(NSDictionary<NSString*, NSString*> * _Nullable)customIDs;

@end

NS_ASSUME_NONNULL_END
