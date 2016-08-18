
/*!
 *  @header BAKit.h
 *          BABaseProject
 *
 *  @brief  BAKit
 *
 *  @author 博爱
 *  @copyright    Copyright © 2016年 博爱. All rights reserved.
 *  @version    V1.0
 */

//                            _ooOoo_
//                           o8888888o
//                           88" . "88
//                           (| -_- |)
//                            O\ = /O
//                        ____/`---'\____
//                      .   ' \\| |// `.
//                       / \\||| : |||// \
//                     / _||||| -:- |||||- \
//                       | | \\\ - /// | |
//                     | \_| ''\---/'' | |
//                      \ .-\__ `-` ___/-. /
//                   ___`. .' /--.--\ `. . __
//                ."" '< `.___\_<|>_/___.' >'"".
//               | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                 \ \ `-. \_ __\ /__ _/ .-` / /
//         ======`-.____`-.___\_____/___.-`____.-'======
//                            `=---='
//
//         .............................................
//                  佛祖镇楼                  BUG辟易
//          佛曰:
//                  写字楼里写字间，写字间里程序员；
//                  程序人员写程序，又拿程序换酒钱。
//                  酒醒只在网上坐，酒醉还来网下眠；
//                  酒醉酒醒日复日，网上网下年复年。
//                  但愿老死电脑间，不愿鞠躬老板前；
//                  奔驰宝马贵者趣，公交自行程序员。
//                  别人笑我忒疯癫，我笑自己命太贱；
//                  不见满街漂亮妹，哪个归得程序员？

/*
 
 *********************************************************************************
 *
 * 在使用BAKit的过程中如果出现bug请及时以以下任意一种方式联系我，我会及时修复bug
 *
 * QQ     : 可以添加ios开发技术群 479663605 在这里找到我(博爱1616【137361770】)
 * 微博    : 博爱1616
 * Email  : 137361770@qq.com
 * GitHub : https://github.com/boai
 * 博客园  : http://www.cnblogs.com/boai/
 * 博客    : http://boai.github.io
 * 简书    : http://www.jianshu.com/users/95c9800fdf47/latest_articles
 * 简书专题 : http://www.jianshu.com/collection/072d578bf782
 
 *********************************************************************************
 
 */


#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

@interface CALayer (MyAnimation)
/*!
 *  晃动动画
 *
 *  @param duration 一次动画用时
 *  @param radius   晃动角度0-180
 *  @param repeat   重复次数
 *  @param finish   动画完成
 */
- (void )shakeAnimationWithDuration:(NSTimeInterval )duration
                       shakeRadius:(CGFloat )radius
                            repeat:(NSUInteger )repeat
                   finishAnimation:(void(^)()) finish;

/*!
 *  根据路径执行动画
 *
 *  @param duration 一次动画用时
 *  @param path     路径CGPathRef
 *  @param repeat   重复次数
 *  @param finish   动画完成
 */
- (void )pathAnimationWithDuration:(NSTimeInterval )duration
                             path:(CGPathRef )path
                           repeat:(NSUInteger )repeat
                  finishAnimation:(void(^)()) finish;


/*! 这两个动画只适合本项目 */
/*! 天上掉下 */
- (void )fallAnimationWithDuration:(NSTimeInterval )duration
                  finishAnimation:(void(^)()) finish;
/*! 上升 */
- (void )floatAnimationWithDuration:(NSTimeInterval )duration
                   finishAnimation:(void(^)()) finish;
@end


@interface UIView(MyAnimation)
/*!
 *  缩放显示动画
 *
 *  @param finish 动画完成
 */

- (void )scaleAnimationShowFinishAnimation:(void(^)()) finish;
/*!
 *  缩放隐藏动画
 *
 *  @param finish 动画完成
 */
- (void )scaleAnimationDismissFinishAnimation:(void(^)()) finish;

@end