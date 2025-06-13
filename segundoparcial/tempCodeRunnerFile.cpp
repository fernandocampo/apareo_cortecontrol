void quienesPrograman(ALUMNO vectorProgramacion[], int nProg, ALUMNO vectorLaboratorio[], int nLab, ALUMNO vectorQuienesPrograman[], int& nTotal)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < nProg && j < nLab)
    {
        if(vectorProgramacion[i].legajo < vectorLaboratorio[j].legajo)
        {
            vectorQuienesPrograman[k++] = vectorProgramacion[i++];
        }
        else if(vectorLaboratorio[j].legajo < vectorProgramacion[i].legajo)
        {
            vectorQuienesPrograman[k++] = vectorLaboratorio[j++];
        }
        else
        {
            vectorQuienesPrograman[k++] = vectorProgramacion[i];
            i++;
            j++;
        }
    }

    while(i < nProg)
    {
        vectorQuienesPrograman[k++] = vectorProgramacion[i++];
    }

    while(j < nLab)
    {
        vectorQuienesPrograman[k++] = vectorLaboratorio[j++];
    }

    nTotal = k;
}
