//
//  PragBook+CoreDataProperties.h
//  CDBookshelf
//
//  Created by Edward Liu on 16/2/28.
//  Copyright © 2016年 Edward Liu. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "PragBook.h"

NS_ASSUME_NONNULL_BEGIN

@interface PragBook (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSSet<Author *> *authors;
@property (nullable, nonatomic, retain) NSSet<Chapter *> *chapters;

@end

@interface PragBook (CoreDataGeneratedAccessors)

- (void)addAuthorsObject:(Author *)value;
- (void)removeAuthorsObject:(Author *)value;
- (void)addAuthors:(NSSet<Author *> *)values;
- (void)removeAuthors:(NSSet<Author *> *)values;

- (void)addChaptersObject:(Chapter *)value;
- (void)removeChaptersObject:(Chapter *)value;
- (void)addChapters:(NSSet<Chapter *> *)values;
- (void)removeChapters:(NSSet<Chapter *> *)values;

@end

NS_ASSUME_NONNULL_END
