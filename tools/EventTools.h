// EventTools.h

#ifndef EVENTTOOLS
#define EVENTTOOLS

#include <vector>
#include <utility> // pair
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>

#include "TString.h"
#include "EventTools.h"
#include "CategorySelection.h"
#include "JetSelectionTools.h"

class EventTools
{
    public: 
        EventTools(){};
        ~EventTools(){};

        static void loadEventsFromFile(TString filename, std::vector<std::pair<int, long long int>>& v);
        static void outputEventsToFile(std::vector<std::pair<int,long long int>>& v, TString filename);
        static TString outputMapKeysCSV(std::map<TString,double>& map);
        static TString outputMapValuesCSV(std::map<TString,double>& map);
        static void outputCategoryCountsToFile(Categorizer& categories, TString filename);
        static bool sameRunAndEvent(std::pair<int,long long int> a, std::pair<int,long long int> b);
        static bool eventInVector(std::pair<int,long long int> e, std::vector<std::pair<int,long long int>> events);
        static void outputEvent(VarSet& vars);
        static void outputEvent(VarSet& vars, Categorizer& categorizer);
        static void cleanByDR(std::vector<TLorentzVector>& v1, std::vector<TLorentzVector>& v2, float dRmin);
};
#endif
