/****************************************************************************
Copyright (c) 2008-2010 Ricardo Quesada
Copyright (c) 2010-2012 cocos2d-x.org
Copyright (c) 2011      Zynga Inc.
Copyright (c) 2013-2014 Chukong Technologies Inc.

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __COCOS2D_H__
#define __COCOS2D_H__

// 0x00 HI ME LO
// 00   03 03 00
#define COCOS2D_VERSION 0x00030600

//
// all cocos2d include files
//
#include "base/ccConfig.h"

// base
#include "base/CCRef.h"
#include "base/CCVector.h"
#include "base/CCMap.h"
#include "base/CCAutoreleasePool.h"
#include "base/CCData.h"
#include "base/CCValue.h"
#include "base/ccConfig.h"
#include "base/ccMacros.h"
#include "base/ccTypes.h"
#include "base/CCConfiguration.h"
#include "base/CCDirector.h"
#include "base/ZipUtils.h"
#include "base/CCConsole.h"
#include "base/ccUTF8.h"

// math
#include "math/CCAffineTransform.h"
#include "math/CCGeometry.h"
#include "math/Vec2.h"
#include "math/Vec3.h"
#include "math/Vec4.h"
#include "math/Mat4.h"
#include "math/Quaternion.h"
#include "math/MathUtil.h"
#include "math/CCVertex.h"

// 2d nodes
#include "2d/CCNode.h"
#include "2d/CCLayer.h"
#include "2d/CCScene.h"

#include "2d/CCCamera.h"

// include
#include "base/CCProtocols.h"

// renderer
#include "renderer/CCCustomCommand.h"
#include "renderer/CCGroupCommand.h"
#include "renderer/CCQuadCommand.h"
#include "renderer/CCRenderCommand.h"
#include "renderer/CCRenderCommandPool.h"
#include "renderer/CCRenderer.h"
#include "renderer/CCGLProgram.h"
#include "renderer/CCGLProgramCache.h"
#include "renderer/CCGLProgramState.h"
#include "renderer/ccGLStateCache.h"
#include "renderer/ccShaders.h"
#include "renderer/CCTexture2D.h"
#include "renderer/CCTextureCache.h"
#include "renderer/CCVertexIndexBuffer.h"
#include "renderer/CCVertexIndexData.h"
#include "renderer/CCPrimitive.h"
#include "renderer/CCPrimitiveCommand.h"
#include "renderer/CCTrianglesCommand.h"

// platform
#include "platform/CCDevice.h"
#include "platform/CCCommon.h"
#include "platform/CCFileUtils.h"
#include "platform/CCImage.h"
#include "platform/CCSAXParser.h"
#include "platform/CCThread.h"
#include "platform/CCPlatformConfig.h"
#include "platform/CCPlatformMacros.h"

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    #include "platform/ios/CCApplication-ios.h"
    #include "platform/ios/CCGLViewImpl-ios.h"
    #include "platform/ios/CCGL-ios.h"
    #include "platform/ios/CCStdC-ios.h"
#endif // CC_TARGET_PLATFORM == CC_PLATFORM_IOS

#if (CC_TARGET_PLATFORM == CC_PLATFORM_MAC)
    #include "platform/desktop/CCGLViewImpl-desktop.h"
    #include "platform/mac/CCApplication-mac.h"
    #include "platform/mac/CCGL-mac.h"
    #include "platform/mac/CCStdC-mac.h"
#endif // CC_TARGET_PLATFORM == CC_PLATFORM_MAC

// sprite_nodes
#include "2d/CCSprite.h"
#include "2d/CCSpriteBatchNode.h"

// textures
#include "renderer/CCTextureAtlas.h"

NS_CC_BEGIN

CC_DLL const char* cocos2dVersion();

NS_CC_END

#endif // __COCOS2D_H__
