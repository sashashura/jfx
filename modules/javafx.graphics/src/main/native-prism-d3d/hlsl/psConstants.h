/*
 * Copyright (c) 2013, 2022, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

// see D3DPhongShader.h for register assignments

static const int numMaxLights = 5;

float4 gDiffuseColor : register(c0);
float4 gSpecularColor : register(c1); // specular power is in the alpha
float4 gLightColor[numMaxLights] : register(c4);
float4 gLightAttenuation[numMaxLights] : register(c9);  // {constant, linear, quadratic, on == 1 / off == 0}
float4 gLightRange[numMaxLights] : register(c14);       // {max range, reserved min range, _, _}
float4 gSpotLightFactors[numMaxLights] : register(c19); // {cos(outer), cos(inner) - cos(outer), falloff, _}

float4 gSomethingElse : register(c24);
