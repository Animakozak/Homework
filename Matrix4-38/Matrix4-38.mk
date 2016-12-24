##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Matrix4-38
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\user\Documents\GitHub\Homework"
ProjectPath            := "C:\Users\user\Documents\GitHub\Homework\Matrix4-38"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=user
Date                   :=07/12/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/TDM-GCC-32/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-32/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Matrix4-38.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-32/bin/ar.exe rcu
CXX      := C:/TDM-GCC-32/bin/g++.exe
CC       := C:/TDM-GCC-32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/matrix4.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/matrix9.cpp$(ObjectSuffix) $(IntermediateDirectory)/matrix30.cpp$(ObjectSuffix) $(IntermediateDirectory)/matrix35.cpp$(ObjectSuffix) $(IntermediateDirectory)/matrix36.cpp$(ObjectSuffix) $(IntermediateDirectory)/matrix14.cpp$(ObjectSuffix) $(IntermediateDirectory)/matrix16.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/matrix4.cpp$(ObjectSuffix): matrix4.cpp $(IntermediateDirectory)/matrix4.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Matrix4-38/matrix4.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/matrix4.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/matrix4.cpp$(DependSuffix): matrix4.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/matrix4.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/matrix4.cpp$(DependSuffix) -MM "matrix4.cpp"

$(IntermediateDirectory)/matrix4.cpp$(PreprocessSuffix): matrix4.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/matrix4.cpp$(PreprocessSuffix) "matrix4.cpp"

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Matrix4-38/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/matrix9.cpp$(ObjectSuffix): matrix9.cpp $(IntermediateDirectory)/matrix9.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Matrix4-38/matrix9.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/matrix9.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/matrix9.cpp$(DependSuffix): matrix9.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/matrix9.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/matrix9.cpp$(DependSuffix) -MM "matrix9.cpp"

$(IntermediateDirectory)/matrix9.cpp$(PreprocessSuffix): matrix9.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/matrix9.cpp$(PreprocessSuffix) "matrix9.cpp"

$(IntermediateDirectory)/matrix30.cpp$(ObjectSuffix): matrix30.cpp $(IntermediateDirectory)/matrix30.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Matrix4-38/matrix30.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/matrix30.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/matrix30.cpp$(DependSuffix): matrix30.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/matrix30.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/matrix30.cpp$(DependSuffix) -MM "matrix30.cpp"

$(IntermediateDirectory)/matrix30.cpp$(PreprocessSuffix): matrix30.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/matrix30.cpp$(PreprocessSuffix) "matrix30.cpp"

$(IntermediateDirectory)/matrix35.cpp$(ObjectSuffix): matrix35.cpp $(IntermediateDirectory)/matrix35.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Matrix4-38/matrix35.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/matrix35.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/matrix35.cpp$(DependSuffix): matrix35.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/matrix35.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/matrix35.cpp$(DependSuffix) -MM "matrix35.cpp"

$(IntermediateDirectory)/matrix35.cpp$(PreprocessSuffix): matrix35.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/matrix35.cpp$(PreprocessSuffix) "matrix35.cpp"

$(IntermediateDirectory)/matrix36.cpp$(ObjectSuffix): matrix36.cpp $(IntermediateDirectory)/matrix36.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Matrix4-38/matrix36.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/matrix36.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/matrix36.cpp$(DependSuffix): matrix36.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/matrix36.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/matrix36.cpp$(DependSuffix) -MM "matrix36.cpp"

$(IntermediateDirectory)/matrix36.cpp$(PreprocessSuffix): matrix36.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/matrix36.cpp$(PreprocessSuffix) "matrix36.cpp"

$(IntermediateDirectory)/matrix14.cpp$(ObjectSuffix): matrix14.cpp $(IntermediateDirectory)/matrix14.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Matrix4-38/matrix14.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/matrix14.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/matrix14.cpp$(DependSuffix): matrix14.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/matrix14.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/matrix14.cpp$(DependSuffix) -MM "matrix14.cpp"

$(IntermediateDirectory)/matrix14.cpp$(PreprocessSuffix): matrix14.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/matrix14.cpp$(PreprocessSuffix) "matrix14.cpp"

$(IntermediateDirectory)/matrix16.cpp$(ObjectSuffix): matrix16.cpp $(IntermediateDirectory)/matrix16.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Matrix4-38/matrix16.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/matrix16.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/matrix16.cpp$(DependSuffix): matrix16.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/matrix16.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/matrix16.cpp$(DependSuffix) -MM "matrix16.cpp"

$(IntermediateDirectory)/matrix16.cpp$(PreprocessSuffix): matrix16.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/matrix16.cpp$(PreprocessSuffix) "matrix16.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


