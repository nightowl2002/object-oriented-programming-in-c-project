#ifndef SENECA_LINEMANAGER_H
#define SENECA_LINEMANAGER_H
#include<iostream>
#include<vector>
#include"Workstation.h"
namespace seneca {
    class LineManager {
        std::vector<Workstation*> m_activeLine;
        size_t m_cntCustomerOrder;
        Workstation* m_firstStation;

    public:
        LineManager(const std::string& file, const std::vector<Workstation*>& stations); //custom constructor
        void reorderStations(); //reorders stations in m_activeLine
        bool run(std::ostream& os); //performs 1 iteration of each operation.
        void display(std::ostream& os) const; //displays LineManager info
    };
}
#endif // !SENECA_LINEMANAGER_H