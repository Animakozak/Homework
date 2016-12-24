##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Array116-130
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\user\Documents\GitHub\Homework"
ProjectPath            := "C:\Users\user\Documents\GitHub\Homework\Array116-130"
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
ObjectsFileList        :="Array116-130.txt"
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
Objects0=$(IntermediateDirectory)/main_menu.cpp$(ObjectSuffix) $(IntermediateDirectory)/array116.cpp$(ObjectSuffix) $(IntermediateDirectory)/array120.cpp$(ObjectSuffix) $(IntermediateDirectory)/array124.cpp$(ObjectSuffix) $(IntermediateDirectory)/array125.cpp$(ObjectSuffix) $(IntermediateDirectory)/array128.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main_menu.cpp$(ObjectSuffix): main_menu.cpp $(IntermediateDirectory)/main_menu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Array116-130/main_menu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main_menu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main_menu.cpp$(DependSuffix): main_menu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main_menu.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main_menu.cpp$(DependSuffix) -MM "main_menu.cpp"

$(IntermediateDirectory)/main_menu.cpp$(PreprocessSuffix): main_menu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main_menu.cpp$(PreprocessSuffix) "main_menu.cpp"

$(IntermediateDirectory)/array116.cpp$(ObjectSuffix): array116.cpp $(IntermediateDirectory)/array116.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Array116-130/array116.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/array116.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/array116.cpp$(DependSuffix): array116.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/array116.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/array116.cpp$(DependSuffix) -MM "array116.cpp"

$(IntermediateDirectory)/array116.cpp$(PreprocessSuffix): array116.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/array116.cpp$(PreprocessSuffix) "array116.cpp"

$(IntermediateDirectory)/array120.cpp$(ObjectSuffix): array120.cpp $(IntermediateDirectory)/array120.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Array116-130/array120.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/array120.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/array120.cpp$(DependSuffix): array120.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/array120.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/array120.cpp$(DependSuffix) -MM "array120.cpp"

$(IntermediateDirectory)/array120.cpp$(PreprocessSuffix): array120.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/array120.cpp$(PreprocessSuffix) "array120.cpp"

$(IntermediateDirectory)/array124.cpp$(ObjectSuffix): array124.cpp $(IntermediateDirectory)/array124.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Array116-130/array124.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/array124.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/array124.cpp$(DependSuffix): array124.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/array124.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/array124.cpp$(DependSuffix) -MM "array124.cpp"

$(IntermediateDirectory)/array124.cpp$(PreprocessSuffix): array124.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/array124.cpp$(PreprocessSuffix) "array124.cpp"

$(IntermediateDirectory)/array125.cpp$(ObjectSuffix): array125.cpp $(IntermediateDirectory)/array125.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Array116-130/array125.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/array125.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/array125.cpp$(DependSuffix): array125.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/array125.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/array125.cpp$(DependSuffix) -MM "array125.cpp"

$(IntermediateDirectory)/array125.cpp$(PreprocessSuffix): array125.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/array125.cpp$(PreprocessSuffix) "array125.cpp"

$(IntermediateDirectory)/array128.cpp$(ObjectSuffix): array128.cpp $(IntermediateDirectory)/array128.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/Array116-130/array128.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/array128.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/array128.cpp$(DependSuffix): array128.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/array128.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/array128.cpp$(DependSuffix) -MM "array128.cpp"

$(IntermediateDirectory)/array128.cpp$(PreprocessSuffix): array128.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/array128.cpp$(PreprocessSuffix) "array128.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


