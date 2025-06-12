ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c      written by the UFO converter
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc

      REAL*16 G
      COMMON/MP_STRONG/ G

      COMPLEX*32 GAL(2)
      COMMON/MP_WEAK/ GAL

      COMPLEX*32 MU_R
      COMMON/MP_RSCALE/ MU_R


      REAL*16 MDL_MZ,MDL_MT,MDL_MW,MDL_MH2,MDL_MH3,MDL_MH1,MDL_MB
     $ ,MDL_MHC

      COMMON/MP_MASSES/ MDL_MZ,MDL_MT,MDL_MW,MDL_MH2,MDL_MH3,MDL_MH1
     $ ,MDL_MB,MDL_MHC


      REAL*16 MDL_WH1,MDL_WH2,MDL_WH3,MDL_WW,MDL_WT,MDL_WZ,MDL_WHC

      COMMON/MP_WIDTHS/ MDL_WH1,MDL_WH2,MDL_WH3,MDL_WW,MDL_WT,MDL_WZ
     $ ,MDL_WHC


      COMPLEX*32 GC_2,GC_142,GC_143,GC_199,GC_202

      COMMON/MP_COUPLINGS/ GC_2,GC_142,GC_143,GC_199,GC_202


