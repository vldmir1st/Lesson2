#include "Education.h"

int main()
{
    ServicesAndReputations SAR;
    MinistryOfEducation MOE;

    EducationalOrganization School("School Num4");
    School.MoneyRequest(MOE, 200000);
    School.SpendMoneyOn(FacadeRenovation, SAR);

    EducationalOrganization University("FEFU");
    University.MoneyRequest(MOE, 300000);
    University.SpendMoneyOn(UpgradeSecuritySystem, SAR);
    Donate(University, 250000);
    University.SpendMoneyOn(UpgradeSecuritySystem, SAR);

    return 0;
}
