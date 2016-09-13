/// @ref gtc_type_aligned
/// @file glm/gtc/type_aligned.hpp

#pragma once

#include "../vec2.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"
#include "../gtc/vec1.hpp"

namespace glm
{
	template <typename T, precision P> struct tvec1;
	template <typename T, precision P> struct tvec2;
	template <typename T, precision P> struct tvec3;
	template <typename T, precision P> struct tvec4;

	typedef tvec1<float, aligned_highp>		aligned_highp_vec1_t;
	typedef tvec1<float, aligned_mediump>	aligned_mediump_vec1_t;
	typedef tvec1<float, aligned_lowp>		aligned_lowp_vec1_t;
	typedef tvec1<double, aligned_highp>	aligned_highp_dvec1_t;
	typedef tvec1<double, aligned_mediump>	aligned_mediump_dvec1_t;
	typedef tvec1<double, aligned_lowp>		aligned_lowp_dvec1_t;
	typedef tvec1<int, aligned_highp>		aligned_highp_ivec1_t;
	typedef tvec1<int, aligned_mediump>		aligned_mediump_ivec1_t;
	typedef tvec1<int, aligned_lowp>		aligned_lowp_ivec1_t;
	typedef tvec1<uint, aligned_highp>		aligned_highp_uvec1_t;
	typedef tvec1<uint, aligned_mediump>	aligned_mediump_uvec1_t;
	typedef tvec1<uint, aligned_lowp>		aligned_lowp_uvec1_t;
	typedef tvec1<bool, aligned_highp>		aligned_highp_bvec1_t;
	typedef tvec1<bool, aligned_mediump>	aligned_mediump_bvec1_t;
	typedef tvec1<bool, aligned_lowp>		aligned_lowp_bvec1_t;

	/// @addtogroup gtc_type_aligned
	/// @{

	/// 2 components vector of high single-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<float, aligned_highp>		aligned_highp_vec2;

	/// 2 components vector of medium single-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<float, aligned_mediump>	aligned_mediump_vec2;

	/// 2 components vector of low single-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<float, aligned_lowp>		aligned_lowp_vec2;

	/// 2 components vector of high double-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<double, aligned_highp>	aligned_highp_dvec2;

	/// 2 components vector of medium double-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<double, aligned_mediump>	aligned_mediump_dvec2;

	/// 2 components vector of low double-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<double, aligned_lowp>		aligned_lowp_dvec2;

	/// 2 components vector of high precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<int, aligned_highp>		aligned_highp_ivec2;

	/// 2 components vector of medium precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<int, aligned_mediump>		aligned_mediump_ivec2;

	/// 2 components vector of low precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<int, aligned_lowp>		aligned_lowp_ivec2;

	/// 2 components vector of high precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<uint, aligned_highp>		aligned_highp_uvec2;

	/// 2 components vector of medium precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<uint, aligned_mediump>	aligned_mediump_uvec2;

	/// 2 components vector of low precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<uint, aligned_lowp>		aligned_lowp_uvec2;

	/// 2 components vector of high precision bool numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<bool, aligned_highp>		aligned_highp_bvec2;

	/// 2 components vector of medium precision bool numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<bool, aligned_mediump>	aligned_mediump_bvec2;

	/// 2 components vector of low precision bool numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec2<bool, aligned_lowp>		aligned_lowp_bvec2;

	/// 3 components vector of high single-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<float, aligned_highp>		aligned_highp_vec3;

	/// 3 components vector of medium single-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<float, aligned_mediump>	aligned_mediump_vec3;

	/// 3 components vector of low single-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<float, aligned_lowp>		aligned_lowp_vec3;

	/// 3 components vector of high double-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<double, aligned_highp>	aligned_highp_dvec3;

	/// 3 components vector of medium double-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<double, aligned_mediump>	aligned_mediump_dvec3;

	/// 3 components vector of low double-precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<double, aligned_lowp>		aligned_lowp_dvec3;

	/// 3 components vector of high precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<int, aligned_highp>		aligned_highp_ivec3;

