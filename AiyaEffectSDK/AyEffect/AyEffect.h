//
//  AyEffect.h
//  AyEffect
//
//  Created by 汪洋 on 2017/11/28.
//  Copyright © 2017年 深圳市哎吖科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#include "FaceData.h"

extern NSString * const AiyaMessageNotification;
extern NSString * const AiyaMessageNotificationUserInfoKey;

@interface AyEffect : NSObject

/**
 特效文件路径
 */
@property (nonatomic, strong) NSString *effectPath;

/**
 人脸数据
 */
@property (nonatomic, assign) void *faceData;

/**
 垂直翻转帧动画, 默认关
 */
@property (nonatomic, assign) BOOL enalbeVFilp;

/**
 初始化opengl相关的资源
 */
- (void)initGLResource;

/**
 释放opengl相关的资源
 */
- (void)releaseGLtContext;

/**
 绘制特效
 
 @param texture 纹理数据
 @param width 宽度
 @param height 高度
 */
- (void)processWithTexture:(GLuint)texture width:(GLuint)width height:(GLuint)height;

/**
 暂停绘制特效
 */
- (void)pauseProcess;

/**
 恢复绘制特效
 */
- (void)resumeProcess;

@end
