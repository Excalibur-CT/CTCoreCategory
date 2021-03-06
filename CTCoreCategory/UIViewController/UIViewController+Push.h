//
//  UIViewController+Push.h
//  VJUIDemo
//
//  Created by Admin on 16/6/30.
//  Copyright © 2016年 Arvin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Push)

/**
 *  获取APP 根ViewController
 *
 *  @return
 */
- (UIViewController *)rootViewController;

/**
 *  返回方法
 */
- (void)back;

/**
 *  push方法
 *
 *  @param vc 控制器
 */
- (void)pushToXIBController:(Class)vcClass;

- (void)pushToViewController:(Class)vcClass;

- (void)pushToController:(UIViewController *)vc;

- (void)pushToXIBController:(Class)vcClass param:(void (^)(id toVC))deliverParam;

- (void)pushToViewController:(Class)vcClass param:(void (^)(id toVC))deliverParam;

- (void)popViewController;
    
- (void)popToRootViewController;

- (void)popToViewController:(Class)vcClass;

#pragma mark - present -
- (void)presentController:(UIViewController *)controller;

- (void)presentViewController:(Class)vcClass;

- (void)presentViewControllerInNavigation:(Class)vcClass;

- (void)presentXIBController:(Class)vcClass;

- (void)presentXIBControllerInNavigation:(Class)vcClass;

- (void)presentViewController:(Class)vcClass param:(void (^)(id toVC))deliverParam;

- (void)presentViewControllerInNavigation:(Class)vcClass param:(void (^)(id toVC))deliverParam;

- (void)presentXIBController:(Class)vcClass param:(void (^)(id toVC))deliverParam;

- (void)presentXIBControllerInNavigation:(Class)vcClass param:(void (^)(id toVC))deliverParam;

- (void)dismissViewController;

@end
