-- свойства флюидов


NCOMPS
 9 /


CNAMES
 'CN' 'HE' 'C1' 'C2'
 'C3' 'C4' 'FRC1' 'FRC2'
 'FRC3' /

PVTW
-- pref fvf   compressibility viscosity viscosibility
   254  1.006 0.0000262       2         /


PCRIT
-- critical pressure for each component
 37.59911277
  2.276
 46.04208
 48.83865
 42.455175
 37.51668231
 28.7742578
 19.35346088
 10.39818357 /


TCRIT
-- critical temperature
 142.5433476
   5.2
 190.6
 305.43
 369.8
 420.0361102
 540.886364
 702.7608789
 876.6480238 /


VCRITVIS
-- critical molar volume for viscosity calculations
 0.0903662387625151
 0.014360000203803118
 0.09800000139085667
 0.1480000021004777
 0.20000000283848308
 0.2574158585533525
 0.3838612377479185
 0.8182164493124691
 2.0523074011272004 /


VCRIT
-- critical molar volume for each component
 0.0903662387625151
 0.014360000203803118
 0.09800000139085667
 0.1480000021004777
 0.20000000283848308
 0.2574158585533525
 0.3838612377479185
 0.8182164493124691
 1.4680336638349466 /


ZCRIT
-- critical Z-factors
 0.28668908504303799
 0.0755958003399516
 0.284729476628582
 0.284634795100356
 0.2761646200411181
 0.27653328053186007
 0.24561035112819305
 0.271015155006708
 0.20943176165619099 /


ZCRITVIS
-- critical Z-factors for viscosity calculations
 0.28668908504303799
 0.0755958003399516
 0.284729476628582
 0.284634795100356
 0.276164620041118
 0.27653328053186
 0.245610351128193
 0.271015155006708
 0.292785080524171 /


ZI
-- composition
 0.013977
 0.00033
 0.48923
 0.08466
 0.04455
 0.029763
 0.11056
 0.1502
 0.07673 /


MW
-- molecular weight for each component
  29.47767525
   4
  16.043
  30.07
  44.097
  58.124
  93.52000233
 208.2613582
 452.3213 /


BIC
-- binary interaction coefficients between components
 0
 0.1 0
 0.1 0 0
 0.1 0 0 0
 0.1 0 0 0 0
 0 0.0344914107 0.0344914107 0.009999999776 0.009999999776 0
 0 0.04622734828 0.04622734828 0.009999999776 0.009999999776 0 0
 0 0.05887655414 0.05887655414 0.009999999776 0.009999999776 0 0 0
 /


ACF
-- acentric factor for each component
 0.05693848355
 0.246
 0.013
 0.0986
 0.1524
 0.1961078939
 0.3074986557
 0.6730579587
 1.158154481 /


OMEGAA
-- omega_a values
 0.457235529
 0.457235529
 0.457235529
 0.457235529
 0.457235529
 0.457235529
 0.457235529
 0.457235529
 0.457235529 /


OMEGAB
-- omega_b values
 0.077796074
 0.077796074
 0.077796074
 0.077796074
 0.077796074
 0.077796074
 0.077796074
 0.077796074
 0.077796074 /


PARACHOR
-- component parachors
   44.38769671
   41.2
   77
  108
  150.3
  187.3633524
  291.8560065
  540.3780444
 1142.393381 /


SSHIFT
-- volume shift parameters
 -0.1232217211
  1.178684608
 -0.1442656189
 -0.103268354
 -0.07750138148
 -0.05656792233
 -0.0009338444756
  0.05164242609
  0.09435902924 /


LBCCOEF
-- coeff1 coeff2   coeff3   coeff4    coeff5
   0.1023 0.023364 0.058533 -0.040758 0.0093324 /


EOS
-- eos_type
   PR      /

PRCORR

RTEMP
-- reservoir temperature
 38 /


ZMFVD
-- phase mole fractions
-- depth CN       HE         C1       C2       C3       C4       FRC1     FRC2     FRC3
   1990  0.039854 0.001985   0.779355 0.084507 0.034359 0.015542 0.041369 0.002998 0.000031
   1999  0.039854 0.001985   0.779355 0.084507 0.034359 0.015542 0.041369 0.002998 0.000031
   2000  0.013977 0.00033003 0.48923  0.08466  0.04455  0.029763 0.11056  0.1502   0.07673
   2050  0.013977 0.00033003 0.48923  0.08466  0.04455  0.029763 0.11056  0.1502   0.07673  /



MISCSTR
 5 /

MISCEXP
 0.25 /

SCALECRS
 YES /



DENSITY
-- oil water   gas (sc)
   1*  999.014 /


ROCK
-- pressure rock-compres (rock-matrix-compres block-compres porosity Poisson-coef)
   254      0.000005     /


STCOND
 20 1.01325 /


TRACER
 'A' 'WATER' /
 'B' 'WATER' /
 'C' 'C1'    /
 /


SOR
-- residual oil saturation
   0.05     /