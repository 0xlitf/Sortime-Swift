//
//  Sortime-Bridging-Header.h
//  Sortime-Swift
//
//  Created by Calcifer on 15/12/14.
//  Copyright © 2015年 com.Carcifer. All rights reserved.
//

#ifndef Sortime_Bridging_Header_h
#define Sortime_Bridging_Header_h

#import "Singleton.h"
#import "Masonry.h"
#import "BlocksKit+UIKit.h"
#import "BlocksKit.h"
#import "AddFriendSearchView.h"
#import "AddFriendTableView.h"
#import "AddFriendViewController.h"
#import "AleatNavigationController.h"
#import "AlertTableView.h"
#import "AlertViewController.h"
#import "BaseTableViewController.h"
#import "BaseViewController.h"
#import "CCF_Extension.h"
#import "CalendarCoverView.h"
#import "CalendarDayView.h"
#import "CalendarListPageNoticeView.h"
#import "CalendarListPageTableView.h"
#import "CalendarListPageTableViewCell.h"
#import "CalendarListPageView.h"
#import "CalendarListPageViewController.h"
#import "CalendarListPageWeatherModel.h"
#import "CalendarListPageWeatherView.h"
#import "CalendarListView.h"
#import "CalendarMonthView.h"
#import "CalendarNavigationController.h"
#import "CalendarSwitchView.h"
#import "CalendarSwitchViewController.h"
#import "CalendarTitleView.h"
#import "CalendarView.h"
#import "CalendarViewController.h"
#import "CalendarWeekView.h"
#import "DataBaseManager.h"
#import "DataBaseManager.h"
#import "MainTabBar.h"
#import "MainTabBarController.h"
#import "NSArray+Extension.h"
#import "NSDate+CalciferExtension.h"
#import "NSDictionary+Extension.h"
#import "NSString+ChineseCalendar.h"
#import "SaveTool.h"
#import "SegmentButtonView.h"
#import "SettingArrowModel.h"
#import "SettingCell.h"
#import "SettingGroup.h"
#import "SettingLabelModel.h"
#import "SettingModel.h"
#import "SettingNavigationController.h"
#import "SettingSwitchModel.h"
#import "SettingViewController.h"
#import "SmartAddNavigationController.h"
#import "SmartAddTitleView.h"
#import "SmartAddTypeView.h"
#import "SmartAddViewController.h"
#import "TwoDimentionCodeViewController.h"
#import "UIBarButtonItem+Extension.h"
#import "UIImage+Extension.h"
#import "UIView+Extension.h"

// includes
#import "AFNetworking.h"

#import "CCF_Extension.h"
#import "GPUImage.h"
#import "Masonry.h"
#import "NSString+ChineseCalendar.h"
#import <CocoaLumberjack/CocoaLumberjack.h>

/**
 *  @brief 输出格式如下的打印信息：(类名:行数   打印的信息),
 * 只有在DEBUG模式下输出，release模式不会输出(Build Settings 中 Preprocessor
 * Macros 的 Debug 后边会有 DEBUG = 1 定义)
 */

#ifdef DEBUG
#define NSLog(FORMAT, ...)                                                     \
  fprintf(stderr, "%s:%d\t%s\n", [[[NSString stringWithUTF8String:__FILE__]    \
                                     lastPathComponent] UTF8String],           \
          __LINE__,                                                            \
          [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);

//#define NSLog(FORMAT, ...) fprintf(stderr,"%s\n", [[NSString
// stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(...)
#endif

// DDlog
#import "DDLog.h"
#if DEBUG
static const DDLogLevel ddLogLevel = DDLogLevelVerbose;
#else
static const DDLogLevel ddLogLevel = DDLogLevelWarning;
#endif

// size
#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height

#define WeakSelf(weakself) __typeof(&*self) weakself = self;

// UIColor
#define kLightBlueColor                                                        \
  [UIColor colorWithRed:0.349 green:0.678 blue:0.922 alpha:1.00]

// pathStr
#define ccf_bundlePath [[NSBundle mainBundle] bundlePath]
#define ccf_DocumentsPath                                                      \
  NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask,   \
                                      YES)                                     \
      .firstObject
#define ccf_LibraryPath                                                        \
  NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask,    \
                                      NO)                                      \
      .firstObject
#define ccf_Caches                                                             \
  NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask,     \
                                      YES)                                     \
      .firstObject
#define ccf_userDefaults [NSUserDefaults standardUserDefaults]
#define ccf_TmpPath NSTemporaryDirectory()

#endif /* Sortime_Bridging_Header_h */