	/// 3 components vector of medium precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<int, aligned_mediump>		aligned_mediump_ivec3;

	/// 3 components vector of low precision signed integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<int, aligned_lowp>		aligned_lowp_ivec3;

	/// 3 components vector of high precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<uint, aligned_highp>		aligned_highp_uvec3;

	/// 3 components vector of medium precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<uint, aligned_mediump>	aligned_mediump_uvec3;

	/// 3 components vector of low precision unsigned integer numbers.
	/// There is no guarantee on the actual precision.
	typedef tvec3<uint, aligned_lowp>		aligned_lowp_uvec3;

	/// 3 components vector of high precision bool numbers.
	typedef tvec3<bool, aligned_highp>		aligned_highp_bvec3;

	/// 3 components vector of medium precision bool numbers.
	typedef tvec3<bool, aligned_mediump>	aligned_mediump_bvec3;

	/// 3 components vector of low precision bool numbers.
	typedef tvec3<bool, aligned_lowp>		aligned_lowp_bvec3;

	/// 4 components vector of high single-precision floating-point numbers.
	typedef tvec4<float, aligned_highp>		aligned_highp_vec4;

	/// 4 components vector of medium single-precision floating-point numbers.
	typedef tvec4<float, aligned_mediump>	aligned_mediump_vec4;

	/// 4 components vector of low single-precision floating-point numbers.
	typedef tvec4<float, aligned_lowp>		aligned_lowp_vec4;

	/// 4 components vector of high double-precision floating-point numbers.
	typedef tvec4<double, aligned_highp>	aligned_highp_dvec4;

	/// 4 components vector of medium double-precision floating-point numbers.
	typedef tvec4<double, aligned_mediump>	aligned_mediump_dvec4;

	/// 4 components vector of low double-precision floating-point numbers.
	typedef tvec4<double, aligned_lowp>		aligned_lowp_dvec4;

	/// 4 components vector of high precision signed integer numbers.
	typedef tvec4<int, aligned_highp>		aligned_highp_ivec4;

	/// 4 components vector of medium precision signed integer numbers.
	typedef tvec4<int, aligned_mediump>		aligned_mediump_ivec4;

	/// 4 components vector of low precision signed integer numbers.
	typedef tvec4<int, aligned_lowp>		aligned_lowp_ivec4;

	/// 4 components vector of high precision unsigned integer numbers.
	typedef tvec4<uint, aligned_highp>		aligned_highp_uvec4;

	/// 4 components vector of medium precision unsigned integer numbers.
	typedef tvec4<uint, aligned_mediump>	aligned_mediump_uvec4;

	/// 4 components vector of low precision unsigned integer numbers.
	typedef tvec4<uint, aligned_lowp>		aligned_lowp_uvec4;

	/// 4 components vector of high precision bool numbers.
	typedef tvec4<bool, aligned_highp>		aligned_highp_bvec4;

	/// 4 components vector of medium precision bool numbers.
	typedef tvec4<bool, aligned_mediump>	aligned_mediump_bvec4;

	/// 4 components vector of low precision bool numbers.
	typedef tvec4<bool, aligned_lowp>		aligned_lowp_bvec4;

#if(defined(GLM_PRECISION_LOWP_FLOAT))
	typedef aligned_lowp_vec2			aligned_vec2;
	typedef aligned_lowp_vec3			aligned_vec3;
	typedef aligned_lowp_vec4			aligned_vec4;
#elif(defined(GLM_PRECISION_MEDIUMP_FLOAT))
	typedef aligned_mediump_vec2		aligned_vec2;
	typedef aligned_mediump_vec3		aligned_vec3;
	typedef aligned_mediump_vec4		aligned_vec4;
#else //defined(GLM_PRECISION_HIGHP_FLOAT)
	/// 2 components vector of floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef aligned_highp_vec2			aligned_vec2;

	//! 3 components vector of floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef aligned_highp_vec3			aligned_vec3;

