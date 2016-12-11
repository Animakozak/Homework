##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lab_4
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\user\Documents\GitHub\Homework"
ProjectPath            := "C:\Users\user\Documents\GitHub\Homework\OOP\Lab_4"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=user
Date                   :=10/11/2016
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
ObjectsFileList        :="Lab_4.txt"
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
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/A.cpp$(ObjectSuffix) $(IntermediateDirectory)/A1.cpp$(ObjectSuffix) $(IntermediateDirectory)/B.cpp$(ObjectSuffix) $(IntermediateDirectory)/C.cpp$(ObjectSuffix) $(IntermediateDirectory)/base.cpp$(ObjectSuffix) $(IntermediateDirectory)/base2.cpp$(ObjectSuffix) $(IntermediateDirectory)/level1.cpp$(ObjectSuffix) $(IntermediateDirectory)/level2.cpp$(ObjectSuffix) $(IntermediateDirectory)/toplevel.cpp$(ObjectSuffix) \
	



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/A.cpp$(ObjectSuffix): A.cpp $(IntermediateDirectory)/A.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/A.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/A.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/A.cpp$(DependSuffix): A.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/A.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/A.cpp$(DependSuffix) -MM "A.cpp"

$(IntermediateDirectory)/A.cpp$(PreprocessSuffix): A.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/A.cpp$(PreprocessSuffix) "A.cpp"

$(IntermediateDirectory)/A1.cpp$(ObjectSuffix): A1.cpp $(IntermediateDirectory)/A1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/A1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/A1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/A1.cpp$(DependSuffix): A1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/A1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/A1.cpp$(DependSuffix) -MM "A1.cpp"

$(IntermediateDirectory)/A1.cpp$(PreprocessSuffix): A1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/A1.cpp$(PreprocessSuffix) "A1.cpp"

$(IntermediateDirectory)/B.cpp$(ObjectSuffix): B.cpp $(IntermediateDirectory)/B.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/B.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/B.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/B.cpp$(DependSuffix): B.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/B.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/B.cpp$(DependSuffix) -MM "B.cpp"

$(IntermediateDirectory)/B.cpp$(PreprocessSuffix): B.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/B.cpp$(PreprocessSuffix) "B.cpp"

$(IntermediateDirectory)/C.cpp$(ObjectSuffix): C.cpp $(IntermediateDirectory)/C.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/C.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/C.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/C.cpp$(DependSuffix): C.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/C.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/C.cpp$(DependSuffix) -MM "C.cpp"

$(IntermediateDirectory)/C.cpp$(PreprocessSuffix): C.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/C.cpp$(PreprocessSuffix) "C.cpp"

$(IntermediateDirectory)/base.cpp$(ObjectSuffix): base.cpp $(IntermediateDirectory)/base.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/base.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/base.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/base.cpp$(DependSuffix): base.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/base.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/base.cpp$(DependSuffix) -MM "base.cpp"

$(IntermediateDirectory)/base.cpp$(PreprocessSuffix): base.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/base.cpp$(PreprocessSuffix) "base.cpp"

$(IntermediateDirectory)/base2.cpp$(ObjectSuffix): base2.cpp $(IntermediateDirectory)/base2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/base2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/base2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/base2.cpp$(DependSuffix): base2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/base2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/base2.cpp$(DependSuffix) -MM "base2.cpp"

$(IntermediateDirectory)/base2.cpp$(PreprocessSuffix): base2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/base2.cpp$(PreprocessSuffix) "base2.cpp"

$(IntermediateDirectory)/level1.cpp$(ObjectSuffix): level1.cpp $(IntermediateDirectory)/level1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/level1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/level1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/level1.cpp$(DependSuffix): level1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/level1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/level1.cpp$(DependSuffix) -MM "level1.cpp"

$(IntermediateDirectory)/level1.cpp$(PreprocessSuffix): level1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/level1.cpp$(PreprocessSuffix) "level1.cpp"

$(IntermediateDirectory)/level2.cpp$(ObjectSuffix): level2.cpp $(IntermediateDirectory)/level2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/level2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/level2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/level2.cpp$(DependSuffix): level2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/level2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/level2.cpp$(DependSuffix) -MM "level2.cpp"

$(IntermediateDirectory)/level2.cpp$(PreprocessSuffix): level2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/level2.cpp$(PreprocessSuffix) "level2.cpp"

$(IntermediateDirectory)/toplevel.cpp$(ObjectSuffix): toplevel.cpp $(IntermediateDirectory)/toplevel.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Documents/GitHub/Homework/OOP/Lab_4/toplevel.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/toplevel.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/toplevel.cpp$(DependSuffix): toplevel.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/toplevel.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/toplevel.cpp$(DependSuffix) -MM "toplevel.cpp"

$(IntermediateDirectory)/toplevel.cpp$(PreprocessSuffix): toplevel.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/toplevel.cpp$(PreprocessSuffix) "toplevel.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


