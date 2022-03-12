project(libchardet C CXX)

set(BUILD_SHARED_LIBS ON CACHE BOOL "Build shared libraries")
set(CHARDET_VERSION "1.0.0" CACHE STRING "libchardet version")

include_directories(include src ${CMAKE_CURRENT_BINARY_DIR})

include(CheckCXXCompilerFlag)

set(CMAKE_REQUIRED_QUIET TRUE)
check_cxx_compiler_flag("-fvisibility=hidden" F_VISIBILITY_HIDDEN)

if(F_VISIBILITY_HIDDEN)
  set(HAVE_VISIBILITY TRUE CACHE BOOL "Have -fvisibility= compiler flag")
endif(F_VISIBILITY_HIDDEN)

add_definitions(-DHAVE_CONFIG_H=1)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/chardet-config.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/chardet-config.h)

add_library(chardet 
  src/chardet.cpp
	src/chardet.h
	src/CharDistribution.cpp
	src/CharDistribution.h
	src/JpCntx.cpp
	src/JpCntx.h
	src/nsBig5Prober.cpp
	src/nsBig5Prober.h
	src/nsCharSetProber.cpp
	src/nsCharSetProber.h
	src/nsCodingStateMachine.h
	src/nsEscCharsetProber.cpp
	src/nsEscCharsetProber.h
	src/nsEscSM.cpp
	src/nsEUCJPProber.cpp
	src/nsEUCJPProber.h
	src/nsEUCKRProber.cpp
	src/nsEUCKRProber.h
	src/nsEUCTWProber.cpp
	src/nsEUCTWProber.h
	src/nsGB2312Prober.cpp
	src/nsGB2312Prober.h
	src/nsHebrewProber.cpp
	src/nsHebrewProber.h
	src/nsLatin1Prober.cpp
	src/nsLatin1Prober.h
	src/nsMBCSGroupProber.cpp
	src/nsMBCSGroupProber.h
	src/nsMBCSSM.cpp
	src/nsPkgInt.h
	src/nsSBCharSetProber.cpp
	src/nsSBCharSetProber.h
	src/nsSBCSGroupProber.cpp
	src/nsSBCSGroupProber.h
	src/nsSJISProber.cpp
	src/nsSJISProber.h
	src/nsUniversalDetector.cpp
	src/nsUniversalDetector.h
	src/nsUTF8Prober.cpp
	src/nsUTF8Prober.h
	src/tables/LangArabicModel.cpp
	src/tables/LangEsperantoModel.cpp
	src/tables/LangHungarianModel.cpp
	src/tables/LangHebrewModel.cpp
	src/tables/LangFrenchModel.cpp
	src/tables/LangTurkishModel.cpp
	src/tables/LangBulgarianModel.cpp
	src/tables/LangSpanishModel.cpp
	src/tables/LangVietnameseModel.cpp
	src/tables/LangGreekModel.cpp
	src/tables/LangThaiModel.cpp
	src/tables/LangGermanModel.cpp
	src/tables/LangCyrillicModel.cpp
	src/tables/LangDanishModel.cpp
)
set_target_properties(chardet PROPERTIES SOVERSION "${CHARDET_VERSION}")

set(CHARDET_COMPILE_FLAGS "-DVERSION='\"${CHARDET_VERSION}\"'")

if(F_VISIBILITY_HIDDEN)
  set(CHARDET_COMPILE_FLAGS "-fvisibility=hidden ${CHARDET_COMPILE_FLAGS}")
endif(F_VISIBILITY_HIDDEN)
set_target_properties(chardet PROPERTIES COMPILE_FLAGS "${CHARDET_COMPILE_FLAGS}")


add_executable(bom-test test/bom-test.c)
target_link_libraries(bom-test chardet)

add_executable(sample1 test/sample1.c)
target_link_libraries(sample1 chardet)

add_executable(sample test/sample.c)
target_link_libraries(sample chardet)

install(TARGETS chardet DESTINATION lib)
install(FILES src/chardet.h DESTINATION include)
