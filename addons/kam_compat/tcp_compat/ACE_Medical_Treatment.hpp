class ACE_Medical_Treatment {
    class Medication {
        class TCP_ACE_BiomedicalFoam {
            alphaFactor = -0.3;
            opioidRelief = 0.1;
            opioidEffect = 0.2;
        };
        class TCP_StimPack {
            painReduce = 0.8;
            hrIncreaseLow[] = {-10, -20};
            hrIncreaseNormal[] = {-10, -30};
            hrIncreaseHigh[] = {-10, -35};
            timeInSystem = 900;
            timeTillMaxEffect = 30;
            maxDose = 4;
            maxDoseDeviation = 4;
            incompatibleMedication[] = {};
            viscosityChange = -10;
            opioidRelief = 0.1;
        };
    };
};
