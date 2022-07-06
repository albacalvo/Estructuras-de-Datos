##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PECLLarenaLuengoAlberto
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/EEDD
ProjectPath            :=C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto
IntermediateDirectory  :=../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto
OutDir                 :=../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=laren
Date                   :=07/01/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
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
OutputFile             :=..\..\EEDD\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
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
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
Objects0=../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoCola.cpp$(ObjectSuffix) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoLista.cpp$(ObjectSuffix) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/main.cpp$(ObjectSuffix) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Pila.cpp$(ObjectSuffix) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoArbol.cpp$(ObjectSuffix) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Arbol.cpp$(ObjectSuffix) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Lista.cpp$(ObjectSuffix) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoPila.cpp$(ObjectSuffix) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Gestor.cpp$(ObjectSuffix) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Aficionado.cpp$(ObjectSuffix) \
	../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Cola.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/.d $(Objects) 
	@if not exist "..\..\EEDD\build-$(ConfigurationName)\__\PECLLarenaLuengoAlberto\PECLLarenaLuengoAlberto" mkdir "..\..\EEDD\build-$(ConfigurationName)\__\PECLLarenaLuengoAlberto\PECLLarenaLuengoAlberto"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\..\EEDD\build-$(ConfigurationName)\__\PECLLarenaLuengoAlberto\PECLLarenaLuengoAlberto" mkdir "..\..\EEDD\build-$(ConfigurationName)\__\PECLLarenaLuengoAlberto\PECLLarenaLuengoAlberto"
	@if not exist ""..\..\EEDD\build-$(ConfigurationName)\bin"" mkdir ""..\..\EEDD\build-$(ConfigurationName)\bin""

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/.d:
	@if not exist "..\..\EEDD\build-$(ConfigurationName)\__\PECLLarenaLuengoAlberto\PECLLarenaLuengoAlberto" mkdir "..\..\EEDD\build-$(ConfigurationName)\__\PECLLarenaLuengoAlberto\PECLLarenaLuengoAlberto"

PreBuild:


##
## Objects
##
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoCola.cpp$(ObjectSuffix): NodoCola.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoCola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoCola.cpp$(DependSuffix): NodoCola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoCola.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoCola.cpp$(DependSuffix) -MM NodoCola.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoCola.cpp$(PreprocessSuffix): NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoCola.cpp$(PreprocessSuffix) NodoCola.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoLista.cpp$(ObjectSuffix): NodoLista.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoLista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoLista.cpp$(DependSuffix): NodoLista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoLista.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoLista.cpp$(DependSuffix) -MM NodoLista.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoLista.cpp$(PreprocessSuffix): NodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoLista.cpp$(PreprocessSuffix) NodoLista.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/main.cpp$(ObjectSuffix): main.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/main.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/main.cpp$(DependSuffix) -MM main.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/main.cpp$(PreprocessSuffix) main.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Pila.cpp$(ObjectSuffix): Pila.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Pila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Pila.cpp$(DependSuffix): Pila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Pila.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Pila.cpp$(DependSuffix) -MM Pila.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Pila.cpp$(PreprocessSuffix) Pila.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoArbol.cpp$(ObjectSuffix): NodoArbol.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoArbol.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoArbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoArbol.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoArbol.cpp$(DependSuffix): NodoArbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoArbol.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoArbol.cpp$(DependSuffix) -MM NodoArbol.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoArbol.cpp$(PreprocessSuffix): NodoArbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoArbol.cpp$(PreprocessSuffix) NodoArbol.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Arbol.cpp$(ObjectSuffix): Arbol.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Arbol.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Arbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Arbol.cpp$(DependSuffix): Arbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Arbol.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Arbol.cpp$(DependSuffix) -MM Arbol.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Arbol.cpp$(PreprocessSuffix): Arbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Arbol.cpp$(PreprocessSuffix) Arbol.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Lista.cpp$(ObjectSuffix): Lista.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Lista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Lista.cpp$(DependSuffix): Lista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Lista.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Lista.cpp$(DependSuffix) -MM Lista.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Lista.cpp$(PreprocessSuffix): Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Lista.cpp$(PreprocessSuffix) Lista.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoPila.cpp$(ObjectSuffix): NodoPila.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoPila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoPila.cpp$(DependSuffix): NodoPila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoPila.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoPila.cpp$(DependSuffix) -MM NodoPila.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoPila.cpp$(PreprocessSuffix): NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/NodoPila.cpp$(PreprocessSuffix) NodoPila.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Gestor.cpp$(ObjectSuffix): Gestor.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Gestor.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Gestor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Gestor.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Gestor.cpp$(DependSuffix): Gestor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Gestor.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Gestor.cpp$(DependSuffix) -MM Gestor.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Gestor.cpp$(PreprocessSuffix): Gestor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Gestor.cpp$(PreprocessSuffix) Gestor.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Aficionado.cpp$(ObjectSuffix): Aficionado.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Aficionado.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Aficionado.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Aficionado.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Aficionado.cpp$(DependSuffix): Aficionado.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Aficionado.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Aficionado.cpp$(DependSuffix) -MM Aficionado.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Aficionado.cpp$(PreprocessSuffix): Aficionado.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Aficionado.cpp$(PreprocessSuffix) Aficionado.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Cola.cpp$(ObjectSuffix): Cola.cpp ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Cola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laren/Desktop/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IncludePath)
../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Cola.cpp$(DependSuffix): Cola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Cola.cpp$(ObjectSuffix) -MF../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Cola.cpp$(DependSuffix) -MM Cola.cpp

../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Cola.cpp$(PreprocessSuffix): Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto/Cola.cpp$(PreprocessSuffix) Cola.cpp


-include ../../EEDD/build-$(ConfigurationName)/__/PECLLarenaLuengoAlberto/PECLLarenaLuengoAlberto//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