	//! 4 components vector of floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef aligned_highp_vec4			aligned_vec4;
#endif//GLM_PRECISION

#if(defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef aligned_lowp_dvec2			aligned_dvec2;
	typedef aligned_lowp_dvec3			aligned_dvec3;
	typedef aligned_lowp_dvec4			aligned_dvec4;
#elif(defined(GLM_PRECISION_MEDIUMP_DOUBLE))
	typedef aligned_mediump_dvec2		aligned_dvec2;
	typedef aligned_mediump_dvec3		aligned_dvec3;
	typedef aligned_mediump_dvec4		aligned_dvec4;
#else //defined(GLM_PRECISION_HIGHP_DOUBLE)
	/// 2 components vector of double-precision floating-point numbers.
	typedef aligned_highp_dvec2			aligned_dvec2;

	/// 3 components vector of double-precision floating-point numbers.
	typedef aligned_highp_dvec3			aligned_dvec3;

	/// 4 components vector of double-precision floating-point numbers.
	typedef aligned_highp_dvec4			aligned_dvec4;
#endif//GLM_PRECISION

#if(defined(GLM_PRECISION_LOWP_INT))
	typedef aligned_lowp_ivec2			aligned_ivec2;
	typedef aligned_lowp_ivec3			aligned_ivec3;
	typedef aligned_lowp_ivec4			aligned_ivec4;
#elif(defined(GLM_PRECISION_MEDIUMP_INT))
	typedef aligned_mediump_ivec2		aligned_ivec2;
	typedef aligned_mediump_ivec3		aligned_ivec3;
	typedef aligned_mediump_ivec4		aligned_ivec4;
#else //defined(GLM_PRECISION_HIGHP_INT)
	/// 2 components vector of signed integer numbers.
	typedef aligned_highp_ivec2			aligned_ivec2;

	/// 3 components vector of signed integer numbers.
	typedef aligned_highp_ivec3			aligned_ivec3;

	/// 4 components vector of signed integer numbers.
	typedef aligned_highp_ivec4			aligned_ivec4;
#endif//GLM_PRECISION

	// -- Unsigned integer definition --

#if(defined(GLM_PRECISION_LOWP_UINT))
	typedef aligned_lowp_uvec2			aligned_uvec2;
	typedef aligned_lowp_uvec3			aligned_uvec3;
	typedef aligned_lowp_uvec4			aligned_uvec4;
#elif(defined(GLM_PRECISION_MEDIUMP_UINT))
	typedef aligned_mediump_uvec2		aligned_uvec2;
	typedef aligned_mediump_uvec3		aligned_uvec3;
	typedef aligned_mediump_uvec4		aligned_uvec4;
#else //defined(GLM_PRECISION_HIGHP_UINT)
	/// 2 components vector of unsigned integer numbers.
	typedef aligned_highp_uvec2			aligned_uvec2;

	/// 3 components vector of unsigned integer numbers.
	typedef aligned_highp_uvec3			aligned_uvec3;

	/// 4 components vector of unsigned integer numbers.
	typedef aligned_highp_uvec4			aligned_uvec4;
#endif//GLM_PRECISION

#if(defined(GLM_PRECISION_LOWP_BOOL))
	typedef aligned_lowp_bvec2			aligned_bvec2;
	typedef aligned_lowp_bvec3			aligned_bvec3;
	typedef aligned_lowp_bvec4			aligned_bvec4;
#elif(defined(GLM_PRECISION_MEDIUMP_BOOL))
	typedef aligned_mediump_bvec2		aligned_bvec2;
	typedef aligned_mediump_bvec3		aligned_bvec3;
	typedef aligned_mediump_bvec4		aligned_bvec4;
#else //defined(GLM_PRECISION_HIGHP_BOOL)
	/// 2 components vector of boolean.
	typedef aligned_highp_bvec2			aligned_bvec2;

	/// 3 components vector of boolean.
	typedef aligned_highp_bvec3			aligned_bvec3;

	/// 4 components vector of boolean.
	typedef aligned_highp_bvec4			aligned_bvec4;
#endif//GLM_PRECISION

	/// @}
}//namespace glm
