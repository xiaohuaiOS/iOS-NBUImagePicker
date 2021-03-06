//
//  UIView+NBUAdditions.h
//  NBUKit
//
//  Created by Ernesto Rivera on 2012/08/06.
//  Copyright (c) 2012-2017 CyberAgent Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

/**
 NBUKit additions to UIViews.
 
 - Ease access to view's size, origin, UIViewController, UINavigationController and UITabBarController
 */
@interface UIView (NBUAdditions)

/// @name Properties

/// Easily access/modify a view's frame size.
@property(nonatomic) CGSize size;

/// Easily access/modify a view's frame origin.
@property(nonatomic) CGPoint origin;

/// @name Access Controllers

/// Convenience method to access a view's related UIViewController.
/// @warning You should not retain this value to avoid circular dependencies.
@property (nonatomic, readonly) UIViewController * viewController;

/// Convenience method to access a view's controller related UINavigationController.
/// @warning You should not retain this value to avoid circular dependencies.
@property (nonatomic, readonly) UINavigationController * navigationController;

/// Convenience method to access a view's controller related UITabBarController.
/// @warning You should not retain this value to avoid circular dependencies.
@property (nonatomic, readonly) UITabBarController * tabBarController;

@end

