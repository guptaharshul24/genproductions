ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c      written by the UFO converter
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc

C     Parameters that should not be recomputed event by event.
C     
      IF(READLHA) THEN

        G = 2 * DSQRT(AS*PI)  ! for the first init

        MDL_TH1X1 = MDL_SINBMA

        MDL_SINBMA__EXP__2 = MDL_SINBMA**2

        MDL_TH1X2 = SQRT(DCMPLX(1.000000D+00-MDL_SINBMA__EXP__2))

        MDL_TH2X1 = -SQRT(DCMPLX(1.000000D+00-MDL_SINBMA__EXP__2))

        MDL_TH2X2 = MDL_SINBMA

        MDL_TH3X3 = 1.000000D+00

        MDL_L7 = MDL_LR7

        MDL_LI5 = 0.000000D+00

        MDL_LI6 = 0.000000D+00

        MDL_MZ__EXP__2 = MDL_MZ**2

        MDL_MZ__EXP__4 = MDL_MZ**4

        MDL_SQRT__2 = SQRT(DCMPLX(2.000000D+00))

        MDL_MHC__EXP__2 = MDL_MHC**2

        MDL_MH1__EXP__2 = MDL_MH1**2

        MDL_MH2__EXP__2 = MDL_MH2**2

        MDL_MH3__EXP__2 = MDL_MH3**2

        MDL_ASIN__SINBMA = ASIN(MDL_SINBMA)

        MDL_COMPLEXI = DCMPLX(0.000000D+00,1.000000D+00)

        MDL_TH1X1__EXP__3 = MDL_TH1X1**3

        MDL_TH1X1__EXP__2 = MDL_TH1X1**2

        MDL_TH2X1__EXP__2 = MDL_TH2X1**2

        MDL_TH2X1__EXP__3 = MDL_TH2X1**3

        MDL_TH1X2__EXP__2 = MDL_TH1X2**2

        MDL_TH2X2__EXP__2 = MDL_TH2X2**2

        MDL_TH1X2__EXP__3 = MDL_TH1X2**3

        MDL_TH2X2__EXP__3 = MDL_TH2X2**3

        MDL_TH1X2__EXP__4 = MDL_TH1X2**4

        MDL_TH2X2__EXP__4 = MDL_TH2X2**4

        MDL_TH3X3__EXP__2 = MDL_TH3X3**2

        MDL_TH3X3__EXP__3 = MDL_TH3X3**3

        MDL_TH3X3__EXP__4 = MDL_TH3X3**4

        MDL_TH1X1__EXP__4 = MDL_TH1X1**4

        MDL_TH2X1__EXP__4 = MDL_TH2X1**4

        MDL_MB__EXP__2 = MDL_MB**2

        MDL_MT__EXP__2 = MDL_MT**2

        MDL_TANBETA__EXP__2 = MDL_TANBETA**2

        MDL_YMB__EXP__2 = MDL_YMB**2

        MDL_YMT__EXP__2 = MDL_YMT**2

        MDL_AEW = 1.000000D+00/AEWM1

        MDL_MW = SQRT(DCMPLX(MDL_MZ__EXP__2/2.000000D+00
     $   +SQRT(DCMPLX(MDL_MZ__EXP__4/4.000000D+00-(MDL_AEW*PI
     $   *MDL_MZ__EXP__2)/(MDL_GF*MDL_SQRT__2)))))

        MDL_SQRT__AEW = SQRT(DCMPLX(MDL_AEW))

        MDL_EE = 2.000000D+00*MDL_SQRT__AEW*SQRT(DCMPLX(PI))

        MDL_MW__EXP__2 = MDL_MW**2

        MDL_SW2 = 1.000000D+00-MDL_MW__EXP__2/MDL_MZ__EXP__2

        MDL_CW = SQRT(DCMPLX(1.000000D+00-MDL_SW2))

        MDL_SQRT__SW2 = SQRT(DCMPLX(MDL_SW2))

        MDL_SW = MDL_SQRT__SW2

        MDL_G1 = MDL_EE/MDL_CW

        MDL_GW = MDL_EE/MDL_SW

        MDL_VEV = (2.000000D+00*MDL_MW*MDL_SW)/MDL_EE

        MDL_VEV__EXP__2 = MDL_VEV**2

        MDL_MU2 = MDL_MHC__EXP__2-(MDL_L3*MDL_VEV__EXP__2)/2.000000D+00

        MDL_L1 = -(-(MDL_MH1__EXP__2*MDL_SINBMA__EXP__2)
     $   -MDL_MH2__EXP__2*(1.000000D+00-MDL_SINBMA__EXP__2))
     $   /(2.000000D+00*MDL_VEV__EXP__2)

        MDL_L4 = (2.000000D+00*MDL_MH1__EXP__2+2.000000D+00
     $   *MDL_MH2__EXP__2+4.000000D+00*MDL_MH3__EXP__2-8.000000D+00
     $   *MDL_MHC__EXP__2+2.000000D+00*(-MDL_MH1__EXP__2
     $   +MDL_MH2__EXP__2)*COS(2.000000D+00*(PI/2.000000D+00
     $   -MDL_ASIN__SINBMA)))/(4.000000D+00*MDL_VEV__EXP__2)

        MDL_LR5 = (2.000000D+00*(MDL_MH1__EXP__2+MDL_MH2__EXP__2
     $   -2.000000D+00*MDL_MH3__EXP__2)-2.000000D+00*(MDL_MH1-MDL_MH2)
     $   *(MDL_MH1+MDL_MH2)*COS(2.000000D+00*(PI/2.000000D+00
     $   -MDL_ASIN__SINBMA)))/(8.000000D+00*MDL_VEV__EXP__2)

        MDL_LR6 = ((-MDL_MH1__EXP__2+MDL_MH2__EXP__2)*MDL_SINBMA
     $   *SQRT(DCMPLX(1.000000D+00-MDL_SINBMA__EXP__2)))
     $   /MDL_VEV__EXP__2

        MDL_YB = (MDL_YMB*MDL_SQRT__2)/MDL_VEV

        MDL_YT = (MDL_YMT*MDL_SQRT__2)/MDL_VEV

        MDL_YTAU = (MDL_YMTAU*MDL_SQRT__2)/MDL_VEV

        MDL_MU1 = -(MDL_L1*MDL_VEV__EXP__2)

        MDL_L5 = MDL_COMPLEXI*MDL_LI5+MDL_LR5

        MDL_L6 = MDL_COMPLEXI*MDL_LI6+MDL_LR6

        MDL_MU3 = -(MDL_L6*MDL_VEV__EXP__2)/2.000000D+00

        MDL_I1A33 = (MDL_TANBETA*MDL_YMB*MDL_SQRT__2)/MDL_VEV

        MDL_I2A33 = -((MDL_YMT*MDL_SQRT__2)/(MDL_TANBETA*MDL_VEV))

        MDL_I3A33 = -((MDL_YMT*MDL_SQRT__2)/(MDL_TANBETA*MDL_VEV))

        MDL_I4A33 = (MDL_TANBETA*MDL_YMB*MDL_SQRT__2)/MDL_VEV

        MDL_I5A33 = MDL_YB

        MDL_I6A33 = MDL_YT

        MDL_I7A33 = MDL_YT

        MDL_I8A33 = MDL_YB

        MDL_CW__EXP__2 = MDL_CW**2

        MDL_GW__EXP__2 = MDL_GW**2

        MDL_G1__EXP__2 = MDL_G1**2

        MDL_SW__EXP__2 = MDL_SW**2

        MDL_YB__EXP__2 = MDL_YB**2

        MDL_YT__EXP__2 = MDL_YT**2

      ENDIF
C     
C     Parameters that should be recomputed at an event by even basis.
C     
      AS = G**2/4/PI

      MDL_SQRT__AS = SQRT(DCMPLX(AS))

      MDL_G__EXP__2 = G**2

      MDL_G__EXP__3 = G**3

      MDL_G__EXP__4 = G**4

C     
C     Definition of the EW coupling used in the write out of aqed
C     
      GAL(1) = 3.5449077018110318D0 / DSQRT(AEWM1)
      GAL(2) = 1D0

