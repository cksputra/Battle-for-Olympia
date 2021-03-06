#include <stdio.h>
#include <stdlib.h>
#include "init.h"



void CreateEmptyMap(Map *M,int *NBrs, int *NKol);

void PrintMap(Map M,int NBrs, int NKol);

void AddUnitToMap(Map * M, TypeUnit Unit);

void RemoveUnitFromMap(Map * M, TypeUnit Unit);

void AddBuildingToMap(Map * M, Building building);

void RemoveBuildingFromMap(Map * M, Building building);
