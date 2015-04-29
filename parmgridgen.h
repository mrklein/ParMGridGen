#ifndef PARMGRIDGEN_H

#define PARMGRIDGEN_H

typedef int idxtype;
typedef double realtype;

void ParMGridGen(idxtype *, idxtype *, realtype *, realtype *, idxtype *,
                 realtype *, int *, int, int, int *, idxtype *, MPI_Comm *);

#endif /* !PARMGRIDGEN_H */

