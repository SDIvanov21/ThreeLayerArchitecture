workspace "ThreeLayerArchitectureTest"

    architecture "x86"

    configurations { "Debug", "Release" }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "ThreeLayerArchitectureTest"

    kind "ConsoleApp"
    
    language "C++"
    cppdialect "C++20"

    targetdir ("./bin/".. outputdir.. "/%{prj.name}")
    objdir ("./bin-int/".. outputdir.. "/%{prj.name}") 

    files { "./%{prj.name}/src/**.cpp", "./%{prj.name}/src/**.h" }

    includedirs {"./%{prj.name}/src"}

    staticruntime "On"

    systemversion "latest"