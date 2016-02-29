//
//  Author+CoreDataProperties.h
//  CDBookshelf
//
//  Created by Edward Liu on 16/2/28.
//  Copyright © 2016年 Edward Liu. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Author.h"

NS_ASSUME_NONNULL_BEGIN

@interface Author (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *firstName;
@property (nullable, nonatomic, retain) NSString *lastName;
@property (nullable, nonatomic, retain) NSManagedObject *book;

@end

NS_ASSUME_NONNULL_END
