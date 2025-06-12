ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c      written by the UFO converter
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc

C     Parameters that should not be recomputed event by event.
C     
      IF(READLHA) THEN

        MP__G = 2 * SQRT(MP__AS*MP__PI)  ! for the first init

        MP__MDL_TH1X1 = MP__MDL_SINBMA

        MP__MDL_SINBMA__EXP__2 = MP__MDL_SINBMA**2

        MP__MDL_TH1X2 = SQRT(CMPLX((1.000000E+00_16
     $   -MP__MDL_SINBMA__EXP__2),KIND=16))

        MP__MDL_TH2X1 = -SQRT(CMPLX((1.000000E+00_16
     $   -MP__MDL_SINBMA__EXP__2),KIND=16))

        MP__MDL_TH2X2 = MP__MDL_SINBMA

        MP__MDL_TH3X3 = 1.000000E+00_16

        MP__MDL_L7 = MP__MDL_LR7

        MP__MDL_LI5 = 0.000000E+00_16

        MP__MDL_LI6 = 0.000000E+00_16

        MP__MDL_MZ__EXP__2 = MP__MDL_MZ**2

        MP__MDL_MZ__EXP__4 = MP__MDL_MZ**4

        MP__MDL_SQRT__2 = SQRT(CMPLX((2.000000E+00_16),KIND=16))

        MP__MDL_MHC__EXP__2 = MP__MDL_MHC**2

        MP__MDL_MH1__EXP__2 = MP__MDL_MH1**2

        MP__MDL_MH2__EXP__2 = MP__MDL_MH2**2

        MP__MDL_MH3__EXP__2 = MP__MDL_MH3**2

        MP__MDL_ASIN__SINBMA = ASIN(MP__MDL_SINBMA)

        MP__MDL_COMPLEXI = CMPLX(0.000000E+00_16,1.000000E+00_16
     $   ,KIND=16)

        MP__MDL_TH1X1__EXP__3 = MP__MDL_TH1X1**3

        MP__MDL_TH1X1__EXP__2 = MP__MDL_TH1X1**2

        MP__MDL_TH2X1__EXP__2 = MP__MDL_TH2X1**2

        MP__MDL_TH2X1__EXP__3 = MP__MDL_TH2X1**3

        MP__MDL_TH1X2__EXP__2 = MP__MDL_TH1X2**2

        MP__MDL_TH2X2__EXP__2 = MP__MDL_TH2X2**2

        MP__MDL_TH1X2__EXP__3 = MP__MDL_TH1X2**3

        MP__MDL_TH2X2__EXP__3 = MP__MDL_TH2X2**3

        MP__MDL_TH1X2__EXP__4 = MP__MDL_TH1X2**4

        MP__MDL_TH2X2__EXP__4 = MP__MDL_TH2X2**4

        MP__MDL_TH3X3__EXP__2 = MP__MDL_TH3X3**2

        MP__MDL_TH3X3__EXP__3 = MP__MDL_TH3X3**3

        MP__MDL_TH3X3__EXP__4 = MP__MDL_TH3X3**4

        MP__MDL_TH1X1__EXP__4 = MP__MDL_TH1X1**4

        MP__MDL_TH2X1__EXP__4 = MP__MDL_TH2X1**4

        MP__MDL_MB__EXP__2 = MP__MDL_MB**2

        MP__MDL_MT__EXP__2 = MP__MDL_MT**2

        MP__MDL_TANBETA__EXP__2 = MP__MDL_TANBETA**2

        MP__MDL_YMB__EXP__2 = MP__MDL_YMB**2

        MP__MDL_YMT__EXP__2 = MP__MDL_YMT**2

        MP__MDL_AEW = 1.000000E+00_16/MP__AEWM1

        MP__MDL_MW = SQRT(CMPLX((MP__MDL_MZ__EXP__2/2.000000E+00_16
     $   +SQRT(CMPLX((MP__MDL_MZ__EXP__4/4.000000E+00_16-(MP__MDL_AEW
     $   *MP__PI*MP__MDL_MZ__EXP__2)/(MP__MDL_GF*MP__MDL_SQRT__2))
     $   ,KIND=16))),KIND=16))

        MP__MDL_SQRT__AEW = SQRT(CMPLX((MP__MDL_AEW),KIND=16))

        MP__MDL_EE = 2.000000E+00_16*MP__MDL_SQRT__AEW
     $   *SQRT(CMPLX((MP__PI),KIND=16))

        MP__MDL_MW__EXP__2 = MP__MDL_MW**2

        MP__MDL_SW2 = 1.000000E+00_16-MP__MDL_MW__EXP__2
     $   /MP__MDL_MZ__EXP__2

        MP__MDL_CW = SQRT(CMPLX((1.000000E+00_16-MP__MDL_SW2),KIND=16))

        MP__MDL_SQRT__SW2 = SQRT(CMPLX((MP__MDL_SW2),KIND=16))

        MP__MDL_SW = MP__MDL_SQRT__SW2

        MP__MDL_G1 = MP__MDL_EE/MP__MDL_CW

        MP__MDL_GW = MP__MDL_EE/MP__MDL_SW

        MP__MDL_VEV = (2.000000E+00_16*MP__MDL_MW*MP__MDL_SW)
     $   /MP__MDL_EE

        MP__MDL_VEV__EXP__2 = MP__MDL_VEV**2

        MP__MDL_MU2 = MP__MDL_MHC__EXP__2-(MP__MDL_L3
     $   *MP__MDL_VEV__EXP__2)/2.000000E+00_16

        MP__MDL_L1 = -(-(MP__MDL_MH1__EXP__2*MP__MDL_SINBMA__EXP__2)
     $   -MP__MDL_MH2__EXP__2*(1.000000E+00_16-MP__MDL_SINBMA__EXP__2))
     $   /(2.000000E+00_16*MP__MDL_VEV__EXP__2)

        MP__MDL_L4 = (2.000000E+00_16*MP__MDL_MH1__EXP__2+2.000000E
     $   +00_16*MP__MDL_MH2__EXP__2+4.000000E+00_16
     $   *MP__MDL_MH3__EXP__2-8.000000E+00_16*MP__MDL_MHC__EXP__2
     $   +2.000000E+00_16*(-MP__MDL_MH1__EXP__2+MP__MDL_MH2__EXP__2)
     $   *COS(2.000000E+00_16*(MP__PI/2.000000E+00_16
     $   -MP__MDL_ASIN__SINBMA)))/(4.000000E+00_16*MP__MDL_VEV__EXP__2)

        MP__MDL_LR5 = (2.000000E+00_16*(MP__MDL_MH1__EXP__2
     $   +MP__MDL_MH2__EXP__2-2.000000E+00_16*MP__MDL_MH3__EXP__2)
     $   -2.000000E+00_16*(MP__MDL_MH1-MP__MDL_MH2)*(MP__MDL_MH1
     $   +MP__MDL_MH2)*COS(2.000000E+00_16*(MP__PI/2.000000E+00_16
     $   -MP__MDL_ASIN__SINBMA)))/(8.000000E+00_16*MP__MDL_VEV__EXP__2)

        MP__MDL_LR6 = ((-MP__MDL_MH1__EXP__2+MP__MDL_MH2__EXP__2)
     $   *MP__MDL_SINBMA*SQRT(CMPLX((1.000000E+00_16
     $   -MP__MDL_SINBMA__EXP__2),KIND=16)))/MP__MDL_VEV__EXP__2

        MP__MDL_YB = (MP__MDL_YMB*MP__MDL_SQRT__2)/MP__MDL_VEV

        MP__MDL_YT = (MP__MDL_YMT*MP__MDL_SQRT__2)/MP__MDL_VEV

        MP__MDL_YTAU = (MP__MDL_YMTAU*MP__MDL_SQRT__2)/MP__MDL_VEV

        MP__MDL_MU1 = -(MP__MDL_L1*MP__MDL_VEV__EXP__2)

        MP__MDL_L5 = MP__MDL_COMPLEXI*MP__MDL_LI5+MP__MDL_LR5

        MP__MDL_L6 = MP__MDL_COMPLEXI*MP__MDL_LI6+MP__MDL_LR6

        MP__MDL_MU3 = -(MP__MDL_L6*MP__MDL_VEV__EXP__2)/2.000000E+00_16

        MP__MDL_I1A33 = (MP__MDL_TANBETA*MP__MDL_YMB*MP__MDL_SQRT__2)
     $   /MP__MDL_VEV

        MP__MDL_I2A33 = -((MP__MDL_YMT*MP__MDL_SQRT__2)
     $   /(MP__MDL_TANBETA*MP__MDL_VEV))

        MP__MDL_I3A33 = -((MP__MDL_YMT*MP__MDL_SQRT__2)
     $   /(MP__MDL_TANBETA*MP__MDL_VEV))

        MP__MDL_I4A33 = (MP__MDL_TANBETA*MP__MDL_YMB*MP__MDL_SQRT__2)
     $   /MP__MDL_VEV

        MP__MDL_I5A33 = MP__MDL_YB

        MP__MDL_I6A33 = MP__MDL_YT

        MP__MDL_I7A33 = MP__MDL_YT

        MP__MDL_I8A33 = MP__MDL_YB

        MP__MDL_CW__EXP__2 = MP__MDL_CW**2

        MP__MDL_GW__EXP__2 = MP__MDL_GW**2

        MP__MDL_G1__EXP__2 = MP__MDL_G1**2

        MP__MDL_SW__EXP__2 = MP__MDL_SW**2

        MP__MDL_YB__EXP__2 = MP__MDL_YB**2

        MP__MDL_YT__EXP__2 = MP__MDL_YT**2

      ENDIF
C     
C     Parameters that should be recomputed at an event by even basis.
C     
      MP__AS = MP__G**2/4/MP__PI

      MP__MDL_SQRT__AS = SQRT(CMPLX((MP__AS),KIND=16))

      MP__MDL_G__EXP__2 = MP__G**2

      MP__MDL_G__EXP__3 = MP__G**3

      MP__MDL_G__EXP__4 = MP__G**4

C     
C     Definition of the EW coupling used in the write out of aqed
C     
      MP__GAL(1) = 2 * SQRT(MP__PI/MP__AEWM1)
      MP__GAL(2) = 1D0

