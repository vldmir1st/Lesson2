#ifndef EDUCATION_H_INCLUDED
#define EDUCATION_H_INCLUDED

#include <iostream>

enum Services {
    FacadeRenovation,
    PurchaseOfTechnique,
    UpgradeSecuritySystem
};

class MinistryOfEducation {
private:
    unsigned int annualBudget = 10000000;
public:
    unsigned int GetInfo();
    void AllocateMoney(unsigned int amount);
};

class ServicesAndReputations {
public:
    inline static unsigned int FacadeRenovation = 90000;
    inline static unsigned int FacadeRenovationRP = 5;

    inline static unsigned int PurchaseOfTechnique = 150000;
    inline static unsigned int PurchaseOfTechniqueRP = 15;

    inline static unsigned int UpgradeSecuritySystem = 500000;
    inline static unsigned int UpgradeSecuritySystemRP = 25;
};

class EducationalOrganization {
    friend void Donate(EducationalOrganization &EO, unsigned int amount);
private:
    std::string name;
    unsigned int rAnk;   //max = 100
    unsigned int budget;
public:
    EducationalOrganization(std::string Name);
    void MoneyRequest(MinistryOfEducation &MOE, unsigned int amount);
    void SpendMoneyOn(Services service, ServicesAndReputations &SAR);
};

#endif // EDUCATION_H_INCLUDED
