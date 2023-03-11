#include "Education.h"

unsigned int MinistryOfEducation::GetInfo() {
    return annualBudget;
}

void MinistryOfEducation::AllocateMoney(unsigned int amount) {
    annualBudget -= amount;
}



EducationalOrganization::EducationalOrganization(std::string Name) {
    name = Name;
    rAnk = 16;
    budget = 0;
    std::cout << name << " was just founded!" << std::endl;
}

void EducationalOrganization::MoneyRequest(MinistryOfEducation &MOE, unsigned int amount) {
    if (MOE.GetInfo() - amount > 100000) {
        MOE.AllocateMoney(amount);
        budget += amount;
        std::cout << name << " was allocated " << amount << " rubles" << std::endl;
    }
}

void EducationalOrganization::SpendMoneyOn(Services service, ServicesAndReputations &SAR) {
    switch (service) {
    case FacadeRenovation:
        std::cout << "Facade renovation - ";
        if (budget > SAR.FacadeRenovation) {
            std::cout << "Success!" << std::endl;
            budget -= SAR.FacadeRenovation;
            rAnk += SAR.FacadeRenovationRP;
        }
        else {std::cout << "Failure... Need more money." << std::endl;}
        break;
    case PurchaseOfTechnique:
        std::cout << "Purchase of technique - ";
        if (budget > SAR.PurchaseOfTechnique) {
            std::cout << "Success!" << std::endl;
            budget -= SAR.PurchaseOfTechnique;
            rAnk += SAR.PurchaseOfTechniqueRP;
        }
        else {std::cout << "Failure... Need more money." << std::endl;}
        break;
    case UpgradeSecuritySystem:
        std::cout << "Upgrade security system - ";
        if (budget > SAR.UpgradeSecuritySystem) {
            std::cout << "Success!" << std::endl;
            budget -= SAR.UpgradeSecuritySystem;
            rAnk += SAR.UpgradeSecuritySystemRP;
        }
        else {std::cout << "Failure... Need more money." << std::endl;}
        break;
    default:
        std::cout << "Keeping money for the best times.." << std::endl;
        break;
    }
}



void Donate(EducationalOrganization &EO, unsigned int amount) {
    EO.budget += amount;
    std::cout << EO.name << " received " << amount << " rubles from some kind donater" << std::endl;
}
