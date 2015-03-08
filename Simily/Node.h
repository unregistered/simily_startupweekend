//
//  Node.h
//  Simily
//
//  Created by Chris Li on 3/7/15.
//  Copyright (c) 2015 Simily. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Product : NSObject

@property (nonatomic) NSString *title;
@property (nonatomic) NSString *brand;
@property (nonatomic) NSNumber *price;
@property (nonatomic, assign) BOOL like;
@property (nonatomic, assign) int endorsements;
@property (nonatomic) NSString *image;

@end



@interface Node : NSObject
@property (nonatomic) NSString *selectedOption;
@property (nonatomic) NSString *question;
@property (nonatomic) NSMutableArray *childNodes;
@property (nonatomic) NSMutableArray *products;

+(Node*)createDefaultNodes;

@end

