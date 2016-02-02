//
//  Copyright (c) 2016 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

@import Foundation;
@import FirebaseDatabase;

#import "STXPostItem.h"
#import "FPComment.h"

@interface FPPost : NSObject <STXPostItem>

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

/**
 *  Initialize data model from snapshot
 */
- (instancetype)initWithSnapshot:(FDataSnapshot *)snapshot;

- (void)addComment:(FPComment *)comment;
- (NSArray *)mutableComments;
@property (nonatomic) BOOL liked;

@end
