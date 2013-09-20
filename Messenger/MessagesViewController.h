//
//  MessagesViewController.h
//  Oxwall Messenger
//
//  Created by Thomas Ochman on 2013-09-12.
//  Copyright (c) 2013 Underplot ltd. All rights reserved.
//

#import "JSMessagesViewController.h"
#import "ODRefreshControl.h"

@interface MessagesViewController : JSMessagesViewController <JSMessagesViewDelegate, JSMessagesViewDataSource>  {
    ODRefreshControl * refreshControl1;
    NSTimer *timer1,*timer2,*timer3;
}



@property (strong, nonatomic) NSMutableArray *messages;
@property (strong, nonatomic) NSMutableArray *timestamps;
@property (strong, nonatomic) NSDictionary *json;
@property (strong, nonatomic) NSString *newmessage;
@property (strong, nonatomic) NSString *sender;
@property (strong, nonatomic) NSString *receiver;

+ (void)conversationIdMthd : (NSString *)conversationIdStr;
+ (void)receiverIdMthd : (NSString *)receiverIdStr;
- (IBAction)sendMessage:(id)sender;

@end
