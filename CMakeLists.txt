cmake_minimum_required(VERSION 3.25)
project(RubiksCubeSolverV1)

set(CMAKE_CXX_STANDARD 17)

add_executable(RubiksCubeSolverV1 main.cpp RubiksCube.cpp RubiksCube.h RubiksCube1dArray.cpp RubiksCube3dArray.cpp RubiksCube3dArray.h Solver/BFSSolver.h.cpp Solver/DFSSolver.cpp Solver/IDAstarSolver.h.cpp PatternDatabase/CornerDBMaker.cpp PatternDatabase/CornerDBMaker.h RubiksCubeBitboard.cpp PatternDatabase/CornerPatternDatabase.cpp PatternDatabase/CornerPatternDatabase.h PatternDatabase/PatternDatabase.cpp PatternDatabase/PatternDatabase.h PatternDatabase/NibbleArray.cpp PatternDatabase/NibbleArray.h PatternDatabase/math.cpp PatternDatabase/math.h PatternDatabase/PermutationIndexer.h)
