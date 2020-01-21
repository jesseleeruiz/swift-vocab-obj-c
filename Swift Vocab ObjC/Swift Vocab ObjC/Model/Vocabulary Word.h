//
//  Vocabulary Word.h
//  Swift Vocab ObjC
//
//  Created by Jesse Ruiz on 1/20/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Vocabulary_Word : NSObject

@property NSString *word;
@property NSString *definition;

- (instancetype)initWithWord:(NSString *)word definition:(NSString *)definition;

@end

NS_ASSUME_NONNULL_END
