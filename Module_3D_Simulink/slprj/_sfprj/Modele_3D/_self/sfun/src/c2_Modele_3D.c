/* Include files */

#include "Modele_3D_sfun.h"
#include "c2_Modele_3D.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c2_emlrtMCI = { 125,/* lineNo */
  13,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 21,/* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo c2_c_emlrtMCI = { 10,/* lineNo */
  23,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo c2_d_emlrtMCI = { 15,/* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo c2_e_emlrtMCI = { 120,/* lineNo */
  9,                                   /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_f_emlrtMCI = { 80,/* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_g_emlrtMCI = { 85,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_h_emlrtMCI = { 87,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_i_emlrtMCI = { 47,/* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtMCInfo c2_j_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c2_k_emlrtMCI = { 28,/* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo c2_l_emlrtMCI = { 35,/* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo c2_m_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo c2_n_emlrtMCI = { 131,/* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo c2_o_emlrtMCI = { 139,/* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo c2_p_emlrtMCI = { 15,/* lineNo */
  9,                                   /* colNo */
  "assertSupportedString",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pName */
};

static emlrtMCInfo c2_q_emlrtMCI = { 53,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c2_r_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c2_s_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c2_t_emlrtMCI = { 10,/* lineNo */
  23,                                  /* colNo */
  "validatenumel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenumel.m"/* pName */
};

static emlrtMCInfo c2_u_emlrtMCI = { 18,/* lineNo */
  23,                                  /* colNo */
  "validatenumel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenumel.m"/* pName */
};

static emlrtMCInfo c2_v_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c2_w_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c2_x_emlrtMCI = { 2405,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtMCInfo c2_y_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo c2_ab_emlrtMCI = { 225,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c2_bb_emlrtMCI = { 18,/* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtMCInfo c2_cb_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c2_db_emlrtMCI = { 133,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo c2_eb_emlrtMCI = { 138,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo c2_fb_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c2_gb_emlrtMCI = { 14,/* lineNo */
  15,                                  /* colNo */
  "scalexpCheck",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpCheck.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 8,  /* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 9,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 12,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 13,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 22,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 23,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 30,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 40,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 45,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 49,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 1,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 4,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 5,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 26,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 27,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 33,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 34,/* lineNo */
  "Forward Kinematics",                /* fcnName */
  "#Modele_3D:131"                     /* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 149,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 152,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 151,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 118,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 150,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 77,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 102,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 112,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 1,/* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 159,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 180,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 182,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 213,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 214,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 155,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 279,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 1,/* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 31,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 56,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 1411,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 1410,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 47,/* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 69,/* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 74,/* lineNo */
  "randi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"/* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 23,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 111,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 133,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 160,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 163,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 165,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 167,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 47,/* lineNo */
  "FastVisualizationHelper",           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\FastVisualizationHelper.m"/* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 1399,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 1404,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 1380,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 1370,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 265,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 269,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 461,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 463,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 468,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 484,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_mc_emlrtRSI = { 485,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_nc_emlrtRSI = { 487,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_oc_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c2_pc_emlrtRSI = { 51,/* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo c2_qc_emlrtRSI = { 13,/* lineNo */
  "any",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\any.m"/* pathName */
};

static emlrtRSInfo c2_rc_emlrtRSI = { 21,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c2_sc_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c2_tc_emlrtRSI = { 645,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_uc_emlrtRSI = { 647,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_vc_emlrtRSI = { 649,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_wc_emlrtRSI = { 13,/* lineNo */
  "all",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\all.m"/* pathName */
};

static emlrtRSInfo c2_xc_emlrtRSI = { 388,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c2_yc_emlrtRSI = { 453,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_ad_emlrtRSI = { 457,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_bd_emlrtRSI = { 460,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_cd_emlrtRSI = { 240,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_dd_emlrtRSI = { 409,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_ed_emlrtRSI = { 410,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_fd_emlrtRSI = { 412,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_gd_emlrtRSI = { 414,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_hd_emlrtRSI = { 415,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_id_emlrtRSI = { 421,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_jd_emlrtRSI = { 261,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_kd_emlrtRSI = { 166,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_ld_emlrtRSI = { 170,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_md_emlrtRSI = { 173,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_nd_emlrtRSI = { 74,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo c2_od_emlrtRSI = { 111,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo c2_pd_emlrtRSI = { 164,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo c2_qd_emlrtRSI = { 91,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_rd_emlrtRSI = { 167,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_sd_emlrtRSI = { 240,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_td_emlrtRSI = { 241,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_ud_emlrtRSI = { 242,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_vd_emlrtRSI = { 16,/* lineNo */
  "lower",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"/* pathName */
};

static emlrtRSInfo c2_wd_emlrtRSI = { 10,/* lineNo */
  "eml_string_transform",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"/* pathName */
};

static emlrtRSInfo c2_xd_emlrtRSI = { 151,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_yd_emlrtRSI = { 252,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_ae_emlrtRSI = { 254,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_be_emlrtRSI = { 256,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_ce_emlrtRSI = { 304,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_de_emlrtRSI = { 145,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ee_emlrtRSI = { 172,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_fe_emlrtRSI = { 182,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ge_emlrtRSI = { 235,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_he_emlrtRSI = { 230,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ie_emlrtRSI = { 234,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_je_emlrtRSI = { 238,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ke_emlrtRSI = { 241,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_le_emlrtRSI = { 243,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_me_emlrtRSI = { 283,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ne_emlrtRSI = { 285,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_oe_emlrtRSI = { 286,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_pe_emlrtRSI = { 293,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_qe_emlrtRSI = { 294,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_re_emlrtRSI = { 296,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_se_emlrtRSI = { 254,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_te_emlrtRSI = { 464,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_ue_emlrtRSI = { 1425,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ve_emlrtRSI = { 1428,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_we_emlrtRSI = { 1434,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_xe_emlrtRSI = { 1723,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ye_emlrtRSI = { 1727,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_af_emlrtRSI = { 443,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_bf_emlrtRSI = { 1448,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_cf_emlrtRSI = { 1452,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_df_emlrtRSI = { 199,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_ef_emlrtRSI = { 200,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_ff_emlrtRSI = { 210,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_gf_emlrtRSI = { 96,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_hf_emlrtRSI = { 99,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c2_if_emlrtRSI = { 283,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c2_jf_emlrtRSI = { 287,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c2_kf_emlrtRSI = { 275,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo c2_lf_emlrtRSI = { 280,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo c2_mf_emlrtRSI = { 448,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_nf_emlrtRSI = { 681,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_of_emlrtRSI = { 688,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_pf_emlrtRSI = { 689,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_qf_emlrtRSI = { 690,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_rf_emlrtRSI = { 34,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c2_sf_emlrtRSI = { 288,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_tf_emlrtRSI = { 722,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_uf_emlrtRSI = { 1070,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_vf_emlrtRSI = { 1072,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_wf_emlrtRSI = { 1075,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_xf_emlrtRSI = { 1086,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_yf_emlrtRSI = { 1637,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ag_emlrtRSI = { 1646,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_bg_emlrtRSI = { 1647,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_cg_emlrtRSI = { 1651,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_dg_emlrtRSI = { 1658,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_eg_emlrtRSI = { 1662,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_fg_emlrtRSI = { 1462,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_gg_emlrtRSI = { 1463,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_hg_emlrtRSI = { 1469,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_ig_emlrtRSI = { 1470,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_jg_emlrtRSI = { 42,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c2_kg_emlrtRSI = { 614,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_lg_emlrtRSI = { 442,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_mg_emlrtRSI = { 444,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_ng_emlrtRSI = { 445,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_og_emlrtRSI = { 447,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_pg_emlrtRSI = { 448,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_qg_emlrtRSI = { 451,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_rg_emlrtRSI = { 312,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c2_sg_emlrtRSI = { 41,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c2_tg_emlrtRSI = { 65,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c2_ug_emlrtRSI = { 21,/* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo c2_vg_emlrtRSI = { 24,/* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo c2_wg_emlrtRSI = { 21,/* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\+validation\\validateNumericM"
  "atrix.m"                            /* pathName */
};

static emlrtRSInfo c2_xg_emlrtRSI = { 24,/* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2tform.m"/* pathName */
};

static emlrtRSInfo c2_yg_emlrtRSI = { 37,/* lineNo */
  "axang2rotm",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2rotm.m"/* pathName */
};

static emlrtRSInfo c2_ah_emlrtRSI = { 15,/* lineNo */
  "normalizeRows",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo c2_bh_emlrtRSI = { 69,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo c2_ch_emlrtRSI = { 23,/* lineNo */
  "quat2tform",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\quat2tform.m"/* pathName */
};

static emlrtRSInfo c2_dh_emlrtRSI = { 22,/* lineNo */
  "quat2rotm",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\quat2rotm.m"/* pathName */
};

static emlrtRSInfo c2_eh_emlrtRSI = { 33,/* lineNo */
  "quat2rotm",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\quat2rotm.m"/* pathName */
};

static emlrtRSInfo c2_fh_emlrtRSI = { 34,/* lineNo */
  "quat2rotm",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\quat2rotm.m"/* pathName */
};

static emlrtRSInfo c2_gh_emlrtRSI = { 35,/* lineNo */
  "quat2rotm",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\quat2rotm.m"/* pathName */
};

static emlrtRSInfo c2_hh_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c2_ih_emlrtRSI = { 49,/* lineNo */
  "rotm2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutils\\rotm2eul.m"/* pathName */
};

static emlrtRSInfo c2_jh_emlrtRSI = { 41,/* lineNo */
  "rotm2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pathName */
};

static emlrtRSInfo c2_kh_emlrtRSI = { 160,/* lineNo */
  "rotm2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pathName */
};

static emlrtRSInfo c2_lh_emlrtRSI = { 150,/* lineNo */
  "rotm2eul",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pathName */
};

static emlrtRSInfo c2_mh_emlrtRSI = { 13,/* lineNo */
  "atan2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m"/* pathName */
};

static emlrtRSInfo c2_nh_emlrtRSI = { 66,/* lineNo */
  "ixfun",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pathName */
};

static emlrtRSInfo c2_oh_emlrtRSI = { 45,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c2_ph_emlrtRSI = { 19,/* lineNo */
  "scalexpAlloc",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pathName */
};

static emlrtRSInfo c2_qh_emlrtRSI = { 43,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c2_rh_emlrtRSI = { 22,/* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo c2_sh_emlrtRSI = { 296,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c2_th_emlrtRSI = { 342,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "Forward Kinematics",                /* fName */
  "#Modele_3D:131"                     /* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "Forward Kinematics",                /* fName */
  "#Modele_3D:131"                     /* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 182,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 206,/* lineNo */
  50,                                  /* colNo */
  "strcmp",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 205,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 206,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 207,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 184,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_i_emlrtRTEI = { 185,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_j_emlrtRTEI = { 186,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_k_emlrtRTEI = { 191,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_l_emlrtRTEI = { 192,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_m_emlrtRTEI = { 193,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_n_emlrtRTEI = { 198,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_o_emlrtRTEI = { 199,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_p_emlrtRTEI = { 200,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_q_emlrtRTEI = { 155,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_r_emlrtRTEI = { 205,/* lineNo */
  50,                                  /* colNo */
  "strcmp",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pName */
};

static emlrtRTEInfo c2_s_emlrtRTEI = { 215,/* lineNo */
  44,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_t_emlrtRTEI = { 280,/* lineNo */
  46,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_u_emlrtRTEI = { 31,/* lineNo */
  24,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtRTEInfo c2_v_emlrtRTEI = { 38,/* lineNo */
  65,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtRTEInfo c2_w_emlrtRTEI = { 484,/* lineNo */
  33,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_x_emlrtRTEI = { 484,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_y_emlrtRTEI = { 485,/* lineNo */
  24,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_ab_emlrtRTEI = { 485,/* lineNo */
  51,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_bb_emlrtRTEI = { 267,/* lineNo */
  40,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_cb_emlrtRTEI = { 642,/* lineNo */
  18,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_db_emlrtRTEI = { 642,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_eb_emlrtRTEI = { 643,/* lineNo */
  18,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_fb_emlrtRTEI = { 643,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_gb_emlrtRTEI = { 16,/* lineNo */
  9,                                   /* colNo */
  "isinf",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\isinf.m"/* pName */
};

static emlrtRTEInfo c2_hb_emlrtRTEI = { 16,/* lineNo */
  9,                                   /* colNo */
  "isnan",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m"/* pName */
};

static emlrtRTEInfo c2_ib_emlrtRTEI = { 647,/* lineNo */
  49,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_jb_emlrtRTEI = { 649,/* lineNo */
  28,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_kb_emlrtRTEI = { 652,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_lb_emlrtRTEI = { 648,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_mb_emlrtRTEI = { 646,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_nb_emlrtRTEI = { 654,/* lineNo */
  42,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_ob_emlrtRTEI = { 654,/* lineNo */
  64,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_pb_emlrtRTEI = { 409,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_qb_emlrtRTEI = { 410,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_rb_emlrtRTEI = { 414,/* lineNo */
  25,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_sb_emlrtRTEI = { 261,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_tb_emlrtRTEI = { 251,/* lineNo */
  40,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_ub_emlrtRTEI = { 251,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_vb_emlrtRTEI = { 307,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_wb_emlrtRTEI = { 305,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_xb_emlrtRTEI = { 165,/* lineNo */
  43,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_yb_emlrtRTEI = { 165,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_ac_emlrtRTEI = { 166,/* lineNo */
  32,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_bc_emlrtRTEI = { 170,/* lineNo */
  59,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_cc_emlrtRTEI = { 173,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_dc_emlrtRTEI = { 191,/* lineNo */
  5,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c2_ec_emlrtRTEI = { 23,/* lineNo */
  22,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m"/* pName */
};

static emlrtRTEInfo c2_fc_emlrtRTEI = { 154,/* lineNo */
  5,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c2_gc_emlrtRTEI = { 172,/* lineNo */
  13,                                  /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c2_hc_emlrtRTEI = { 179,/* lineNo */
  5,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c2_ic_emlrtRTEI = { 168,/* lineNo */
  13,                                  /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c2_jc_emlrtRTEI = { 464,/* lineNo */
  13,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c2_kc_emlrtRTEI = { 1424,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_lc_emlrtRTEI = { 1424,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_mc_emlrtRTEI = { 1425,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_nc_emlrtRTEI = { 30,/* lineNo */
  13,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m"/* pName */
};

static emlrtRTEInfo c2_oc_emlrtRTEI = { 99,/* lineNo */
  61,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c2_pc_emlrtRTEI = { 101,/* lineNo */
  17,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c2_qc_emlrtRTEI = { 230,/* lineNo */
  43,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_rc_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c2_sc_emlrtRTEI = { 59,/* lineNo */
  9,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c2_tc_emlrtRTEI = { 681,/* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_uc_emlrtRTEI = { 689,/* lineNo */
  42,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_vc_emlrtRTEI = { 689,/* lineNo */
  25,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_wc_emlrtRTEI = { 690,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_xc_emlrtRTEI = { 690,/* lineNo */
  25,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_yc_emlrtRTEI = { 1070,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_ad_emlrtRTEI = { 1642,/* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_bd_emlrtRTEI = { 1661,/* lineNo */
  25,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_cd_emlrtRTEI = { 1666,/* lineNo */
  47,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_dd_emlrtRTEI = { 1666,/* lineNo */
  30,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_ed_emlrtRTEI = { 1463,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_fd_emlrtRTEI = { 98,/* lineNo */
  25,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c2_gd_emlrtRTEI = { 1469,/* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_hd_emlrtRTEI = { 442,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_id_emlrtRTEI = { 41,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_jd_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_kd_emlrtRTEI = { 450,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_ld_emlrtRTEI = { 1,/* lineNo */
  26,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutils\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c2_md_emlrtRTEI = { 160,/* lineNo */
  40,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c2_nd_emlrtRTEI = { 160,/* lineNo */
  58,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c2_od_emlrtRTEI = { 55,/* lineNo */
  32,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c2_pd_emlrtRTEI = { 20,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c2_qd_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtRTEInfo c2_rd_emlrtRTEI = { 129,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo c2_sd_emlrtRTEI = { 161,/* lineNo */
  40,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c2_td_emlrtRTEI = { 161,/* lineNo */
  58,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c2_ud_emlrtRTEI = { 161,/* lineNo */
  34,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c2_vd_emlrtRTEI = { 161,/* lineNo */
  77,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c2_wd_emlrtRTEI = { 73,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_xd_emlrtRTEI = { 71,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_yd_emlrtRTEI = { 80,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_ae_emlrtRTEI = { 160,/* lineNo */
  33,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c2_be_emlrtRTEI = { 234,/* lineNo */
  20,                                  /* colNo */
  "ixfun",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c2_ce_emlrtRTEI = { 26,/* lineNo */
  26,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m"/* pName */
};

static emlrtRTEInfo c2_de_emlrtRTEI = { 26,/* lineNo */
  33,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m"/* pName */
};

static emlrtRTEInfo c2_ee_emlrtRTEI = { 646,/* lineNo */
  35,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_fe_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "Forward Kinematics",                /* fName */
  "#Modele_3D:131"                     /* pName */
};

static emlrtRTEInfo c2_ge_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "Forward Kinematics",                /* fName */
  "#Modele_3D:131"                     /* pName */
};

static emlrtRTEInfo c2_he_emlrtRTEI = { 681,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_ie_emlrtRTEI = { 1070,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_je_emlrtRTEI = { 1666,/* lineNo */
  25,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_ke_emlrtRTEI = { 1463,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c2_le_emlrtRTEI = { 160,/* lineNo */
  34,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtBCInfo c2_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  8,                                   /* colNo */
  "config",                            /* aName */
  "Forward Kinematics",                /* fName */
  "#Modele_3D:131",                    /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  8,                                   /* colNo */
  "config",                            /* aName */
  "Forward Kinematics",                /* fName */
  "#Modele_3D:131",                    /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_emlrtDCI = { 215,/* lineNo */
  46,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { 1,/* iFirst */
  7,                                   /* iLast */
  215,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_emlrtECI = { -1, /* nDims */
  215,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo c2_b_emlrtDCI = { 216,/* lineNo */
  44,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_d_emlrtBCI = { 1,/* iFirst */
  7,                                   /* iLast */
  216,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_b_emlrtECI = { -1,/* nDims */
  216,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtECInfo c2_c_emlrtECI = { -1,/* nDims */
  218,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtECInfo c2_d_emlrtECI = { -1,/* nDims */
  219,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo c2_c_emlrtDCI = { 30,/* lineNo */
  32,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_e_emlrtBCI = { 1,/* iFirst */
  200,                                 /* iLast */
  30,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_d_emlrtDCI = { 280,/* lineNo */
  48,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { 1,/* iFirst */
  6,                                   /* iLast */
  280,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_e_emlrtECI = { -1,/* nDims */
  280,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c2_me_emlrtRTEI = { 62,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo c2_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_e_emlrtDCI = { 38,/* lineNo */
  65,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_f_emlrtDCI = { 38,/* lineNo */
  65,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_h_emlrtBCI = { 1,/* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_g_emlrtDCI = { 70,/* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_i_emlrtBCI = { 1,/* iFirst */
  7,                                   /* iLast */
  484,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_h_emlrtDCI = { 484,/* lineNo */
  60,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_i_emlrtDCI = { 459,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c2_f_emlrtECI = { -1,/* nDims */
  267,                                 /* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtBCInfo c2_j_emlrtBCI = { 1,/* iFirst */
  7,                                   /* iLast */
  267,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_j_emlrtDCI = { 267,/* lineNo */
  42,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_k_emlrtBCI = { 1,/* iFirst */
  1,                                   /* iLast */
  466,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_k_emlrtDCI = { 642,/* lineNo */
  47,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_l_emlrtBCI = { 1,/* iFirst */
  7,                                   /* iLast */
  642,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_l_emlrtDCI = { 643,/* lineNo */
  47,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_m_emlrtBCI = { 1,/* iFirst */
  7,                                   /* iLast */
  643,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_g_emlrtECI = { 1,/* nDims */
  646,                                 /* lineNo */
  35,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo c2_m_emlrtDCI = { 654,/* lineNo */
  44,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_n_emlrtBCI = { 1,/* iFirst */
  7,                                   /* iLast */
  654,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_h_emlrtECI = { -1,/* nDims */
  654,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo c2_n_emlrtDCI = { 305,/* lineNo */
  60,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_o_emlrtBCI = { 1,/* iFirst */
  6,                                   /* iLast */
  305,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_o_emlrtDCI = { 264,/* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_p_emlrtDCI = { 285,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_p_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  285,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_q_emlrtDCI = { 286,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_q_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  286,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_r_emlrtDCI = { 288,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_r_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  288,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_s_emlrtDCI = { 289,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_s_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  289,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_t_emlrtBCI = { 0,/* iFirst */
  1,                                   /* iLast */
  264,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRTEInfo c2_ne_emlrtRTEI = { 1433,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c2_u_emlrtBCI = { 0,/* iFirst */
  1,                                   /* iLast */
  1434,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_v_emlrtBCI = { 0,/* iFirst */
  1,                                   /* iLast */
  269,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_w_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  273,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_t_emlrtDCI = { 273,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo c2_oe_emlrtRTEI = { 1451,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c2_x_emlrtBCI = { 0,/* iFirst */
  1,                                   /* iLast */
  1452,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c2_pe_emlrtRTEI = { 286,/* lineNo */
  21,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo c2_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c2_qe_emlrtRTEI = { 686,/* lineNo */
  25,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c2_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  689,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_i_emlrtECI = { 2,/* nDims */
  689,                                 /* lineNo */
  25,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c2_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  690,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_j_emlrtECI = { 2,/* nDims */
  690,                                 /* lineNo */
  25,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo c2_u_emlrtDCI = { 37,/* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo c2_k_emlrtECI = { 1,/* nDims */
  681,                                 /* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo c2_v_emlrtDCI = { 289,/* lineNo */
  51,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_db_emlrtBCI = { 1,/* iFirst */
  7,                                   /* iLast */
  289,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_l_emlrtECI = { 2,/* nDims */
  681,                                 /* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c2_eb_emlrtBCI = { 0,/* iFirst */
  1,                                   /* iLast */
  687,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_fb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1079,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1090,                                /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c2_re_emlrtRTEI = { 1644,/* lineNo */
  25,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c2_hb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1661,                                /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ib_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  1665,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_w_emlrtDCI = { 1666,/* lineNo */
  30,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_jb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1666,                                /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_x_emlrtDCI = { 1666,/* lineNo */
  37,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_kb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1666,                                /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_m_emlrtECI = { -1,/* nDims */
  1666,                                /* lineNo */
  25,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo c2_y_emlrtDCI = { 1642,/* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_ab_emlrtDCI = { 1642,/* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_lb_emlrtBCI = { 0,/* iFirst */
  1,                                   /* iLast */
  1645,                                /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_mb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1651,                                /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c2_se_emlrtRTEI = { 1466,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo c2_bb_emlrtDCI = { 1469,/* lineNo */
  27,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_nb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1469,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_cb_emlrtDCI = { 1469,/* lineNo */
  29,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_ob_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1469,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_db_emlrtDCI = { 1474,/* lineNo */
  38,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_pb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1470,                                /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_qb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1474,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_rb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1474,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_sb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1474,                                /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_tb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ub_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_vb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  93,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_n_emlrtECI = { -1,/* nDims */
  160,                                 /* lineNo */
  13,                                  /* colNo */
  "rotm2eul",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2eul.m"/* pName */
};

static emlrtRTEInfo c2_te_emlrtRTEI = { 295,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo c2_wb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_xb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_yb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ac_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_bc_emlrtBCI = { 1,/* iFirst */
  200,                                 /* iLast */
  26,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_o_emlrtECI = { -1,/* nDims */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m"/* pName */
};

static emlrtRSInfo c2_uh_emlrtRSI = { 38,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c2_vh_emlrtRSI = { 1642,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c2_wh_emlrtRSI = { 1666,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static real_T c2_dv[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
  1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

static real_T c2_dv1[3] = { 0.0, 1.0, 1.0 };

static char_T c2_cv[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1' };

static real_T c2_dv2[7] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

static real_T c2_dv3[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

static real_T c2_dv4[3] = { 0.0, 0.0, 1.0 };

static real_T c2_dv5[6] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 };

static char_T c2_cv1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

static char_T c2_cv2[62] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
  'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
  '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
  'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
  'W', 'X', 'Y', 'Z' };

static char_T c2_cv3[12] = { 'D', 'O', '_', 'N', 'O', 'T', '_', 'E', 'D', 'I',
  'T', '_' };

static char_T c2_cv4[11] = { 'C', 'A', 'r', 'm', 'O', 'r', 'b', 'i', 't', 'a',
  'l' };

static char_T c2_cv5[52] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
  'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n', 't', ':',
  'L', 'i', 'm', 'i', 't', 's', 'O', 'n', 'R', 'o', 't', 'a', 't', 'i', 'o', 'n',
  'N', 'o', 't', 'A', 'l', 'l', 'o', 'w', 'e', 'd' };

static char_T c2_cv6[61] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
  'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n', 't', ':',
  'F', 'i', 'x', 'e', 'd', 'J', 'o', 'i', 'n', 't', 'P', 'o', 's', 'i', 't', 'i',
  'o', 'n', 'L', 'i', 'm', 'i', 't', 's', 'N', 'o', 't', 'S', 'e', 't', 't', 'a',
  'b', 'l', 'e' };

static char_T c2_cv7[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'r', 'e', 's', 'h', 'a', 'p', 'e', '_', 'e', 'm', 'p', 't',
  'y', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'L', 'i', 'm', 'i', 't' };

static char_T c2_cv8[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
  'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i', 'm',
  's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

static char_T c2_cv9[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
  't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F', 'a',
  'i', 'l', 'e', 'd' };

static char_T c2_cv10[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_', 'a',
  'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o', 'm', 'p',
  'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

static char_T c2_cv11[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
  'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd', 'b',
  'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p', 'e', 'r',
  't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

static char_T c2_cv12[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
  'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p', 'e',
  'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

static char_T c2_cv13[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
  'n', 'e', 'm', 'p', 't', 'y' };

static char_T c2_cv14[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
  '\x06', '\a', '\b', '\t', '\n', '\v', '\f', '\r', '\x0e', '\x0f', '\x10',
  '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
  '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#', '$', '%', '&',
  '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5',
  '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a', 'b', 'c', 'd', 'e',
  'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
  'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd',
  'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
  'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', '\x7f' };

static char_T c2_cv15[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'S',
  't', 'r', 'i', 'n', 'g' };

static char_T c2_cv16[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
  'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd', 'b',
  'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'a', 'm', 'e',
  'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

static char_T c2_cv17[52] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
  'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd', 'b',
  'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'J', 'o', 'i', 'n', 't', 'N', 'a', 'm',
  'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

static char_T c2_cv18[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
  'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'N', 'a', 'm', 'e',
  ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't',
  'y' };

static char_T c2_cv19[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
  'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd', 'b',
  'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o', 't', 'F',
  'o', 'u', 'n', 'd' };

static char_T c2_cv20[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
  'x', 's', 'i', 'z', 'e' };

static real_T c2_dv6[4] = { 0.0, 0.0, 0.0, 1.0 };

static char_T c2_cv21[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n', 'E',
  'r', 'r', 'o', 'r' };

static char_T c2_cv22[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
  'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm', 'e',
  'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

/* Function Declarations */
static void initialize_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance);
static void initialize_params_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance);
static void mdl_start_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance);
static void mdl_terminate_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c2_Modele_3D
  (SFc2_Modele_3DInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_Modele_3D
  (SFc2_Modele_3DInstanceStruct *chartInstance);
static void enable_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance);
static void disable_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance);
static void sf_gateway_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance);
static void ext_mode_exec_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance);
static void c2_update_jit_animation_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance);
static void c2_do_animation_call_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance);
static void set_sim_state_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance, const mxArray *c2_st);
static c2_rigidBody *c2_rigidBody_rigidBody(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBody *c2_obj,
  c2_robotics_manip_internal_RigidBodyTree *c2_iobj_0,
  c2_robotics_manip_internal_CollisionSet *c2_iobj_1, c2_rigidBodyJoint
  *c2_iobj_2, c2_robotics_manip_internal_RigidBody *c2_iobj_3);
static void c2_rigidBodyJoint_set_MotionSubspace(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj, real_T
  c2_msubspace_data[], int32_T c2_msubspace_size[2]);
static c2_robotics_manip_internal_CollisionSet *c2_CollisionSet_CollisionSet
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_CollisionSet *c2_obj, real_T c2_maxElements);
static void c2_RigidBodyTree_initVisualizationInfo(SFc2_Modele_3DInstanceStruct *
  chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree *c2_obj);
static void c2_rand(SFc2_Modele_3DInstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, real_T c2_r[5]);
static c2_robotics_manip_internal_RigidBodyTree *c2_RigidBodyTree_RigidBodyTree
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree *c2_obj);
static c2_rigidBodyJoint *c2_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj);
static c2_robotics_manip_internal_RigidBody *c2_RigidBody_RigidBody
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBody *c2_obj, char_T c2_bodyInput[10],
   c2_robotics_manip_internal_CollisionSet *c2_iobj_0, c2_rigidBodyJoint
   *c2_iobj_1);
static c2_rigidBodyJoint *c2_b_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj, char_T c2_jname[14]);
static c2_rigidBody *c2_b_rigidBody_rigidBody(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBody *c2_obj,
  c2_robotics_manip_internal_RigidBodyTree *c2_iobj_0,
  c2_robotics_manip_internal_CollisionSet *c2_iobj_1, c2_rigidBodyJoint
  *c2_iobj_2, c2_robotics_manip_internal_RigidBody *c2_iobj_3);
static c2_rigidBodyJoint *c2_c_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj);
static c2_rigidBodyJoint *c2_d_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj);
static void c2_rigidBodyJoint_set_PositionLimits(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj);
static void c2_validateattributes(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_9 c2_attributesMixed);
static boolean_T c2_any(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, boolean_T c2_x_data[], int32_T c2_x_size[1]);
static void c2_warning(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp);
static void c2_rigidBodyJoint_resetHomePosition(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj);
static boolean_T c2_all(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, boolean_T c2_x_data[], int32_T c2_x_size[1]);
static void c2_b_rigidBodyJoint_set_PositionLimits(SFc2_Modele_3DInstanceStruct *
  chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj);
static void c2_rigidBody_set_Joint(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_rigidBody *c2_obj, c2_rigidBodyJoint *c2_value,
  c2_rigidBodyJoint *c2_iobj_0);
static c2_rigidBodyJoint *c2_rigidBodyJoint_copy(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj,
  c2_rigidBodyJoint *c2_iobj_0);
static c2_rigidBodyJoint *c2_e_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj, char_T c2_jname_data[], int32_T c2_jname_size[2],
   char_T c2_jtype_data[], int32_T c2_jtype_size[2]);
static void c2_CharacterVector_setVector(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_CharacterVector *c2_obj, char_T c2_vec_data[],
  int32_T c2_vec_size[2], c2_robotics_manip_internal_CharacterVector *c2_b_obj);
static void c2_get_match(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_str_data[], int32_T c2_str_size[2], char_T
  c2_match_data[], int32_T c2_match_size[2], int32_T *c2_nmatched);
static boolean_T c2_strcmp(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2], real_T c2_cmpLen);
static void c2_b_warning(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp);
static void c2_rigidBodyTree_addBody(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj, c2_rigidBody *c2_bodyin,
  c2_robotics_manip_internal_CollisionSet *c2_iobj_0, c2_rigidBodyJoint
  *c2_iobj_1, c2_robotics_manip_internal_RigidBody *c2_iobj_2);
static boolean_T c2_b_strcmp(SFc2_Modele_3DInstanceStruct *chartInstance, char_T
  c2_a_data[], int32_T c2_a_size[2], char_T c2_b_data[], int32_T c2_b_size[2]);
static real_T c2_RigidBodyTree_validateInputBodyName
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj);
static real_T c2_RigidBodyTree_findBodyIndexByJointName
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj, char_T c2_jointname_data[],
   int32_T c2_jointname_size[2]);
static c2_robotics_manip_internal_RigidBody *c2_RigidBody_copy
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBody *c2_obj,
   c2_robotics_manip_internal_CollisionSet *c2_iobj_0, c2_rigidBodyJoint
   *c2_iobj_1, c2_robotics_manip_internal_RigidBody *c2_iobj_2);
static void c2_b_rigidBodyTree_addBody(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj,
  c2_rigidBody *c2_bodyin, c2_robotics_manip_internal_CollisionSet *c2_iobj_0,
  c2_rigidBodyJoint *c2_iobj_1, c2_robotics_manip_internal_RigidBody *c2_iobj_2);
static real_T c2_b_RigidBodyTree_validateInputBodyName
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj);
static void c2_rigidBodyTree_homeConfiguration(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj,
  c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_Q);
static void c2_assertValidSizeArg(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_varargin_2);
static void c2_rigidBodyTree_getTransform(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj,
  c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_varargin_1, real_T c2_T[16]);
static void c2_RigidBodyTree_validateConfiguration(SFc2_Modele_3DInstanceStruct *
  chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj,
  c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_Q, c2_coder_array_real_T *c2_qvec);
static void c2_RigidBodyTree_forwardKinematics(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj, c2_coder_array_real_T
  *c2_qvec, c2_cell_wrap_19 c2_Ttree_data[], int32_T c2_Ttree_size[2]);
static void c2_indexShapeCheck(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_matrixSize, int32_T c2_indexSize[2]);
static void c2_rigidBodyJoint_get_JointAxis(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj, real_T
  c2_ax[3]);
static real_T c2_sumColumnB(SFc2_Modele_3DInstanceStruct *chartInstance, real_T
  c2_x[3]);
static void c2_cat(SFc2_Modele_3DInstanceStruct *chartInstance, real_T
                   c2_varargin_1, real_T c2_varargin_2, real_T c2_varargin_3,
                   real_T c2_varargin_4, real_T c2_varargin_5, real_T
                   c2_varargin_6, real_T c2_varargin_7, real_T c2_varargin_8,
                   real_T c2_varargin_9, real_T c2_y[9]);
static void c2_quat2tform(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_q[4], real_T c2_H[16]);
static real_T c2_b_sumColumnB(SFc2_Modele_3DInstanceStruct *chartInstance,
  real_T c2_x[4]);
static void c2_rotm2eul(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_R[9], real_T c2_eul[3]);
static real_T c2_function_handle_parenReference(SFc2_Modele_3DInstanceStruct
  *chartInstance, real_T c2_varargin_1, real_T c2_varargin_2);
static void c2_expand_atan2(SFc2_Modele_3DInstanceStruct *chartInstance, real_T
  c2_a_data[], int32_T c2_a_size[3], real_T c2_b_data[], int32_T c2_b_size[3],
  real_T c2_c_data[], int32_T c2_c_size[3]);
static void c2_b_RigidBodyTree_initVisualizationInfo
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj);
static void c2_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBody *c2_obj);
static void c2_b_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_robotics_manip_internal_RigidBody *
  c2_obj);
static void c2_c_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree *c2_obj);
static void c2_d_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBody_1 *c2_obj);
static void c2_e_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj);
static void c2_f_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj);
static void c2_g_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_CollisionSet *c2_obj);
static real_T c2_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_nullptr, const char_T *c2_identifier);
static real_T c2_b_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static uint32_T c2_c_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct
  *chartInstance, const mxArray *c2_nullptr, const char_T *c2_identifier,
  boolean_T *c2_svPtr);
static uint32_T c2_d_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  boolean_T *c2_svPtr);
static void c2_e_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_nullptr, const char_T *c2_identifier, boolean_T *c2_svPtr,
  uint32_T c2_y[625]);
static void c2_f_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, uint32_T c2_y[625]);
static void c2_g_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_nullptr, const char_T *c2_identifier, boolean_T *c2_svPtr,
  uint32_T c2_y[2]);
static void c2_h_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, uint32_T c2_y[2]);
static const mxArray *c2_feval(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static void c2_b_feval(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_c_feval(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static void c2_d_feval(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static void c2_b_CharacterVector_setVector(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_CharacterVector *c2_obj, char_T c2_vec_data[],
  int32_T c2_vec_size[2]);
static void c2_plus(SFc2_Modele_3DInstanceStruct *chartInstance, real_T
                    c2_in1_data[], int32_T c2_in1_size[1], real_T c2_in2_data[],
                    int32_T c2_in2_size[1]);
static void c2_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_robotics_manip_inte
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_array_boolean_T_2D_SetSize(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_boolean_T_2D
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_array_sb0EDBCsZRrtH46t9p8H3X_2D(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_sb0EDBCsZRrtH46t9p8
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_array_s_dcxMVnjsLRtcxNw5c8LFlF_(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_s_dcxMVnjsLRtcxNw5c
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_b_array_s_dcxMVnjsLRtcxNw5c8LFlF_(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_s_dcxMVnjsLRtcxNw5c8LFlF *c2_pStruct);
static void c2_array_char_T_1x200_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_char_T_1x200 *c2_pArray);
static void c2_array_real_T_1x7_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T_1x7 *c2_pArray);
static void c2_array_real_T_SetSize(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0);
static void c2_array_int32_T_2D_SetSize(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_int32_T_2D
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_array_real_T_2D_SetSize(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_real_T_2D
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_b_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet c2_pMatrix[6]);
static void c2_c_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet *c2_pStruct);
static void c2_d_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_robotics_manip_inte *c2_coderArray);
static void c2_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree c2_pMatrix[2]);
static void c2_b_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree *c2_pStruct);
static void c2_c_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBody_1 *c2_pStruct);
static void c2_array_rigidBodyTree_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_rigidBodyTree *c2_pStruct);
static void c2_d_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree_1 *c2_pStruct);
static void c2_e_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet c2_pMatrix[3]);
static void c2_c_array_s_dcxMVnjsLRtcxNw5c8LFlF_(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_coderArray);
static void c2_f_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet c2_pMatrix[6]);
static void c2_g_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_robotics_manip_inte *c2_coderArray);
static void c2_h_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet *c2_pStruct);
static void c2_e_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree c2_pMatrix[2]);
static void c2_f_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBody_1 *c2_pStruct);
static void c2_g_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree *c2_pStruct);
static void c2_i_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet c2_pMatrix[3]);
static void c2_h_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree_1 *c2_pStruct);
static void c2_array_rigidBodyTree_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_rigidBodyTree *c2_pStruct);
static void c2_d_array_s_dcxMVnjsLRtcxNw5c8LFlF_(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_coderArray);
static void c2_b_array_sb0EDBCsZRrtH46t9p8H3X_2D(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_sb0EDBCsZRrtH46t9p8 *c2_coderArray);
static void c2_array_boolean_T_2D_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_boolean_T_2D *c2_coderArray);
static void c2_c_array_sb0EDBCsZRrtH46t9p8H3X_2D(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_sb0EDBCsZRrtH46t9p8 *c2_coderArray);
static void c2_array_boolean_T_2D_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_boolean_T_2D *c2_coderArray);
static void c2_array_real_T_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T *c2_coderArray);
static void c2_array_real_T_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T *c2_coderArray);
static void c2_array_int32_T_2D_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_int32_T_2D *c2_coderArray);
static void c2_array_int32_T_2D_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_int32_T_2D *c2_coderArray);
static void c2_array_real_T_2D_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T_2D *c2_coderArray);
static void c2_array_real_T_2D_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T_2D *c2_coderArray);
static void init_dsm_address_info(SFc2_Modele_3DInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_Modele_3DInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c2_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "robotics_system_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_method_not_empty = false;
  chartInstance->c2_state_not_empty = false;
  chartInstance->c2_b_state_not_empty = false;
  chartInstance->c2_c_state_not_empty = false;
  chartInstance->c2_doneDoubleBufferReInit = false;
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_Modele_3D
  (SFc2_Modele_3DInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c2_JITStateAnimation[0],
                        &chartInstance->c2_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    16U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, "c2_Modele_3D",
                     0, -1, 1914);
}

static void mdl_cleanup_runtime_resources_c2_Modele_3D
  (SFc2_Modele_3DInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void enable_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c2_Modele_3D(SFc2_Modele_3DInstanceStruct *chartInstance)
{
  static real_T c2_inputTform[16] = { 6.123233995736766E-17, -1.0, 0.0, 0.0,
    6.123233995736766E-17, 3.749399456654644E-33, -1.0, 0.0, 1.0,
    6.123233995736766E-17, 6.123233995736766E-17, 0.0, 0.0, 0.0, 1.25, 1.0 };

  static real_T c2_b_dv[4] = { 0.0, 0.0, -1.0, -1.0 };

  static char_T c2_b_cv3[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '2' };

  static char_T c2_b_cv[4] = { 'b', 'a', 's', 'e' };

  c2_coder_array_s_dcxMVnjsLRtcxNw5c c2_config;
  c2_rigidBody c2_CArmOrbital;
  c2_rigidBody c2_CArmTilt;
  c2_rigidBodyJoint c2_lobj_7[8];
  c2_rigidBodyJoint c2_jntCor;
  c2_rigidBodyJoint c2_jntCti;
  c2_rigidBodyJoint *c2_b_iobj_1;
  c2_rigidBodyJoint *c2_b_obj;
  c2_rigidBodyJoint *c2_c_iobj_1;
  c2_rigidBodyJoint *c2_iobj_1;
  c2_rigidBodyJoint *c2_obj;
  c2_rigidBodyTree c2_CArm;
  c2_rigidBodyTree *c2_c_obj;
  c2_rigidBodyTree *c2_d_obj;
  c2_rigidBodyTree *c2_e_obj;
  c2_rigidBodyTree *c2_this;
  c2_robotics_manip_internal_CharacterVector c2_s;
  c2_robotics_manip_internal_CollisionSet c2_lobj_6[6];
  c2_robotics_manip_internal_CollisionSet *c2_b_iobj_0;
  c2_robotics_manip_internal_CollisionSet *c2_c_iobj_0;
  c2_robotics_manip_internal_CollisionSet *c2_iobj_0;
  c2_robotics_manip_internal_FastVisualizationHelper *c2_d_this;
  c2_robotics_manip_internal_FastVisualizationHelper *c2_m_obj;
  c2_robotics_manip_internal_FastVisualizationHelper *c2_n_obj;
  c2_robotics_manip_internal_FastVisualizationHelper *c2_o_obj;
  c2_robotics_manip_internal_RigidBody c2_lobj_8[4];
  c2_robotics_manip_internal_RigidBody *c2_b_iobj_2;
  c2_robotics_manip_internal_RigidBody *c2_c_this;
  c2_robotics_manip_internal_RigidBody *c2_i_obj;
  c2_robotics_manip_internal_RigidBody *c2_iobj_2;
  c2_robotics_manip_internal_RigidBody *c2_j_obj;
  c2_robotics_manip_internal_RigidBody *c2_k_obj;
  c2_robotics_manip_internal_RigidBody *c2_r_obj;
  c2_robotics_manip_internal_RigidBody *c2_s_obj;
  c2_robotics_manip_internal_RigidBodyTree c2_lobj_5[2];
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_b_this;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_f_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_g_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_h_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_l_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_p_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_q_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_t_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c2_I[36];
  real_T c2_fktform[16];
  real_T c2_rotm[9];
  real_T c2_fk_Rotation_ZYX[3];
  real_T c2_b_CArm_Orbital;
  real_T c2_b_CArm_Tilt;
  real_T c2_b_rx;
  real_T c2_b_ry;
  real_T c2_b_rz;
  real_T c2_b_tx;
  real_T c2_b_ty;
  real_T c2_b_tz;
  real_T c2_d;
  real_T c2_d1;
  int32_T c2_b_k;
  int32_T c2_c_k;
  int32_T c2_d_k;
  int32_T c2_e_k;
  int32_T c2_f_k;
  int32_T c2_g_k;
  int32_T c2_h_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_k;
  char_T c2_b_cv1[10];
  char_T c2_b_cv2[10];
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U,
                    *chartInstance->c2_CArm_Orbital);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U,
                    *chartInstance->c2_CArm_Tilt);
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_b_CArm_Tilt = *chartInstance->c2_CArm_Tilt;
  c2_b_CArm_Orbital = *chartInstance->c2_CArm_Orbital;
  emlrtHeapReferenceStackEnterFcnR2012b(&c2_st);
  c2_b_array_robotics_manip_internal_C(chartInstance, c2_lobj_6);
  c2_array_robotics_manip_internal_R(chartInstance, c2_lobj_5);
  c2_array_rigidBodyTree_Constructor(chartInstance, &c2_CArm);
  c2_c_array_s_dcxMVnjsLRtcxNw5c8LFlF_(chartInstance, &c2_config);
  for (c2_i = 0; c2_i < 6; c2_i++) {
    emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_lobj_6[c2_i], (void *)
      &c2_g_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  }

  for (c2_i1 = 0; c2_i1 < 6; c2_i1++) {
    c2_lobj_6[c2_i1].matlabCodegenIsDeleted = true;
  }

  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_lobj_5[c2_i2].
      _pobj0.CollisionsInternal, (void *)&c2_g_handle_matlabCodegenDestructor,
      chartInstance, NULL, NULL);
  }

  for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
    c2_lobj_5[c2_i3]._pobj0.CollisionsInternal.matlabCodegenIsDeleted = true;
  }

  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_lobj_5[c2_i4].
      Base.CollisionsInternal, (void *)&c2_g_handle_matlabCodegenDestructor,
      chartInstance, NULL, NULL);
  }

  for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
    c2_lobj_5[c2_i5].Base.CollisionsInternal.matlabCodegenIsDeleted = true;
  }

  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_CArm._pobj0, (void *)
    &c2_g_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_CArm._pobj0.matlabCodegenIsDeleted = true;
  for (c2_i6 = 0; c2_i6 < 3; c2_i6++) {
    emlrtPushHeapReferenceStackR2021a(&c2_st, true,
      &c2_CArm.TreeInternal._pobj1[c2_i6], (void *)
      &c2_g_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  }

  for (c2_i7 = 0; c2_i7 < 3; c2_i7++) {
    c2_CArm.TreeInternal._pobj1[c2_i7].matlabCodegenIsDeleted = true;
  }

  for (c2_i8 = 0; c2_i8 < 4; c2_i8++) {
    emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_lobj_8[c2_i8], (void *)
      &c2_b_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  }

  for (c2_i9 = 0; c2_i9 < 4; c2_i9++) {
    c2_lobj_8[c2_i9].matlabCodegenIsDeleted = true;
  }

  for (c2_i10 = 0; c2_i10 < 2; c2_i10++) {
    emlrtPushHeapReferenceStackR2021a(&c2_st, true,
      &c2_CArm.TreeInternal._pobj0[c2_i10], (void *)
      &c2_b_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  }

  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_CArm.TreeInternal._pobj0[c2_i11].matlabCodegenIsDeleted = true;
  }

  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_CArm.TreeInternal.Base,
    (void *)&c2_b_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_CArm.TreeInternal.Base.matlabCodegenIsDeleted = true;
  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_lobj_5[c2_i12]._pobj0,
      (void *)&c2_d_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  }

  for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
    c2_lobj_5[c2_i13]._pobj0.matlabCodegenIsDeleted = true;
  }

  for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
    emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_lobj_5[c2_i14].Base,
      (void *)&c2_d_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  }

  for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
    c2_lobj_5[c2_i15].Base.matlabCodegenIsDeleted = true;
  }

  for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
    emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_lobj_5[c2_i16], (void *)
      &c2_c_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  }

  for (c2_i17 = 0; c2_i17 < 2; c2_i17++) {
    c2_lobj_5[c2_i17].matlabCodegenIsDeleted = true;
  }

  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_CArmOrbital, (void *)
    &c2_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_CArmOrbital.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_CArmTilt, (void *)
    &c2_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_CArmTilt.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_CArm.TreeInternal, (void *)
    &c2_f_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_CArm.TreeInternal.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_CArm, (void *)
    &c2_e_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_CArm.matlabCodegenIsDeleted = true;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_b_st.site = &c2_l_emlrtRSI;
  c2_rigidBody_rigidBody(chartInstance, &c2_b_st, &c2_CArmTilt, &c2_lobj_5[0],
    &c2_lobj_6[0], &c2_lobj_7[0], &c2_lobj_8[0]);
  c2_b_st.site = &c2_m_emlrtRSI;
  c2_b_rigidBody_rigidBody(chartInstance, &c2_b_st, &c2_CArmOrbital, &c2_lobj_5
    [1], &c2_lobj_6[1], &c2_lobj_7[1], &c2_lobj_8[1]);
  c2_b_st.site = &c2_emlrtRSI;
  c2_c_rigidBodyJoint_rigidBodyJoint(chartInstance, &c2_b_st, &c2_jntCti);
  c2_b_st.site = &c2_b_emlrtRSI;
  c2_d_rigidBodyJoint_rigidBodyJoint(chartInstance, &c2_b_st, &c2_jntCor);
  c2_b_st.site = &c2_c_emlrtRSI;
  c2_rigidBodyJoint_set_PositionLimits(chartInstance, &c2_b_st, &c2_jntCti);
  c2_b_st.site = &c2_d_emlrtRSI;
  c2_b_rigidBodyJoint_set_PositionLimits(chartInstance, &c2_b_st, &c2_jntCor);
  c2_b_st.site = &c2_e_emlrtRSI;
  c2_obj = &c2_jntCti;
  for (c2_i18 = 0; c2_i18 < 16; c2_i18++) {
    c2_obj->JointToParentTransform[c2_i18] = c2_dv[c2_i18];
  }

  memset(&c2_fktform[0], 0, sizeof(real_T) << 4);
  for (c2_k = 0; c2_k < 4; c2_k++) {
    c2_b_k = c2_k;
    c2_fktform[c2_b_k + (c2_b_k << 2)] = 1.0;
  }

  for (c2_i19 = 0; c2_i19 < 16; c2_i19++) {
    c2_obj->ChildToJointTransform[c2_i19] = c2_fktform[c2_i19];
  }

  c2_b_st.site = &c2_f_emlrtRSI;
  c2_b_obj = &c2_jntCor;
  for (c2_i20 = 0; c2_i20 < 16; c2_i20++) {
    c2_b_obj->JointToParentTransform[c2_i20] = c2_inputTform[c2_i20];
  }

  memset(&c2_fktform[0], 0, sizeof(real_T) << 4);
  for (c2_c_k = 0; c2_c_k < 4; c2_c_k++) {
    c2_d_k = c2_c_k;
    c2_fktform[c2_d_k + (c2_d_k << 2)] = 1.0;
  }

  for (c2_i21 = 0; c2_i21 < 16; c2_i21++) {
    c2_b_obj->ChildToJointTransform[c2_i21] = c2_fktform[c2_i21];
  }

  c2_b_st.site = &c2_n_emlrtRSI;
  c2_rigidBody_set_Joint(chartInstance, &c2_b_st, &c2_CArmTilt, &c2_jntCti,
    &c2_lobj_7[2]);
  c2_b_st.site = &c2_o_emlrtRSI;
  c2_rigidBody_set_Joint(chartInstance, &c2_b_st, &c2_CArmOrbital, &c2_jntCor,
    &c2_lobj_7[3]);
  c2_b_st.site = &c2_g_emlrtRSI;
  c2_c_obj = &c2_CArm;
  c2_d_obj = c2_c_obj;
  c2_c_st.site = &c2_de_emlrtRSI;
  c2_e_obj = c2_d_obj;
  c2_d_obj = c2_e_obj;
  c2_d_st.site = &c2_ab_emlrtRSI;
  c2_this = c2_d_obj;
  c2_d_obj = c2_this;
  c2_c_st.site = &c2_ee_emlrtRSI;
  c2_f_obj = &c2_d_obj->TreeInternal;
  c2_g_obj = c2_f_obj;
  c2_d_st.site = &c2_ub_emlrtRSI;
  c2_h_obj = c2_g_obj;
  c2_g_obj = c2_h_obj;
  c2_e_st.site = &c2_ab_emlrtRSI;
  c2_b_this = c2_g_obj;
  c2_g_obj = c2_b_this;
  c2_d_st.site = &c2_vb_emlrtRSI;
  c2_b_RigidBodyTree_initVisualizationInfo(chartInstance, &c2_d_st, c2_g_obj);
  c2_d_st.site = &c2_wb_emlrtRSI;
  c2_i_obj = &c2_g_obj->Base;
  c2_iobj_0 = &c2_g_obj->_pobj1[0];
  c2_iobj_1 = &c2_g_obj->_pobj2[0];
  c2_j_obj = c2_i_obj;
  c2_e_st.site = &c2_w_emlrtRSI;
  c2_k_obj = c2_j_obj;
  c2_j_obj = c2_k_obj;
  c2_f_st.site = &c2_ab_emlrtRSI;
  c2_c_this = c2_j_obj;
  c2_j_obj = c2_c_this;
  c2_s.Length = 200.0;
  for (c2_i22 = 0; c2_i22 < 200; c2_i22++) {
    c2_s.Vector[c2_i22] = ' ';
  }

  c2_j_obj->NameInternal = c2_s;
  c2_s = c2_j_obj->NameInternal;
  c2_s.Length = 4.0;
  for (c2_i23 = 0; c2_i23 < 4; c2_i23++) {
    c2_s.Vector[c2_i23] = c2_b_cv[c2_i23];
  }

  c2_j_obj->NameInternal = c2_s;
  c2_e_st.site = &c2_x_emlrtRSI;
  c2_j_obj->JointInternal = c2_rigidBodyJoint_rigidBodyJoint(chartInstance,
    &c2_e_st, c2_iobj_1);
  c2_j_obj->Index = -1.0;
  c2_j_obj->ParentIndex = -1.0;
  c2_j_obj->MassInternal = 1.0;
  for (c2_i24 = 0; c2_i24 < 3; c2_i24++) {
    c2_j_obj->CenterOfMassInternal[c2_i24] = 0.0;
  }

  memset(&c2_rotm[0], 0, 9U * sizeof(real_T));
  for (c2_e_k = 0; c2_e_k < 3; c2_e_k++) {
    c2_f_k = c2_e_k;
    c2_rotm[c2_f_k + 3 * c2_f_k] = 1.0;
  }

  for (c2_i25 = 0; c2_i25 < 9; c2_i25++) {
    c2_j_obj->InertiaInternal[c2_i25] = c2_rotm[c2_i25];
  }

  memset(&c2_I[0], 0, 36U * sizeof(real_T));
  for (c2_g_k = 0; c2_g_k < 6; c2_g_k++) {
    c2_h_k = c2_g_k;
    c2_I[c2_h_k + 6 * c2_h_k] = 1.0;
  }

  for (c2_i26 = 0; c2_i26 < 36; c2_i26++) {
    c2_j_obj->SpatialInertia[c2_i26] = c2_I[c2_i26];
  }

  c2_e_st.site = &c2_y_emlrtRSI;
  c2_j_obj->CollisionsInternal = c2_CollisionSet_CollisionSet(chartInstance,
    &c2_e_st, c2_iobj_0, 0.0);
  c2_j_obj->matlabCodegenIsDeleted = false;
  c2_g_obj->Base.Index = 0.0;
  c2_d_st.site = &c2_xb_emlrtRSI;
  c2_l_obj = c2_g_obj;
  for (c2_i27 = 0; c2_i27 < 3; c2_i27++) {
    c2_l_obj->Gravity[c2_i27] = 0.0;
  }

  c2_d_st.site = &c2_yb_emlrtRSI;
  c2_m_obj = &c2_g_obj->FastVisualizationHelper;
  c2_n_obj = c2_m_obj;
  c2_e_st.site = &c2_bc_emlrtRSI;
  c2_o_obj = c2_n_obj;
  c2_n_obj = c2_o_obj;
  c2_f_st.site = &c2_ab_emlrtRSI;
  c2_d_this = c2_n_obj;
  c2_n_obj = c2_d_this;
  c2_n_obj->IsUpdated = false;
  for (c2_i28 = 0; c2_i28 < 3; c2_i28++) {
    c2_n_obj->MeshAndFrameOptions[c2_i28] = c2_dv1[c2_i28];
  }

  c2_d_st.site = &c2_ac_emlrtRSI;
  c2_p_obj = c2_g_obj;
  c2_b_iobj_0 = &c2_g_obj->_pobj1[1];
  c2_b_iobj_1 = &c2_g_obj->_pobj2[1];
  c2_iobj_2 = &c2_g_obj->_pobj0[0];
  c2_e_st.site = &c2_ec_emlrtRSI;
  c2_q_obj = c2_p_obj;
  c2_c_iobj_0 = &c2_b_iobj_0[0];
  c2_c_iobj_1 = &c2_b_iobj_1[0];
  c2_b_iobj_2 = &c2_iobj_2[0];
  c2_f_st.site = &c2_fc_emlrtRSI;
  for (c2_i29 = 0; c2_i29 < 10; c2_i29++) {
    c2_b_cv1[c2_i29] = c2_cv[c2_i29];
  }

  c2_q_obj->Bodies[0] = c2_RigidBody_RigidBody(chartInstance, &c2_f_st,
    &c2_b_iobj_2[0], c2_b_cv1, &c2_c_iobj_0[0], &c2_c_iobj_1[0]);
  c2_r_obj = c2_q_obj->Bodies[0];
  for (c2_i30 = 0; c2_i30 < 2; c2_i30++) {
    c2_r_obj->ChildrenIndices[c2_i30] = 0.0;
  }

  c2_f_st.site = &c2_fc_emlrtRSI;
  for (c2_i31 = 0; c2_i31 < 10; c2_i31++) {
    c2_b_cv2[c2_i31] = c2_b_cv3[c2_i31];
  }

  c2_q_obj->Bodies[1] = c2_RigidBody_RigidBody(chartInstance, &c2_f_st,
    &c2_b_iobj_2[1], c2_b_cv2, &c2_c_iobj_0[1], &c2_c_iobj_1[1]);
  c2_s_obj = c2_q_obj->Bodies[1];
  for (c2_i32 = 0; c2_i32 < 2; c2_i32++) {
    c2_s_obj->ChildrenIndices[c2_i32] = 0.0;
  }

  c2_p_obj->NumBodies = 0.0;
  c2_p_obj->NumNonFixedBodies = 0.0;
  c2_p_obj->PositionNumber = 0.0;
  c2_p_obj->VelocityNumber = 0.0;
  for (c2_i33 = 0; c2_i33 < 2; c2_i33++) {
    c2_p_obj->Base.ChildrenIndices[c2_i33] = 0.0;
  }

  c2_e_st.site = &c2_cc_emlrtRSI;
  c2_b_RigidBodyTree_initVisualizationInfo(chartInstance, &c2_e_st, c2_p_obj);
  for (c2_i34 = 0; c2_i34 < 4; c2_i34++) {
    c2_p_obj->PositionDoFMap[c2_i34] = c2_b_dv[c2_i34];
  }

  for (c2_i35 = 0; c2_i35 < 4; c2_i35++) {
    c2_p_obj->VelocityDoFMap[c2_i35] = c2_b_dv[c2_i35];
  }

  c2_e_st.site = &c2_dc_emlrtRSI;
  c2_t_obj = c2_p_obj;
  c2_t_obj->VisualizationInfo.IsMaxReachUpToDate = false;
  c2_g_obj->matlabCodegenIsDeleted = false;
  c2_c_st.site = &c2_fe_emlrtRSI;
  c2_d_obj->TreeInternal.Base.CollisionsInternal = c2_CollisionSet_CollisionSet
    (chartInstance, &c2_c_st, &c2_d_obj->_pobj0, 10.0);
  c2_d_obj->matlabCodegenIsDeleted = false;
  c2_b_st.site = &c2_p_emlrtRSI;
  c2_rigidBodyTree_addBody(chartInstance, &c2_b_st, &c2_CArm, &c2_CArmTilt,
    &c2_lobj_6[2], &c2_lobj_7[4], &c2_lobj_8[2]);
  c2_b_st.site = &c2_q_emlrtRSI;
  c2_b_rigidBodyTree_addBody(chartInstance, &c2_b_st, &c2_CArm, &c2_CArmOrbital,
    &c2_lobj_6[4], &c2_lobj_7[6], &c2_lobj_8[3]);
  c2_b_st.site = &c2_h_emlrtRSI;
  c2_rigidBodyTree_homeConfiguration(chartInstance, &c2_b_st, &c2_CArm,
    &c2_config);
  c2_i36 = c2_config.size[1];
  c2_i37 = 1;
  if ((c2_i37 < 1) || (c2_i37 > c2_i36)) {
    emlrtDynamicBoundsCheckR2012b(c2_i37, 1, c2_i36, &c2_emlrtBCI, &c2_st);
  }

  c2_d = (real_T)c2_i37;
  c2_config.vector.data[(int32_T)c2_d - 1].JointPosition.size[0] = 1;
  c2_config.vector.data[(int32_T)c2_d - 1].JointPosition.size[1] = 1;
  c2_config.vector.data[(int32_T)c2_d - 1].JointPosition.data[0] =
    c2_b_CArm_Tilt;
  c2_i38 = c2_config.size[1];
  c2_i39 = 2;
  if ((c2_i39 < 1) || (c2_i39 > c2_i38)) {
    emlrtDynamicBoundsCheckR2012b(c2_i39, 1, c2_i38, &c2_b_emlrtBCI, &c2_st);
  }

  c2_d1 = (real_T)c2_i39;
  c2_config.vector.data[(int32_T)c2_d1 - 1].JointPosition.size[0] = 1;
  c2_config.vector.data[(int32_T)c2_d1 - 1].JointPosition.size[1] = 1;
  c2_config.vector.data[(int32_T)c2_d1 - 1].JointPosition.data[0] =
    c2_b_CArm_Orbital;
  c2_b_st.site = &c2_i_emlrtRSI;
  c2_rigidBodyTree_getTransform(chartInstance, &c2_b_st, &c2_CArm, &c2_config,
    c2_fktform);
  c2_i40 = 0;
  c2_i41 = 0;
  for (c2_i42 = 0; c2_i42 < 3; c2_i42++) {
    for (c2_i43 = 0; c2_i43 < 3; c2_i43++) {
      c2_rotm[c2_i43 + c2_i40] = c2_fktform[c2_i43 + c2_i41];
    }

    c2_i40 += 3;
    c2_i41 += 4;
  }

  c2_b_st.site = &c2_j_emlrtRSI;
  c2_rotm2eul(chartInstance, &c2_b_st, c2_rotm, c2_fk_Rotation_ZYX);
  for (c2_i44 = 0; c2_i44 < 3; c2_i44++) {
    c2_fk_Rotation_ZYX[c2_i44] *= 57.295779513082323;
  }

  c2_b_tx = c2_fktform[12];
  c2_b_ty = c2_fktform[13];
  c2_b_tz = c2_fktform[14];
  c2_b_rx = c2_fk_Rotation_ZYX[0];
  c2_b_ry = c2_fk_Rotation_ZYX[1];
  c2_b_rz = c2_fk_Rotation_ZYX[2];
  c2_b_st.site = &c2_k_emlrtRSI;
  c2_e_handle_matlabCodegenDestructor(chartInstance, &c2_b_st, &c2_CArm);
  c2_b_st.site = &c2_k_emlrtRSI;
  c2_f_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &c2_CArm.TreeInternal);
  c2_b_st.site = &c2_k_emlrtRSI;
  c2_handle_matlabCodegenDestructor(chartInstance, &c2_b_st, &c2_CArmTilt);
  c2_b_st.site = &c2_k_emlrtRSI;
  c2_handle_matlabCodegenDestructor(chartInstance, &c2_b_st, &c2_CArmOrbital);
  for (c2_i45 = 0; c2_i45 < 2; c2_i45++) {
    c2_b_st.site = &c2_k_emlrtRSI;
    c2_c_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
      &c2_lobj_5[c2_i45]);
  }

  for (c2_i46 = 0; c2_i46 < 2; c2_i46++) {
    c2_b_st.site = &c2_k_emlrtRSI;
    c2_d_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
      &c2_lobj_5[c2_i46].Base);
  }

  for (c2_i47 = 0; c2_i47 < 2; c2_i47++) {
    c2_b_st.site = &c2_k_emlrtRSI;
    c2_d_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
      &c2_lobj_5[c2_i47]._pobj0);
  }

  c2_b_st.site = &c2_k_emlrtRSI;
  c2_b_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &c2_CArm.TreeInternal.Base);
  for (c2_i48 = 0; c2_i48 < 2; c2_i48++) {
    c2_b_st.site = &c2_k_emlrtRSI;
    c2_b_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
      &c2_CArm.TreeInternal._pobj0[c2_i48]);
  }

  for (c2_i49 = 0; c2_i49 < 4; c2_i49++) {
    c2_b_st.site = &c2_k_emlrtRSI;
    c2_b_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
      &c2_lobj_8[c2_i49]);
  }

  for (c2_i50 = 0; c2_i50 < 3; c2_i50++) {
    c2_b_st.site = &c2_k_emlrtRSI;
    c2_g_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
      &c2_CArm.TreeInternal._pobj1[c2_i50]);
  }

  c2_b_st.site = &c2_k_emlrtRSI;
  c2_g_handle_matlabCodegenDestructor(chartInstance, &c2_b_st, &c2_CArm._pobj0);
  for (c2_i51 = 0; c2_i51 < 2; c2_i51++) {
    c2_b_st.site = &c2_k_emlrtRSI;
    c2_g_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
      &c2_lobj_5[c2_i51].Base.CollisionsInternal);
  }

  for (c2_i52 = 0; c2_i52 < 2; c2_i52++) {
    c2_b_st.site = &c2_k_emlrtRSI;
    c2_g_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
      &c2_lobj_5[c2_i52]._pobj0.CollisionsInternal);
  }

  for (c2_i53 = 0; c2_i53 < 6; c2_i53++) {
    c2_b_st.site = &c2_k_emlrtRSI;
    c2_g_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
      &c2_lobj_6[c2_i53]);
  }

  c2_d_array_s_dcxMVnjsLRtcxNw5c8LFlF_(chartInstance, &c2_config);
  c2_array_rigidBodyTree_Destructor(chartInstance, &c2_CArm);
  c2_e_array_robotics_manip_internal_R(chartInstance, c2_lobj_5);
  c2_f_array_robotics_manip_internal_C(chartInstance, c2_lobj_6);
  emlrtHeapReferenceStackLeaveFcnR2012b(&c2_st);
  *chartInstance->c2_tx = c2_b_tx;
  *chartInstance->c2_ty = c2_b_ty;
  *chartInstance->c2_tz = c2_b_tz;
  *chartInstance->c2_rx = c2_b_rx;
  *chartInstance->c2_ry = c2_b_ry;
  *chartInstance->c2_rz = c2_b_rz;
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U, *chartInstance->c2_tx);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U, *chartInstance->c2_ty);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 4U, *chartInstance->c2_tz);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 5U, *chartInstance->c2_rx);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 6U, *chartInstance->c2_ry);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 7U, *chartInstance->c2_rz);
}

static void ext_mode_exec_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_update_jit_animation_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(10, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", chartInstance->c2_rx, 0, 0U, 0, 0U,
    0), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", chartInstance->c2_ry, 0, 0U, 0, 0U,
    0), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", chartInstance->c2_rz, 0, 0U, 0, 0U,
    0), false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", chartInstance->c2_tx, 0, 0U, 0, 0U,
    0), false);
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", chartInstance->c2_ty, 0, 0U, 0, 0U,
    0), false);
  sf_mex_setcell(c2_y, 4, c2_f_y);
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y", chartInstance->c2_tz, 0, 0U, 0, 0U,
    0), false);
  sf_mex_setcell(c2_y, 5, c2_g_y);
  c2_h_y = NULL;
  if (!chartInstance->c2_method_not_empty) {
    sf_mex_assign(&c2_h_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_h_y, sf_mex_create("y", &chartInstance->c2_method, 7, 0U,
      0, 0U, 0), false);
  }

  sf_mex_setcell(c2_y, 6, c2_h_y);
  c2_i_y = NULL;
  if (!chartInstance->c2_method_not_empty) {
    sf_mex_assign(&c2_i_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_i_y, sf_mex_create("y", &chartInstance->c2_state, 7, 0U, 0,
      0U, 0), false);
  }

  sf_mex_setcell(c2_y, 7, c2_i_y);
  c2_j_y = NULL;
  if (!chartInstance->c2_c_state_not_empty) {
    sf_mex_assign(&c2_j_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_j_y, sf_mex_create("y", chartInstance->c2_c_state, 7, 0U,
      1, 0U, 1, 625), false);
  }

  sf_mex_setcell(c2_y, 8, c2_j_y);
  c2_k_y = NULL;
  if (!chartInstance->c2_b_state_not_empty) {
    sf_mex_assign(&c2_k_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_k_y, sf_mex_create("y", chartInstance->c2_b_state, 7, 0U,
      1, 0U, 1, 2), false);
  }

  sf_mex_setcell(c2_y, 9, c2_k_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_Modele_3D(SFc2_Modele_3DInstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  int32_T c2_i;
  int32_T c2_i1;
  uint32_T c2_uv[625];
  uint32_T c2_uv1[2];
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  *chartInstance->c2_rx = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 0)), "rx");
  *chartInstance->c2_ry = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 1)), "ry");
  *chartInstance->c2_rz = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 2)), "rz");
  *chartInstance->c2_tx = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 3)), "tx");
  *chartInstance->c2_ty = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 4)), "ty");
  *chartInstance->c2_tz = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 5)), "tz");
  chartInstance->c2_method = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 6)), "method", &chartInstance->c2_method_not_empty);
  chartInstance->c2_state = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 7)), "state", &chartInstance->c2_state_not_empty);
  c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 8)),
                        "state", &chartInstance->c2_c_state_not_empty, c2_uv);
  for (c2_i = 0; c2_i < 625; c2_i++) {
    chartInstance->c2_c_state[c2_i] = c2_uv[c2_i];
  }

  c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 9)),
                        "state", &chartInstance->c2_b_state_not_empty, c2_uv1);
  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    chartInstance->c2_b_state[c2_i1] = c2_uv1[c2_i1];
  }

  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static c2_rigidBody *c2_rigidBody_rigidBody(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBody *c2_obj,
  c2_robotics_manip_internal_RigidBodyTree *c2_iobj_0,
  c2_robotics_manip_internal_CollisionSet *c2_iobj_1, c2_rigidBodyJoint
  *c2_iobj_2, c2_robotics_manip_internal_RigidBody *c2_iobj_3)
{
  static char_T c2_b_cv1[12] = { 'C', 'A', 'r', 'm', 'T', 'i', 'l', 't', '_',
    'j', 'n', 't' };

  static char_T c2_b_cv[8] = { 'C', 'A', 'r', 'm', 'T', 'i', 'l', 't' };

  static char_T c2_b_cv3[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv4[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv2[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv5[5] = { 'f', 'i', 'x', 'e', 'd' };

  c2_rigidBody *c2_b_obj;
  c2_rigidBody *c2_c_this;
  c2_rigidBody *c2_j_obj;
  c2_rigidBodyJoint *c2_b_iobj_1;
  c2_rigidBodyJoint *c2_b_this;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_f_obj;
  c2_rigidBodyJoint *c2_g_obj;
  c2_rigidBodyJoint *c2_h_obj;
  c2_rigidBodyJoint *c2_i_obj;
  c2_robotics_manip_internal_CharacterVector c2_s;
  c2_robotics_manip_internal_CollisionSet *c2_b_iobj_0;
  c2_robotics_manip_internal_RigidBody *c2_bodyInternal;
  c2_robotics_manip_internal_RigidBody *c2_c_obj;
  c2_robotics_manip_internal_RigidBody *c2_d_obj;
  c2_robotics_manip_internal_RigidBody *c2_default;
  c2_robotics_manip_internal_RigidBody *c2_this;
  c2_robotics_manip_internal_RigidBodyTree *c2_b_default;
  c2_robotics_manip_internal_RigidBodyTree *c2_treeInternal;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  real_T c2_I[36];
  real_T c2_msubspace_data[36];
  real_T c2_poslim_data[14];
  real_T c2_b_I[9];
  real_T c2_homepos_data[7];
  real_T c2_b_b[6];
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_index;
  int32_T c2_tmp_data[7];
  int32_T c2_homepos_size[2];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_msubspace_size[2];
  int32_T c2_poslim_size[2];
  int32_T c2_switch_expression_size[2];
  int32_T c2_x_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_itilerow;
  int32_T c2_b_jcol;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsB;
  int32_T c2_c_k;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_remainingDimsB;
  int32_T c2_d_k;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_e_k;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_k;
  int32_T c2_f_kstr;
  int32_T c2_g_kstr;
  int32_T c2_h_kstr;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_iacol;
  int32_T c2_ibcol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_jcol;
  int32_T c2_k;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  int32_T c2_remainingDimsB;
  char_T c2_switch_expression_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_b_obj = c2_obj;
  c2_st.site = &c2_r_emlrtRSI;
  c2_b_st.site = &c2_v_emlrtRSI;
  c2_c_obj = c2_iobj_3;
  c2_b_iobj_0 = c2_iobj_1;
  c2_b_iobj_1 = c2_iobj_2;
  c2_default = c2_c_obj;
  c2_c_st.site = &c2_w_emlrtRSI;
  c2_d_obj = c2_default;
  c2_default = c2_d_obj;
  c2_d_st.site = &c2_ab_emlrtRSI;
  c2_this = c2_default;
  c2_default = c2_this;
  c2_s.Length = 200.0;
  for (c2_i = 0; c2_i < 200; c2_i++) {
    c2_s.Vector[c2_i] = ' ';
  }

  c2_default->NameInternal = c2_s;
  c2_s = c2_default->NameInternal;
  c2_s.Length = 8.0;
  for (c2_i1 = 0; c2_i1 < 8; c2_i1++) {
    c2_s.Vector[c2_i1] = c2_b_cv[c2_i1];
  }

  c2_default->NameInternal = c2_s;
  c2_c_st.site = &c2_x_emlrtRSI;
  c2_e_obj = c2_b_iobj_1;
  c2_f_obj = c2_e_obj;
  c2_f_obj->InTree = false;
  for (c2_i2 = 0; c2_i2 < 16; c2_i2++) {
    c2_f_obj->JointToParentTransform[c2_i2] = c2_dv[c2_i2];
  }

  for (c2_i3 = 0; c2_i3 < 16; c2_i3++) {
    c2_f_obj->ChildToJointTransform[c2_i3] = c2_dv[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 14; c2_i4++) {
    c2_f_obj->PositionLimitsInternal[c2_i4] = 0.0;
  }

  for (c2_i5 = 0; c2_i5 < 7; c2_i5++) {
    c2_f_obj->HomePositionInternal[c2_i5] = 0.0;
  }

  for (c2_i6 = 0; c2_i6 < 36; c2_i6++) {
    c2_f_obj->MotionSubspaceInternal[c2_i6] = 0.0;
  }

  c2_d_st.site = &c2_bb_emlrtRSI;
  c2_b_this = c2_f_obj;
  c2_f_obj = c2_b_this;
  c2_s.Length = 200.0;
  for (c2_i7 = 0; c2_i7 < 200; c2_i7++) {
    c2_s.Vector[c2_i7] = ' ';
  }

  c2_f_obj->NameInternal = c2_s;
  c2_s.Length = 200.0;
  for (c2_i8 = 0; c2_i8 < 200; c2_i8++) {
    c2_s.Vector[c2_i8] = ' ';
  }

  c2_f_obj->TypeInternal = c2_s;
  c2_s = c2_f_obj->NameInternal;
  c2_s.Length = 12.0;
  for (c2_i9 = 0; c2_i9 < 12; c2_i9++) {
    c2_s.Vector[c2_i9] = c2_b_cv1[c2_i9];
  }

  c2_f_obj->NameInternal = c2_s;
  c2_d_st.site = &c2_cb_emlrtRSI;
  c2_g_obj = c2_f_obj;
  c2_s = c2_g_obj->TypeInternal;
  c2_s.Length = 5.0;
  for (c2_i10 = 0; c2_i10 < 5; c2_i10++) {
    c2_s.Vector[c2_i10] = c2_b_cv2[c2_i10];
  }

  c2_g_obj->TypeInternal = c2_s;
  c2_d_st.site = &c2_db_emlrtRSI;
  c2_h_obj = c2_f_obj;
  c2_e_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_h_obj->TypeInternal;
  c2_d = c2_s.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i11 = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_e_st);
    }

    c2_i12 = (int32_T)c2_d;
    if ((c2_i12 < 1) || (c2_i12 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i12, 1, 200, &c2_e_emlrtBCI, &c2_e_st);
    }

    c2_i11 = c2_i12 - 1;
  }

  c2_switch_expression_size[1] = c2_i11 + 1;
  c2_loop_ub = c2_i11;
  for (c2_i13 = 0; c2_i13 <= c2_loop_ub; c2_i13++) {
    c2_switch_expression_data[c2_i13] = c2_s.Vector[c2_i13];
  }

  c2_result = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsB = c2_x_size[1];
  if (c2_remainingDimsB != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_b_cv3[c2_b_kstr] != c2_switch_expression_data[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_result = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_result) {
    c2_index = 0.0;
  } else {
    c2_b_result = false;
    c2_x_size[1] = c2_switch_expression_size[1];
    c2_b_remainingDimsB = c2_x_size[1];
    if (c2_b_remainingDimsB != 9) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 9) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_cv1[c2_d_kstr] != c2_switch_expression_data[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_result = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_result) {
      c2_index = 1.0;
    } else {
      c2_c_result = false;
      c2_x_size[1] = c2_switch_expression_size[1];
      c2_c_remainingDimsB = c2_x_size[1];
      if (c2_c_remainingDimsB != 8) {
      } else {
        c2_e_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_e_kstr - 1 < 8) {
            c2_f_kstr = c2_e_kstr - 1;
            if (c2_b_cv4[c2_f_kstr] != c2_switch_expression_data[c2_f_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_e_kstr++;
            }
          } else {
            c2_c_result = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_result) {
        c2_index = 2.0;
      } else {
        c2_index = -1.0;
      }
    }
  }

  switch ((int32_T)c2_index) {
   case 0:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i14 = 0; c2_i14 < 6; c2_i14++) {
      c2_msubspace_data[c2_i14] = c2_dv5[c2_i14];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i17 = 0; c2_i17 < 2; c2_i17++) {
      c2_poslim_data[c2_i17] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c2_i17;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_f_obj->VelocityNumber = 1.0;
    c2_f_obj->PositionNumber = 1.0;
    for (c2_i21 = 0; c2_i21 < 3; c2_i21++) {
      c2_f_obj->JointAxisInternal[c2_i21] = c2_dv4[c2_i21];
    }
    break;

   case 1:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i15 = 0; c2_i15 < 6; c2_i15++) {
      c2_msubspace_data[c2_i15] = c2_dv3[c2_i15];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      c2_poslim_data[c2_i18] = -0.5 + (real_T)c2_i18;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_f_obj->VelocityNumber = 1.0;
    c2_f_obj->PositionNumber = 1.0;
    for (c2_i22 = 0; c2_i22 < 3; c2_i22++) {
      c2_f_obj->JointAxisInternal[c2_i22] = c2_dv4[c2_i22];
    }
    break;

   case 2:
    memset(&c2_I[0], 0, 36U * sizeof(real_T));
    for (c2_k = 0; c2_k < 6; c2_k++) {
      c2_b_k = c2_k;
      c2_I[c2_b_k + 6 * c2_b_k] = 1.0;
    }

    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 6;
    for (c2_i16 = 0; c2_i16 < 36; c2_i16++) {
      c2_msubspace_data[c2_i16] = c2_I[c2_i16];
    }

    for (c2_jcol = 0; c2_jcol < 2; c2_jcol++) {
      c2_b_jcol = c2_jcol;
      c2_iacol = c2_b_jcol;
      c2_ibmat = c2_b_jcol * 3 - 1;
      for (c2_itilerow = 0; c2_itilerow < 3; c2_itilerow++) {
        c2_b_itilerow = c2_itilerow;
        c2_ibcol = c2_ibmat + c2_b_itilerow;
        c2_b_b[c2_ibcol + 1] = -5.0 + 10.0 * (real_T)c2_iacol;
      }
    }

    c2_poslim_size[0] = 7;
    c2_poslim_size[1] = 2;
    for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
      for (c2_i24 = 0; c2_i24 < 4; c2_i24++) {
        c2_poslim_data[c2_i24 + c2_poslim_size[0] * c2_i20] = rtNaN;
      }
    }

    for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
      for (c2_i25 = 0; c2_i25 < 3; c2_i25++) {
        c2_poslim_data[(c2_i25 + c2_poslim_size[0] * c2_i23) + 4] =
          c2_b_b[c2_i25 + 3 * c2_i23];
      }
    }

    c2_homepos_size[1] = 7;
    for (c2_i26 = 0; c2_i26 < 7; c2_i26++) {
      c2_homepos_data[c2_i26] = c2_dv2[c2_i26];
    }

    c2_f_obj->VelocityNumber = 6.0;
    c2_f_obj->PositionNumber = 7.0;
    for (c2_i27 = 0; c2_i27 < 3; c2_i27++) {
      c2_f_obj->JointAxisInternal[c2_i27] = rtNaN;
    }
    break;

   default:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    memset(&c2_msubspace_data[0], 0, 6U * sizeof(real_T));
    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    memset(&c2_poslim_data[0], 0, sizeof(real_T) << 1);
    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_f_obj->VelocityNumber = 0.0;
    c2_f_obj->PositionNumber = 0.0;
    for (c2_i19 = 0; c2_i19 < 3; c2_i19++) {
      c2_f_obj->JointAxisInternal[c2_i19] = 0.0;
    }
    break;
  }

  c2_d_st.site = &c2_eb_emlrtRSI;
  c2_rigidBodyJoint_set_MotionSubspace(chartInstance, &c2_d_st, c2_f_obj,
    c2_msubspace_data, c2_msubspace_size);
  c2_d_st.site = &c2_fb_emlrtRSI;
  c2_i_obj = c2_f_obj;
  c2_e_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_i_obj->TypeInternal;
  c2_d1 = c2_s.Length;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i28 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_e_st);
    }

    c2_i29 = (int32_T)c2_d1;
    if ((c2_i29 < 1) || (c2_i29 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i29, 1, 200, &c2_e_emlrtBCI, &c2_e_st);
    }

    c2_i28 = c2_i29 - 1;
  }

  c2_switch_expression_size[1] = c2_i28 + 1;
  c2_b_loop_ub = c2_i28;
  for (c2_i30 = 0; c2_i30 <= c2_b_loop_ub; c2_i30++) {
    c2_switch_expression_data[c2_i30] = c2_s.Vector[c2_i30];
  }

  c2_bool = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_g_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_g_kstr - 1 < 5) {
        c2_h_kstr = c2_g_kstr - 1;
        if (c2_switch_expression_data[c2_h_kstr] != c2_b_cv5[c2_h_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_g_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d2 = c2_f_obj->PositionNumber;
    c2_b2 = (c2_d2 < 1.0);
    if (c2_b2) {
      c2_i33 = -1;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_emlrtDCI, &c2_c_st);
      }

      c2_i35 = (int32_T)c2_d2;
      if ((c2_i35 < 1) || (c2_i35 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i35, 1, 7, &c2_c_emlrtBCI, &c2_c_st);
      }

      c2_i33 = c2_i35 - 1;
    }

    c2_tmp_size[0] = c2_i33 + 1;
    c2_c_loop_ub = c2_i33;
    for (c2_i36 = 0; c2_i36 <= c2_c_loop_ub; c2_i36++) {
      c2_tmp_data[c2_i36] = c2_i36;
    }

    c2_iv1[0] = c2_tmp_size[0];
    c2_iv1[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c2_iv1[0], 2, &c2_poslim_size[0], 2,
      &c2_emlrtECI, &c2_c_st);
    c2_iv2[0] = c2_tmp_size[0];
    for (c2_i37 = 0; c2_i37 < 2; c2_i37++) {
      c2_d_loop_ub = c2_iv2[0] - 1;
      for (c2_i39 = 0; c2_i39 <= c2_d_loop_ub; c2_i39++) {
        c2_f_obj->PositionLimitsInternal[c2_tmp_data[c2_i39] + 7 * c2_i37] =
          c2_poslim_data[c2_i39 + c2_poslim_size[0] * c2_i37];
      }
    }

    c2_d3 = c2_f_obj->PositionNumber;
    c2_b3 = (c2_d3 < 1.0);
    if (c2_b3) {
      c2_i40 = 0;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_b_emlrtDCI, &c2_c_st);
      }

      c2_i42 = (int32_T)c2_d3;
      if ((c2_i42 < 1) || (c2_i42 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i42, 1, 7, &c2_d_emlrtBCI, &c2_c_st);
      }

      c2_i40 = c2_i42;
    }

    if (c2_i40 != c2_homepos_size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i40, c2_homepos_size[1], &c2_b_emlrtECI,
        &c2_c_st);
    }

    c2_e_loop_ub = c2_homepos_size[1] - 1;
    for (c2_i43 = 0; c2_i43 <= c2_e_loop_ub; c2_i43++) {
      c2_f_obj->HomePositionInternal[c2_i43] = c2_homepos_data[c2_i43];
    }
  } else {
    for (c2_i31 = 0; c2_i31 < 2; c2_i31++) {
      c2_iv[c2_i31] = 1 + c2_i31;
    }

    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_poslim_size[0], 2,
      &c2_c_emlrtECI, &c2_c_st);
    c2_i32 = 0;
    for (c2_i34 = 0; c2_i34 < 2; c2_i34++) {
      c2_f_obj->PositionLimitsInternal[c2_i32] = c2_poslim_data[c2_i34];
      c2_i32 += 7;
    }

    if (c2_homepos_size[1] != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, c2_homepos_size[1], &c2_d_emlrtECI,
        &c2_c_st);
    }

    c2_f_obj->HomePositionInternal[0] = c2_homepos_data[0];
  }

  c2_default->JointInternal = c2_f_obj;
  c2_default->Index = -1.0;
  c2_default->ParentIndex = -1.0;
  c2_default->MassInternal = 1.0;
  for (c2_i38 = 0; c2_i38 < 3; c2_i38++) {
    c2_default->CenterOfMassInternal[c2_i38] = 0.0;
  }

  memset(&c2_b_I[0], 0, 9U * sizeof(real_T));
  for (c2_c_k = 0; c2_c_k < 3; c2_c_k++) {
    c2_d_k = c2_c_k;
    c2_b_I[c2_d_k + 3 * c2_d_k] = 1.0;
  }

  for (c2_i41 = 0; c2_i41 < 9; c2_i41++) {
    c2_default->InertiaInternal[c2_i41] = c2_b_I[c2_i41];
  }

  memset(&c2_I[0], 0, 36U * sizeof(real_T));
  for (c2_e_k = 0; c2_e_k < 6; c2_e_k++) {
    c2_f_k = c2_e_k;
    c2_I[c2_f_k + 6 * c2_f_k] = 1.0;
  }

  for (c2_i44 = 0; c2_i44 < 36; c2_i44++) {
    c2_default->SpatialInertia[c2_i44] = c2_I[c2_i44];
  }

  c2_c_st.site = &c2_y_emlrtRSI;
  c2_default->CollisionsInternal = c2_CollisionSet_CollisionSet(chartInstance,
    &c2_c_st, c2_b_iobj_0, 0.0);
  c2_default->matlabCodegenIsDeleted = false;
  c2_bodyInternal = c2_default;
  c2_st.site = &c2_t_emlrtRSI;
  c2_b_st.site = &c2_s_emlrtRSI;
  c2_b_default = c2_RigidBodyTree_RigidBodyTree(chartInstance, &c2_b_st,
    c2_iobj_0);
  c2_treeInternal = c2_b_default;
  c2_st.site = &c2_u_emlrtRSI;
  c2_j_obj = c2_b_obj;
  c2_b_obj = c2_j_obj;
  c2_b_st.site = &c2_ab_emlrtRSI;
  c2_c_this = c2_b_obj;
  c2_b_obj = c2_c_this;
  c2_b_obj->BodyInternal = c2_bodyInternal;
  c2_b_obj->TreeInternal = c2_treeInternal;
  c2_b_obj->matlabCodegenIsDeleted = false;
  return c2_b_obj;
}

static void c2_rigidBodyJoint_set_MotionSubspace(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj, real_T
  c2_msubspace_data[], int32_T c2_msubspace_size[2])
{
  static char_T c2_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  c2_rigidBodyJoint *c2_b_obj;
  c2_robotics_manip_internal_CharacterVector c2_c_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  real_T c2_d;
  real_T c2_d1;
  int32_T c2_tmp_data[6];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_type_size[2];
  int32_T c2_x_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_type_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_bool;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_hb_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_c_obj = c2_b_obj->TypeInternal;
  c2_d = c2_c_obj.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i1 = (int32_T)c2_d;
    if ((c2_i1 < 1) || (c2_i1 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i = c2_i1 - 1;
  }

  c2_type_size[1] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_type_data[c2_i2] = c2_c_obj.Vector[c2_i2];
  }

  c2_bool = false;
  c2_x_size[1] = c2_type_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 5) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_type_data[c2_b_kstr] != c2_b_cv[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d1 = c2_obj->VelocityNumber;
    c2_b1 = (c2_d1 < 1.0);
    if (c2_b1) {
      c2_i4 = -1;
    } else {
      if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
        emlrtIntegerCheckR2012b(c2_d1, &c2_d_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i5 = (int32_T)c2_d1;
      if ((c2_i5 < 1) || (c2_i5 > 6)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 6, &c2_f_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i4 = c2_i5 - 1;
    }

    c2_tmp_size[0] = c2_i4 + 1;
    c2_b_loop_ub = c2_i4;
    for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
      c2_tmp_data[c2_i6] = c2_i6;
    }

    c2_iv[0] = 6;
    c2_iv[1] = c2_tmp_size[0];
    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_msubspace_size[0], 2,
      &c2_e_emlrtECI, (void *)c2_sp);
    c2_iv1[1] = c2_tmp_size[0];
    c2_c_loop_ub = c2_iv1[1] - 1;
    for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
      for (c2_i8 = 0; c2_i8 < 6; c2_i8++) {
        c2_obj->MotionSubspaceInternal[c2_i8 + 6 * c2_tmp_data[c2_i7]] =
          c2_msubspace_data[c2_i8 + 6 * c2_i7];
      }
    }
  } else {
    for (c2_i3 = 0; c2_i3 < 6; c2_i3++) {
      c2_obj->MotionSubspaceInternal[c2_i3] = 0.0;
    }
  }
}

static c2_robotics_manip_internal_CollisionSet *c2_CollisionSet_CollisionSet
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_CollisionSet *c2_obj, real_T c2_maxElements)
{
  static c2_sJfZvjZdYbIqz8zWAkASFBH c2_r1 = { NULL/* GeometryInternal */
  };

  c2_coder_array_robotics_manip_inte c2_r;
  c2_robotics_manip_internal_CollisionGeometry c2_defaultGeometry;
  c2_robotics_manip_internal_CollisionSet *c2_b_obj;
  c2_robotics_manip_internal_CollisionSet *c2_c_obj;
  c2_robotics_manip_internal_CollisionSet *c2_this;
  c2_sJfZvjZdYbIqz8zWAkASFBH c2_defaultCollisionObj;
  emlrtStack c2_st;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  int32_T c2_iv[2];
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_d_array_robotics_manip_internal_C(chartInstance, &c2_r);
  c2_b_obj = c2_obj;
  c2_b_obj->Size = 0.0;
  c2_st.site = &c2_jb_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_b_obj = c2_c_obj;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_b_obj->MaxElements = c2_maxElements;
  if (!(c2_b_obj->MaxElements >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_b_obj->MaxElements, &c2_f_emlrtDCI,
      (emlrtConstCTX)c2_sp);
  }

  c2_d = c2_b_obj->MaxElements;
  if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
    emlrtIntegerCheckR2012b(c2_d, &c2_e_emlrtDCI, (emlrtConstCTX)c2_sp);
  }

  c2_st.site = &c2_uh_emlrtRSI;
  c2_array_robotics_manip_internal_C(chartInstance, &c2_st, &c2_r,
    &c2_u_emlrtRTEI, 1, (int32_T)c2_d);
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_iv[c2_i] = c2_r.size[c2_i];
  }

  c2_array_robotics_manip_internal_C(chartInstance, c2_sp,
    &c2_b_obj->CollisionGeometries, &c2_v_emlrtRTEI, c2_iv[0], c2_iv[1]);
  c2_defaultCollisionObj = c2_r1;
  c2_defaultGeometry.CollisionPrimitive =
    c2_defaultCollisionObj.GeometryInternal;
  for (c2_i1 = 0; c2_i1 < 16; c2_i1++) {
    c2_defaultGeometry.LocalPose[c2_i1] = c2_dv[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 16; c2_i2++) {
    c2_defaultGeometry.WorldPose[c2_i2] = c2_dv[c2_i2];
  }

  for (c2_i3 = 0; c2_i3 < 3; c2_i3++) {
    c2_defaultGeometry.MeshScale[c2_i3] = 1.0;
  }

  c2_d1 = c2_b_obj->MaxElements;
  c2_i4 = (int32_T)c2_d1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d1, mxDOUBLE_CLASS, c2_i4,
    &c2_me_emlrtRTEI, (emlrtConstCTX)c2_sp);
  for (c2_b_i = 0; c2_b_i < c2_i4; c2_b_i++) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    c2_i5 = c2_b_obj->CollisionGeometries.size[1] - 1;
    c2_i6 = (int32_T)c2_c_i - 1;
    if ((c2_i6 < 0) || (c2_i6 > c2_i5)) {
      emlrtDynamicBoundsCheckR2012b(c2_i6, 0, c2_i5, &c2_g_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_b_obj->CollisionGeometries.vector.data[c2_i6] = c2_defaultGeometry;
  }

  c2_b_obj->matlabCodegenIsDeleted = false;
  c2_g_array_robotics_manip_internal_C(chartInstance, &c2_r);
  return c2_b_obj;
}

static void c2_RigidBodyTree_initVisualizationInfo(SFc2_Modele_3DInstanceStruct *
  chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree *c2_obj)
{
  c2_robotics_manip_internal_RigidBodyTree *c2_c_obj;
  c2_robotics_manip_internal_VisualizationInfo c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_idx[5];
  real_T c2_b_k;
  real_T c2_b_x;
  real_T c2_x;
  real_T c2_y;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_k;
  char_T c2_s[5];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_mb_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_b_st.site = &c2_nb_emlrtRSI;
  c2_c_st.site = &c2_ob_emlrtRSI;
  c2_d_st.site = &c2_pb_emlrtRSI;
  c2_rand(chartInstance, &c2_d_st, c2_idx);
  for (c2_k = 0; c2_k < 5; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_x = c2_idx[(int32_T)c2_b_k - 1] * 62.0;
    c2_b_x = c2_x;
    c2_y = c2_b_x;
    c2_y = muDoubleScalarFloor(c2_y);
    c2_idx[(int32_T)c2_b_k - 1] = 1.0 + c2_y;
  }

  for (c2_i = 0; c2_i < 5; c2_i++) {
    if (c2_idx[c2_i] != (real_T)(int32_T)muDoubleScalarFloor(c2_idx[c2_i])) {
      emlrtIntegerCheckR2012b(c2_idx[c2_i], &c2_g_emlrtDCI, &c2_b_st);
    }

    c2_i3 = (int32_T)c2_idx[c2_i];
    if ((c2_i3 < 1) || (c2_i3 > 62)) {
      emlrtDynamicBoundsCheckR2012b(c2_i3, 1, 62, &c2_h_emlrtBCI, &c2_b_st);
    }

    c2_s[c2_i] = c2_cv2[c2_i3 - 1];
  }

  for (c2_i1 = 0; c2_i1 < 12; c2_i1++) {
    c2_b_obj.ShowTag[c2_i1] = c2_cv3[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 5; c2_i2++) {
    c2_b_obj.ShowTag[c2_i2 + 12] = c2_s[c2_i2];
  }

  c2_obj->VisualizationInfo = c2_b_obj;
  c2_st.site = &c2_lb_emlrtRSI;
  c2_c_obj = c2_obj;
  c2_c_obj->VisualizationInfo.IsMaxReachUpToDate = false;
}

static void c2_rand(SFc2_Modele_3DInstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, real_T c2_r[5])
{
  static uint32_T c2_uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  static char_T c2_b_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_i_y = NULL;
  real_T c2_b_j;
  real_T c2_b_k;
  real_T c2_b_r;
  real_T c2_c_kk;
  real_T c2_d;
  int32_T c2_a;
  int32_T c2_b_kk;
  int32_T c2_c_k;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_j;
  int32_T c2_k;
  int32_T c2_kk;
  uint32_T c2_u[2];
  uint32_T c2_b_y;
  uint32_T c2_c_y;
  uint32_T c2_d_y;
  uint32_T c2_e_y;
  uint32_T c2_f_y;
  uint32_T c2_h_y;
  uint32_T c2_mti;
  uint32_T c2_y;
  boolean_T c2_b_isvalid;
  boolean_T c2_exitg2;
  boolean_T c2_isvalid;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_qb_emlrtRSI;
  if (!chartInstance->c2_method_not_empty) {
    chartInstance->c2_method = 7U;
    chartInstance->c2_method_not_empty = true;
  }

  c2_b_st.site = &c2_rb_emlrtRSI;
  if (!chartInstance->c2_c_state_not_empty) {
    for (c2_i = 0; c2_i < 625; c2_i++) {
      chartInstance->c2_c_state[c2_i] = c2_uv[c2_i];
    }

    chartInstance->c2_c_state_not_empty = true;
  }

  for (c2_k = 0; c2_k < 5; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_c_st.site = &c2_sb_emlrtRSI;
    c2_d_st.site = &c2_tb_emlrtRSI;

    /* ========================= COPYRIGHT NOTICE ============================ */
    /*  This is a uniform (0,1) pseudorandom number generator based on: */
    /*  */
    /*  A C-program for MT19937, with initialization improved 2002/1/26. */
    /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
    /*  */
    /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
    /*  All rights reserved. */
    /*  */
    /*  Redistribution and use in source and binary forms, with or without */
    /*  modification, are permitted provided that the following conditions */
    /*  are met: */
    /*  */
    /*    1. Redistributions of source code must retain the above copyright */
    /*       notice, this list of conditions and the following disclaimer. */
    /*  */
    /*    2. Redistributions in binary form must reproduce the above copyright */
    /*       notice, this list of conditions and the following disclaimer */
    /*       in the documentation and/or other materials provided with the */
    /*       distribution. */
    /*  */
    /*    3. The names of its contributors may not be used to endorse or */
    /*       promote products derived from this software without specific */
    /*       prior written permission. */
    /*  */
    /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
    /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
    /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
    /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
    /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
    /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
    /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
    /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
    /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
    /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
    /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
    /*  */
    /* =============================   END   ================================= */
    do {
      c2_exitg1 = 0;
      for (c2_j = 0; c2_j < 2; c2_j++) {
        c2_b_j = (real_T)c2_j + 1.0;
        c2_mti = chartInstance->c2_c_state[624] + 1U;
        if (c2_mti >= 625U) {
          for (c2_kk = 0; c2_kk < 227; c2_kk++) {
            c2_c_kk = (real_T)c2_kk + 1.0;
            c2_y = (chartInstance->c2_c_state[(int32_T)c2_c_kk - 1] &
                    2147483648U) | (chartInstance->c2_c_state[(int32_T)(c2_c_kk
              + 1.0) - 1] & 2147483647U);
            c2_b_y = c2_y;
            c2_d_y = c2_b_y;
            if ((c2_d_y & 1U) == 0U) {
              c2_d_y >>= 1U;
            } else {
              c2_d_y = c2_d_y >> 1U ^ 2567483615U;
            }

            chartInstance->c2_c_state[(int32_T)c2_c_kk - 1] =
              chartInstance->c2_c_state[(int32_T)(c2_c_kk + 397.0) - 1] ^ c2_d_y;
          }

          for (c2_b_kk = 0; c2_b_kk < 396; c2_b_kk++) {
            c2_c_kk = (real_T)c2_b_kk + 228.0;
            c2_y = (chartInstance->c2_c_state[(int32_T)c2_c_kk - 1] &
                    2147483648U) | (chartInstance->c2_c_state[(int32_T)(c2_c_kk
              + 1.0) - 1] & 2147483647U);
            c2_f_y = c2_y;
            c2_h_y = c2_f_y;
            if ((c2_h_y & 1U) == 0U) {
              c2_h_y >>= 1U;
            } else {
              c2_h_y = c2_h_y >> 1U ^ 2567483615U;
            }

            chartInstance->c2_c_state[(int32_T)c2_c_kk - 1] =
              chartInstance->c2_c_state[(int32_T)((c2_c_kk + 1.0) - 228.0) - 1] ^
              c2_h_y;
          }

          c2_y = (chartInstance->c2_c_state[623] & 2147483648U) |
            (chartInstance->c2_c_state[0] & 2147483647U);
          c2_c_y = c2_y;
          c2_e_y = c2_c_y;
          if ((c2_e_y & 1U) == 0U) {
            c2_e_y >>= 1U;
          } else {
            c2_e_y = c2_e_y >> 1U ^ 2567483615U;
          }

          chartInstance->c2_c_state[623] = chartInstance->c2_c_state[396] ^
            c2_e_y;
          c2_mti = 1U;
        }

        c2_y = chartInstance->c2_c_state[(int32_T)c2_mti - 1];
        chartInstance->c2_c_state[624] = c2_mti;
        c2_y ^= c2_y >> 11U;
        c2_y ^= c2_y << 7U & 2636928640U;
        c2_y ^= c2_y << 15U & 4022730752U;
        c2_y ^= c2_y >> 18U;
        c2_u[(int32_T)c2_b_j - 1] = c2_y;
      }

      c2_u[0] >>= 5U;
      c2_u[1] >>= 6U;
      if ((c2_u[0] == 0U) && (c2_u[1] == 0U)) {
        if ((chartInstance->c2_c_state[624] >= 1U) && (chartInstance->
             c2_c_state[624] < 625U)) {
          c2_isvalid = true;
        } else {
          c2_isvalid = false;
        }

        c2_b_isvalid = c2_isvalid;
        if (c2_isvalid) {
          c2_b_isvalid = false;
          c2_c_k = 0;
          c2_exitg2 = false;
          while ((!c2_exitg2) && (c2_c_k + 1 < 625)) {
            if (chartInstance->c2_c_state[c2_c_k] == 0U) {
              c2_a = c2_c_k + 1;
              c2_c_k = c2_a;
            } else {
              c2_b_isvalid = true;
              c2_exitg2 = true;
            }
          }
        }

        if (!c2_b_isvalid) {
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1,
            37), false);
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1,
            37), false);
          sf_mex_call(&c2_d_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                      sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_d_st, NULL, "message", 1U, 1U, 14, c2_i_y)));
        }
      } else {
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);

    c2_b_r = 1.1102230246251565E-16 * ((real_T)c2_u[0] * 6.7108864E+7 + (real_T)
      c2_u[1]);
    c2_d = c2_b_r;
    c2_r[(int32_T)c2_b_k - 1] = c2_d;
  }
}

static c2_robotics_manip_internal_RigidBodyTree *c2_RigidBodyTree_RigidBodyTree
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree *c2_obj)
{
  static char_T c2_b_jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '1', '_', 'j', 'n', 't' };

  static char_T c2_b_cv[4] = { 'b', 'a', 's', 'e' };

  c2_robotics_manip_internal_CharacterVector c2_s;
  c2_robotics_manip_internal_FastVisualizationHelper *c2_c_this;
  c2_robotics_manip_internal_FastVisualizationHelper *c2_h_obj;
  c2_robotics_manip_internal_FastVisualizationHelper *c2_i_obj;
  c2_robotics_manip_internal_FastVisualizationHelper *c2_j_obj;
  c2_robotics_manip_internal_RigidBodyTree *c2_b_obj;
  c2_robotics_manip_internal_RigidBodyTree *c2_c_obj;
  c2_robotics_manip_internal_RigidBodyTree *c2_g_obj;
  c2_robotics_manip_internal_RigidBodyTree *c2_k_obj;
  c2_robotics_manip_internal_RigidBodyTree *c2_l_obj;
  c2_robotics_manip_internal_RigidBodyTree *c2_p_obj;
  c2_robotics_manip_internal_RigidBodyTree *c2_this;
  c2_robotics_manip_internal_RigidBody_1 *c2_b_iobj_0;
  c2_robotics_manip_internal_RigidBody_1 *c2_b_this;
  c2_robotics_manip_internal_RigidBody_1 *c2_d_obj;
  c2_robotics_manip_internal_RigidBody_1 *c2_d_this;
  c2_robotics_manip_internal_RigidBody_1 *c2_e_obj;
  c2_robotics_manip_internal_RigidBody_1 *c2_f_obj;
  c2_robotics_manip_internal_RigidBody_1 *c2_iobj_0;
  c2_robotics_manip_internal_RigidBody_1 *c2_m_obj;
  c2_robotics_manip_internal_RigidBody_1 *c2_n_obj;
  c2_robotics_manip_internal_RigidBody_1 *c2_o_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_b_I[36];
  real_T c2_I[9];
  int32_T c2_b_k;
  int32_T c2_c_k;
  int32_T c2_d_k;
  int32_T c2_e_k;
  int32_T c2_f_k;
  int32_T c2_g_k;
  int32_T c2_h_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_k;
  char_T c2_jname[14];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_b_obj = c2_obj;
  c2_st.site = &c2_ub_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_b_obj = c2_c_obj;
  c2_b_st.site = &c2_ab_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_st.site = &c2_vb_emlrtRSI;
  c2_RigidBodyTree_initVisualizationInfo(chartInstance, &c2_st, c2_b_obj);
  c2_st.site = &c2_wb_emlrtRSI;
  c2_d_obj = &c2_b_obj->Base;
  c2_e_obj = c2_d_obj;
  c2_b_st.site = &c2_w_emlrtRSI;
  c2_f_obj = c2_e_obj;
  c2_e_obj = c2_f_obj;
  c2_c_st.site = &c2_ab_emlrtRSI;
  c2_b_this = c2_e_obj;
  c2_e_obj = c2_b_this;
  c2_s.Length = 200.0;
  for (c2_i = 0; c2_i < 200; c2_i++) {
    c2_s.Vector[c2_i] = ' ';
  }

  c2_e_obj->NameInternal = c2_s;
  c2_s = c2_e_obj->NameInternal;
  c2_s.Length = 4.0;
  for (c2_i1 = 0; c2_i1 < 4; c2_i1++) {
    c2_s.Vector[c2_i1] = c2_b_cv[c2_i1];
  }

  c2_e_obj->NameInternal = c2_s;
  c2_b_st.site = &c2_x_emlrtRSI;
  c2_rigidBodyJoint_rigidBodyJoint(chartInstance, &c2_b_st,
    &c2_e_obj->JointInternal);
  c2_e_obj->Index = -1.0;
  c2_e_obj->ParentIndex = -1.0;
  c2_e_obj->MassInternal = 1.0;
  for (c2_i2 = 0; c2_i2 < 3; c2_i2++) {
    c2_e_obj->CenterOfMassInternal[c2_i2] = 0.0;
  }

  memset(&c2_I[0], 0, 9U * sizeof(real_T));
  for (c2_k = 0; c2_k < 3; c2_k++) {
    c2_b_k = c2_k;
    c2_I[c2_b_k + 3 * c2_b_k] = 1.0;
  }

  for (c2_i3 = 0; c2_i3 < 9; c2_i3++) {
    c2_e_obj->InertiaInternal[c2_i3] = c2_I[c2_i3];
  }

  memset(&c2_b_I[0], 0, 36U * sizeof(real_T));
  for (c2_c_k = 0; c2_c_k < 6; c2_c_k++) {
    c2_d_k = c2_c_k;
    c2_b_I[c2_d_k + 6 * c2_d_k] = 1.0;
  }

  for (c2_i4 = 0; c2_i4 < 36; c2_i4++) {
    c2_e_obj->SpatialInertia[c2_i4] = c2_b_I[c2_i4];
  }

  c2_b_st.site = &c2_y_emlrtRSI;
  c2_CollisionSet_CollisionSet(chartInstance, &c2_b_st,
    &c2_e_obj->CollisionsInternal, 0.0);
  c2_e_obj->matlabCodegenIsDeleted = false;
  c2_b_obj->Base.Index = 0.0;
  c2_st.site = &c2_xb_emlrtRSI;
  c2_g_obj = c2_b_obj;
  for (c2_i5 = 0; c2_i5 < 3; c2_i5++) {
    c2_g_obj->Gravity[c2_i5] = 0.0;
  }

  c2_st.site = &c2_yb_emlrtRSI;
  c2_h_obj = &c2_b_obj->FastVisualizationHelper;
  c2_i_obj = c2_h_obj;
  c2_b_st.site = &c2_bc_emlrtRSI;
  c2_j_obj = c2_i_obj;
  c2_i_obj = c2_j_obj;
  c2_c_st.site = &c2_ab_emlrtRSI;
  c2_c_this = c2_i_obj;
  c2_i_obj = c2_c_this;
  c2_i_obj->IsUpdated = false;
  for (c2_i6 = 0; c2_i6 < 3; c2_i6++) {
    c2_i_obj->MeshAndFrameOptions[c2_i6] = c2_dv1[c2_i6];
  }

  c2_st.site = &c2_ac_emlrtRSI;
  c2_k_obj = c2_b_obj;
  c2_iobj_0 = &c2_b_obj->_pobj0;
  c2_b_st.site = &c2_ec_emlrtRSI;
  c2_l_obj = c2_k_obj;
  c2_b_iobj_0 = c2_iobj_0;
  c2_c_st.site = &c2_fc_emlrtRSI;
  c2_m_obj = c2_b_iobj_0;
  c2_n_obj = c2_m_obj;
  c2_d_st.site = &c2_w_emlrtRSI;
  c2_o_obj = c2_n_obj;
  c2_n_obj = c2_o_obj;
  c2_d_this = c2_n_obj;
  c2_n_obj = c2_d_this;
  c2_s.Length = 200.0;
  for (c2_i7 = 0; c2_i7 < 200; c2_i7++) {
    c2_s.Vector[c2_i7] = ' ';
  }

  c2_n_obj->NameInternal = c2_s;
  c2_s = c2_n_obj->NameInternal;
  c2_s.Length = 10.0;
  for (c2_i8 = 0; c2_i8 < 10; c2_i8++) {
    c2_s.Vector[c2_i8] = c2_cv[c2_i8];
  }

  c2_n_obj->NameInternal = c2_s;
  c2_d_st.site = &c2_x_emlrtRSI;
  for (c2_i9 = 0; c2_i9 < 14; c2_i9++) {
    c2_jname[c2_i9] = c2_b_jname[c2_i9];
  }

  c2_b_rigidBodyJoint_rigidBodyJoint(chartInstance, &c2_d_st,
    &c2_n_obj->JointInternal, c2_jname);
  c2_n_obj->Index = -1.0;
  c2_n_obj->ParentIndex = -1.0;
  c2_n_obj->MassInternal = 1.0;
  for (c2_i10 = 0; c2_i10 < 3; c2_i10++) {
    c2_n_obj->CenterOfMassInternal[c2_i10] = 0.0;
  }

  memset(&c2_I[0], 0, 9U * sizeof(real_T));
  for (c2_e_k = 0; c2_e_k < 3; c2_e_k++) {
    c2_f_k = c2_e_k;
    c2_I[c2_f_k + 3 * c2_f_k] = 1.0;
  }

  for (c2_i11 = 0; c2_i11 < 9; c2_i11++) {
    c2_n_obj->InertiaInternal[c2_i11] = c2_I[c2_i11];
  }

  memset(&c2_b_I[0], 0, 36U * sizeof(real_T));
  for (c2_g_k = 0; c2_g_k < 6; c2_g_k++) {
    c2_h_k = c2_g_k;
    c2_b_I[c2_h_k + 6 * c2_h_k] = 1.0;
  }

  for (c2_i12 = 0; c2_i12 < 36; c2_i12++) {
    c2_n_obj->SpatialInertia[c2_i12] = c2_b_I[c2_i12];
  }

  c2_d_st.site = &c2_y_emlrtRSI;
  c2_CollisionSet_CollisionSet(chartInstance, &c2_d_st,
    &c2_n_obj->CollisionsInternal, 0.0);
  c2_n_obj->matlabCodegenIsDeleted = false;
  c2_l_obj->Bodies[0] = c2_n_obj;
  c2_l_obj->Bodies[0]->ChildrenIndices = 0.0;
  c2_k_obj->NumBodies = 0.0;
  c2_k_obj->NumNonFixedBodies = 0.0;
  c2_k_obj->PositionNumber = 0.0;
  c2_k_obj->VelocityNumber = 0.0;
  c2_k_obj->Base.ChildrenIndices = 0.0;
  c2_b_st.site = &c2_cc_emlrtRSI;
  c2_RigidBodyTree_initVisualizationInfo(chartInstance, &c2_b_st, c2_k_obj);
  for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
    c2_k_obj->PositionDoFMap[c2_i13] = 0.0 - (real_T)c2_i13;
  }

  for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
    c2_k_obj->VelocityDoFMap[c2_i14] = 0.0 - (real_T)c2_i14;
  }

  c2_b_st.site = &c2_dc_emlrtRSI;
  c2_p_obj = c2_k_obj;
  c2_p_obj->VisualizationInfo.IsMaxReachUpToDate = false;
  c2_b_obj->matlabCodegenIsDeleted = false;
  return c2_b_obj;
}

static c2_rigidBodyJoint *c2_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj)
{
  static char_T c2_b_cv[8] = { 'b', 'a', 's', 'e', '_', 'j', 'n', 't' };

  static char_T c2_b_cv2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv3[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv4[5] = { 'f', 'i', 'x', 'e', 'd' };

  c2_rigidBodyJoint *c2_b_obj;
  c2_rigidBodyJoint *c2_c_obj;
  c2_rigidBodyJoint *c2_d_obj;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_this;
  c2_robotics_manip_internal_CharacterVector c2_s;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  real_T c2_I[36];
  real_T c2_msubspace_data[36];
  real_T c2_poslim_data[14];
  real_T c2_homepos_data[7];
  real_T c2_b_b[6];
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_index;
  int32_T c2_tmp_data[7];
  int32_T c2_homepos_size[2];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_msubspace_size[2];
  int32_T c2_poslim_size[2];
  int32_T c2_switch_expression_size[2];
  int32_T c2_x_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_itilerow;
  int32_T c2_b_jcol;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsB;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_remainingDimsB;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_kstr;
  int32_T c2_g_kstr;
  int32_T c2_h_kstr;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_iacol;
  int32_T c2_ibcol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_jcol;
  int32_T c2_k;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  int32_T c2_remainingDimsB;
  char_T c2_switch_expression_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_b_obj = c2_obj;
  c2_b_obj->InTree = false;
  for (c2_i = 0; c2_i < 16; c2_i++) {
    c2_b_obj->JointToParentTransform[c2_i] = c2_dv[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 16; c2_i1++) {
    c2_b_obj->ChildToJointTransform[c2_i1] = c2_dv[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 14; c2_i2++) {
    c2_b_obj->PositionLimitsInternal[c2_i2] = 0.0;
  }

  for (c2_i3 = 0; c2_i3 < 7; c2_i3++) {
    c2_b_obj->HomePositionInternal[c2_i3] = 0.0;
  }

  for (c2_i4 = 0; c2_i4 < 36; c2_i4++) {
    c2_b_obj->MotionSubspaceInternal[c2_i4] = 0.0;
  }

  c2_st.site = &c2_bb_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_s.Length = 200.0;
  for (c2_i5 = 0; c2_i5 < 200; c2_i5++) {
    c2_s.Vector[c2_i5] = ' ';
  }

  c2_b_obj->NameInternal = c2_s;
  c2_s.Length = 200.0;
  for (c2_i6 = 0; c2_i6 < 200; c2_i6++) {
    c2_s.Vector[c2_i6] = ' ';
  }

  c2_b_obj->TypeInternal = c2_s;
  c2_s = c2_b_obj->NameInternal;
  c2_s.Length = 8.0;
  for (c2_i7 = 0; c2_i7 < 8; c2_i7++) {
    c2_s.Vector[c2_i7] = c2_b_cv[c2_i7];
  }

  c2_b_obj->NameInternal = c2_s;
  c2_st.site = &c2_cb_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_s = c2_c_obj->TypeInternal;
  c2_s.Length = 5.0;
  for (c2_i8 = 0; c2_i8 < 5; c2_i8++) {
    c2_s.Vector[c2_i8] = c2_b_cv1[c2_i8];
  }

  c2_c_obj->TypeInternal = c2_s;
  c2_st.site = &c2_db_emlrtRSI;
  c2_d_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_d_obj->TypeInternal;
  c2_d = c2_s.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i9 = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i10 = (int32_T)c2_d;
    if ((c2_i10 < 1) || (c2_i10 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i9 = c2_i10 - 1;
  }

  c2_switch_expression_size[1] = c2_i9 + 1;
  c2_loop_ub = c2_i9;
  for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
    c2_switch_expression_data[c2_i11] = c2_s.Vector[c2_i11];
  }

  c2_result = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsB = c2_x_size[1];
  if (c2_remainingDimsB != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_b_cv2[c2_b_kstr] != c2_switch_expression_data[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_result = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_result) {
    c2_index = 0.0;
  } else {
    c2_b_result = false;
    c2_x_size[1] = c2_switch_expression_size[1];
    c2_b_remainingDimsB = c2_x_size[1];
    if (c2_b_remainingDimsB != 9) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 9) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_cv1[c2_d_kstr] != c2_switch_expression_data[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_result = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_result) {
      c2_index = 1.0;
    } else {
      c2_c_result = false;
      c2_x_size[1] = c2_switch_expression_size[1];
      c2_c_remainingDimsB = c2_x_size[1];
      if (c2_c_remainingDimsB != 8) {
      } else {
        c2_e_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_e_kstr - 1 < 8) {
            c2_f_kstr = c2_e_kstr - 1;
            if (c2_b_cv3[c2_f_kstr] != c2_switch_expression_data[c2_f_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_e_kstr++;
            }
          } else {
            c2_c_result = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_result) {
        c2_index = 2.0;
      } else {
        c2_index = -1.0;
      }
    }
  }

  switch ((int32_T)c2_index) {
   case 0:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i12 = 0; c2_i12 < 6; c2_i12++) {
      c2_msubspace_data[c2_i12] = c2_dv5[c2_i12];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
      c2_poslim_data[c2_i15] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c2_i15;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i19 = 0; c2_i19 < 3; c2_i19++) {
      c2_b_obj->JointAxisInternal[c2_i19] = c2_dv4[c2_i19];
    }
    break;

   case 1:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i13 = 0; c2_i13 < 6; c2_i13++) {
      c2_msubspace_data[c2_i13] = c2_dv3[c2_i13];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
      c2_poslim_data[c2_i16] = -0.5 + (real_T)c2_i16;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i20 = 0; c2_i20 < 3; c2_i20++) {
      c2_b_obj->JointAxisInternal[c2_i20] = c2_dv4[c2_i20];
    }
    break;

   case 2:
    memset(&c2_I[0], 0, 36U * sizeof(real_T));
    for (c2_k = 0; c2_k < 6; c2_k++) {
      c2_b_k = c2_k;
      c2_I[c2_b_k + 6 * c2_b_k] = 1.0;
    }

    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 6;
    for (c2_i14 = 0; c2_i14 < 36; c2_i14++) {
      c2_msubspace_data[c2_i14] = c2_I[c2_i14];
    }

    for (c2_jcol = 0; c2_jcol < 2; c2_jcol++) {
      c2_b_jcol = c2_jcol;
      c2_iacol = c2_b_jcol;
      c2_ibmat = c2_b_jcol * 3 - 1;
      for (c2_itilerow = 0; c2_itilerow < 3; c2_itilerow++) {
        c2_b_itilerow = c2_itilerow;
        c2_ibcol = c2_ibmat + c2_b_itilerow;
        c2_b_b[c2_ibcol + 1] = -5.0 + 10.0 * (real_T)c2_iacol;
      }
    }

    c2_poslim_size[0] = 7;
    c2_poslim_size[1] = 2;
    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      for (c2_i22 = 0; c2_i22 < 4; c2_i22++) {
        c2_poslim_data[c2_i22 + c2_poslim_size[0] * c2_i18] = rtNaN;
      }
    }

    for (c2_i21 = 0; c2_i21 < 2; c2_i21++) {
      for (c2_i23 = 0; c2_i23 < 3; c2_i23++) {
        c2_poslim_data[(c2_i23 + c2_poslim_size[0] * c2_i21) + 4] =
          c2_b_b[c2_i23 + 3 * c2_i21];
      }
    }

    c2_homepos_size[1] = 7;
    for (c2_i24 = 0; c2_i24 < 7; c2_i24++) {
      c2_homepos_data[c2_i24] = c2_dv2[c2_i24];
    }

    c2_b_obj->VelocityNumber = 6.0;
    c2_b_obj->PositionNumber = 7.0;
    for (c2_i25 = 0; c2_i25 < 3; c2_i25++) {
      c2_b_obj->JointAxisInternal[c2_i25] = rtNaN;
    }
    break;

   default:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    memset(&c2_msubspace_data[0], 0, 6U * sizeof(real_T));
    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    memset(&c2_poslim_data[0], 0, sizeof(real_T) << 1);
    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 0.0;
    c2_b_obj->PositionNumber = 0.0;
    for (c2_i17 = 0; c2_i17 < 3; c2_i17++) {
      c2_b_obj->JointAxisInternal[c2_i17] = 0.0;
    }
    break;
  }

  c2_st.site = &c2_eb_emlrtRSI;
  c2_rigidBodyJoint_set_MotionSubspace(chartInstance, &c2_st, c2_b_obj,
    c2_msubspace_data, c2_msubspace_size);
  c2_st.site = &c2_fb_emlrtRSI;
  c2_e_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_e_obj->TypeInternal;
  c2_d1 = c2_s.Length;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i26 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i27 = (int32_T)c2_d1;
    if ((c2_i27 < 1) || (c2_i27 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i26 = c2_i27 - 1;
  }

  c2_switch_expression_size[1] = c2_i26 + 1;
  c2_b_loop_ub = c2_i26;
  for (c2_i28 = 0; c2_i28 <= c2_b_loop_ub; c2_i28++) {
    c2_switch_expression_data[c2_i28] = c2_s.Vector[c2_i28];
  }

  c2_bool = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_g_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_g_kstr - 1 < 5) {
        c2_h_kstr = c2_g_kstr - 1;
        if (c2_switch_expression_data[c2_h_kstr] != c2_b_cv4[c2_h_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_g_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d2 = c2_b_obj->PositionNumber;
    c2_b2 = (c2_d2 < 1.0);
    if (c2_b2) {
      c2_i31 = -1;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i33 = (int32_T)c2_d2;
      if ((c2_i33 < 1) || (c2_i33 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i33, 1, 7, &c2_c_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i31 = c2_i33 - 1;
    }

    c2_tmp_size[0] = c2_i31 + 1;
    c2_c_loop_ub = c2_i31;
    for (c2_i34 = 0; c2_i34 <= c2_c_loop_ub; c2_i34++) {
      c2_tmp_data[c2_i34] = c2_i34;
    }

    c2_iv1[0] = c2_tmp_size[0];
    c2_iv1[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c2_iv1[0], 2, &c2_poslim_size[0], 2,
      &c2_emlrtECI, (void *)c2_sp);
    c2_iv2[0] = c2_tmp_size[0];
    for (c2_i35 = 0; c2_i35 < 2; c2_i35++) {
      c2_d_loop_ub = c2_iv2[0] - 1;
      for (c2_i36 = 0; c2_i36 <= c2_d_loop_ub; c2_i36++) {
        c2_b_obj->PositionLimitsInternal[c2_tmp_data[c2_i36] + 7 * c2_i35] =
          c2_poslim_data[c2_i36 + c2_poslim_size[0] * c2_i35];
      }
    }

    c2_d3 = c2_b_obj->PositionNumber;
    c2_b3 = (c2_d3 < 1.0);
    if (c2_b3) {
      c2_i37 = 0;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_b_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i38 = (int32_T)c2_d3;
      if ((c2_i38 < 1) || (c2_i38 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i38, 1, 7, &c2_d_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i37 = c2_i38;
    }

    if (c2_i37 != c2_homepos_size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i37, c2_homepos_size[1], &c2_b_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_e_loop_ub = c2_homepos_size[1] - 1;
    for (c2_i39 = 0; c2_i39 <= c2_e_loop_ub; c2_i39++) {
      c2_b_obj->HomePositionInternal[c2_i39] = c2_homepos_data[c2_i39];
    }
  } else {
    for (c2_i29 = 0; c2_i29 < 2; c2_i29++) {
      c2_iv[c2_i29] = 1 + c2_i29;
    }

    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_poslim_size[0], 2,
      &c2_c_emlrtECI, (void *)c2_sp);
    c2_i30 = 0;
    for (c2_i32 = 0; c2_i32 < 2; c2_i32++) {
      c2_b_obj->PositionLimitsInternal[c2_i30] = c2_poslim_data[c2_i32];
      c2_i30 += 7;
    }

    if (c2_homepos_size[1] != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, c2_homepos_size[1], &c2_d_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_b_obj->HomePositionInternal[0] = c2_homepos_data[0];
  }

  return c2_b_obj;
}

static c2_robotics_manip_internal_RigidBody *c2_RigidBody_RigidBody
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBody *c2_obj, char_T c2_bodyInput[10],
   c2_robotics_manip_internal_CollisionSet *c2_iobj_0, c2_rigidBodyJoint
   *c2_iobj_1)
{
  static char_T c2_b_cv[4] = { '_', 'j', 'n', 't' };

  c2_robotics_manip_internal_CharacterVector c2_s;
  c2_robotics_manip_internal_RigidBody *c2_b_obj;
  c2_robotics_manip_internal_RigidBody *c2_c_obj;
  c2_robotics_manip_internal_RigidBody *c2_this;
  emlrtStack c2_st;
  real_T c2_b_I[36];
  real_T c2_I[9];
  int32_T c2_b_k;
  int32_T c2_c_k;
  int32_T c2_d_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_k;
  char_T c2_jname[14];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_obj = c2_obj;
  c2_st.site = &c2_w_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_b_obj = c2_c_obj;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_s.Length = 200.0;
  for (c2_i = 0; c2_i < 200; c2_i++) {
    c2_s.Vector[c2_i] = ' ';
  }

  c2_b_obj->NameInternal = c2_s;
  c2_s = c2_b_obj->NameInternal;
  c2_s.Length = 10.0;
  for (c2_i1 = 0; c2_i1 < 10; c2_i1++) {
    c2_s.Vector[c2_i1] = c2_bodyInput[c2_i1];
  }

  c2_b_obj->NameInternal = c2_s;
  for (c2_i2 = 0; c2_i2 < 10; c2_i2++) {
    c2_jname[c2_i2] = c2_bodyInput[c2_i2];
  }

  for (c2_i3 = 0; c2_i3 < 4; c2_i3++) {
    c2_jname[c2_i3 + 10] = c2_b_cv[c2_i3];
  }

  c2_st.site = &c2_x_emlrtRSI;
  c2_b_obj->JointInternal = c2_b_rigidBodyJoint_rigidBodyJoint(chartInstance,
    &c2_st, c2_iobj_1, c2_jname);
  c2_b_obj->Index = -1.0;
  c2_b_obj->ParentIndex = -1.0;
  c2_b_obj->MassInternal = 1.0;
  for (c2_i4 = 0; c2_i4 < 3; c2_i4++) {
    c2_b_obj->CenterOfMassInternal[c2_i4] = 0.0;
  }

  memset(&c2_I[0], 0, 9U * sizeof(real_T));
  for (c2_k = 0; c2_k < 3; c2_k++) {
    c2_b_k = c2_k;
    c2_I[c2_b_k + 3 * c2_b_k] = 1.0;
  }

  for (c2_i5 = 0; c2_i5 < 9; c2_i5++) {
    c2_b_obj->InertiaInternal[c2_i5] = c2_I[c2_i5];
  }

  memset(&c2_b_I[0], 0, 36U * sizeof(real_T));
  for (c2_c_k = 0; c2_c_k < 6; c2_c_k++) {
    c2_d_k = c2_c_k;
    c2_b_I[c2_d_k + 6 * c2_d_k] = 1.0;
  }

  for (c2_i6 = 0; c2_i6 < 36; c2_i6++) {
    c2_b_obj->SpatialInertia[c2_i6] = c2_b_I[c2_i6];
  }

  c2_st.site = &c2_y_emlrtRSI;
  c2_b_obj->CollisionsInternal = c2_CollisionSet_CollisionSet(chartInstance,
    &c2_st, c2_iobj_0, 0.0);
  c2_b_obj->matlabCodegenIsDeleted = false;
  return c2_b_obj;
}

static c2_rigidBodyJoint *c2_b_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj, char_T c2_jname[14])
{
  static char_T c2_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv2[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv3[5] = { 'f', 'i', 'x', 'e', 'd' };

  c2_rigidBodyJoint *c2_b_obj;
  c2_rigidBodyJoint *c2_c_obj;
  c2_rigidBodyJoint *c2_d_obj;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_this;
  c2_robotics_manip_internal_CharacterVector c2_s;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  real_T c2_I[36];
  real_T c2_msubspace_data[36];
  real_T c2_poslim_data[14];
  real_T c2_homepos_data[7];
  real_T c2_b_b[6];
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_index;
  int32_T c2_tmp_data[7];
  int32_T c2_homepos_size[2];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_msubspace_size[2];
  int32_T c2_poslim_size[2];
  int32_T c2_switch_expression_size[2];
  int32_T c2_x_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_itilerow;
  int32_T c2_b_jcol;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsB;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_remainingDimsB;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_kstr;
  int32_T c2_g_kstr;
  int32_T c2_h_kstr;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_iacol;
  int32_T c2_ibcol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_jcol;
  int32_T c2_k;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  int32_T c2_remainingDimsB;
  char_T c2_switch_expression_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_b_obj = c2_obj;
  c2_b_obj->InTree = false;
  for (c2_i = 0; c2_i < 16; c2_i++) {
    c2_b_obj->JointToParentTransform[c2_i] = c2_dv[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 16; c2_i1++) {
    c2_b_obj->ChildToJointTransform[c2_i1] = c2_dv[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 14; c2_i2++) {
    c2_b_obj->PositionLimitsInternal[c2_i2] = 0.0;
  }

  for (c2_i3 = 0; c2_i3 < 7; c2_i3++) {
    c2_b_obj->HomePositionInternal[c2_i3] = 0.0;
  }

  for (c2_i4 = 0; c2_i4 < 36; c2_i4++) {
    c2_b_obj->MotionSubspaceInternal[c2_i4] = 0.0;
  }

  c2_st.site = &c2_bb_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_s.Length = 200.0;
  for (c2_i5 = 0; c2_i5 < 200; c2_i5++) {
    c2_s.Vector[c2_i5] = ' ';
  }

  c2_b_obj->NameInternal = c2_s;
  c2_s.Length = 200.0;
  for (c2_i6 = 0; c2_i6 < 200; c2_i6++) {
    c2_s.Vector[c2_i6] = ' ';
  }

  c2_b_obj->TypeInternal = c2_s;
  c2_s = c2_b_obj->NameInternal;
  c2_s.Length = 14.0;
  for (c2_i7 = 0; c2_i7 < 14; c2_i7++) {
    c2_s.Vector[c2_i7] = c2_jname[c2_i7];
  }

  c2_b_obj->NameInternal = c2_s;
  c2_st.site = &c2_cb_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_s = c2_c_obj->TypeInternal;
  c2_s.Length = 5.0;
  for (c2_i8 = 0; c2_i8 < 5; c2_i8++) {
    c2_s.Vector[c2_i8] = c2_b_cv[c2_i8];
  }

  c2_c_obj->TypeInternal = c2_s;
  c2_st.site = &c2_db_emlrtRSI;
  c2_d_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_d_obj->TypeInternal;
  c2_d = c2_s.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i9 = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i10 = (int32_T)c2_d;
    if ((c2_i10 < 1) || (c2_i10 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i9 = c2_i10 - 1;
  }

  c2_switch_expression_size[1] = c2_i9 + 1;
  c2_loop_ub = c2_i9;
  for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
    c2_switch_expression_data[c2_i11] = c2_s.Vector[c2_i11];
  }

  c2_result = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsB = c2_x_size[1];
  if (c2_remainingDimsB != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_b_cv1[c2_b_kstr] != c2_switch_expression_data[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_result = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_result) {
    c2_index = 0.0;
  } else {
    c2_b_result = false;
    c2_x_size[1] = c2_switch_expression_size[1];
    c2_b_remainingDimsB = c2_x_size[1];
    if (c2_b_remainingDimsB != 9) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 9) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_cv1[c2_d_kstr] != c2_switch_expression_data[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_result = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_result) {
      c2_index = 1.0;
    } else {
      c2_c_result = false;
      c2_x_size[1] = c2_switch_expression_size[1];
      c2_c_remainingDimsB = c2_x_size[1];
      if (c2_c_remainingDimsB != 8) {
      } else {
        c2_e_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_e_kstr - 1 < 8) {
            c2_f_kstr = c2_e_kstr - 1;
            if (c2_b_cv2[c2_f_kstr] != c2_switch_expression_data[c2_f_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_e_kstr++;
            }
          } else {
            c2_c_result = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_result) {
        c2_index = 2.0;
      } else {
        c2_index = -1.0;
      }
    }
  }

  switch ((int32_T)c2_index) {
   case 0:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i12 = 0; c2_i12 < 6; c2_i12++) {
      c2_msubspace_data[c2_i12] = c2_dv5[c2_i12];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
      c2_poslim_data[c2_i15] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c2_i15;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i19 = 0; c2_i19 < 3; c2_i19++) {
      c2_b_obj->JointAxisInternal[c2_i19] = c2_dv4[c2_i19];
    }
    break;

   case 1:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i13 = 0; c2_i13 < 6; c2_i13++) {
      c2_msubspace_data[c2_i13] = c2_dv3[c2_i13];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
      c2_poslim_data[c2_i16] = -0.5 + (real_T)c2_i16;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i20 = 0; c2_i20 < 3; c2_i20++) {
      c2_b_obj->JointAxisInternal[c2_i20] = c2_dv4[c2_i20];
    }
    break;

   case 2:
    memset(&c2_I[0], 0, 36U * sizeof(real_T));
    for (c2_k = 0; c2_k < 6; c2_k++) {
      c2_b_k = c2_k;
      c2_I[c2_b_k + 6 * c2_b_k] = 1.0;
    }

    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 6;
    for (c2_i14 = 0; c2_i14 < 36; c2_i14++) {
      c2_msubspace_data[c2_i14] = c2_I[c2_i14];
    }

    for (c2_jcol = 0; c2_jcol < 2; c2_jcol++) {
      c2_b_jcol = c2_jcol;
      c2_iacol = c2_b_jcol;
      c2_ibmat = c2_b_jcol * 3 - 1;
      for (c2_itilerow = 0; c2_itilerow < 3; c2_itilerow++) {
        c2_b_itilerow = c2_itilerow;
        c2_ibcol = c2_ibmat + c2_b_itilerow;
        c2_b_b[c2_ibcol + 1] = -5.0 + 10.0 * (real_T)c2_iacol;
      }
    }

    c2_poslim_size[0] = 7;
    c2_poslim_size[1] = 2;
    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      for (c2_i22 = 0; c2_i22 < 4; c2_i22++) {
        c2_poslim_data[c2_i22 + c2_poslim_size[0] * c2_i18] = rtNaN;
      }
    }

    for (c2_i21 = 0; c2_i21 < 2; c2_i21++) {
      for (c2_i23 = 0; c2_i23 < 3; c2_i23++) {
        c2_poslim_data[(c2_i23 + c2_poslim_size[0] * c2_i21) + 4] =
          c2_b_b[c2_i23 + 3 * c2_i21];
      }
    }

    c2_homepos_size[1] = 7;
    for (c2_i24 = 0; c2_i24 < 7; c2_i24++) {
      c2_homepos_data[c2_i24] = c2_dv2[c2_i24];
    }

    c2_b_obj->VelocityNumber = 6.0;
    c2_b_obj->PositionNumber = 7.0;
    for (c2_i25 = 0; c2_i25 < 3; c2_i25++) {
      c2_b_obj->JointAxisInternal[c2_i25] = rtNaN;
    }
    break;

   default:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    memset(&c2_msubspace_data[0], 0, 6U * sizeof(real_T));
    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    memset(&c2_poslim_data[0], 0, sizeof(real_T) << 1);
    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 0.0;
    c2_b_obj->PositionNumber = 0.0;
    for (c2_i17 = 0; c2_i17 < 3; c2_i17++) {
      c2_b_obj->JointAxisInternal[c2_i17] = 0.0;
    }
    break;
  }

  c2_st.site = &c2_eb_emlrtRSI;
  c2_rigidBodyJoint_set_MotionSubspace(chartInstance, &c2_st, c2_b_obj,
    c2_msubspace_data, c2_msubspace_size);
  c2_st.site = &c2_fb_emlrtRSI;
  c2_e_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_e_obj->TypeInternal;
  c2_d1 = c2_s.Length;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i26 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i27 = (int32_T)c2_d1;
    if ((c2_i27 < 1) || (c2_i27 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i26 = c2_i27 - 1;
  }

  c2_switch_expression_size[1] = c2_i26 + 1;
  c2_b_loop_ub = c2_i26;
  for (c2_i28 = 0; c2_i28 <= c2_b_loop_ub; c2_i28++) {
    c2_switch_expression_data[c2_i28] = c2_s.Vector[c2_i28];
  }

  c2_bool = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_g_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_g_kstr - 1 < 5) {
        c2_h_kstr = c2_g_kstr - 1;
        if (c2_switch_expression_data[c2_h_kstr] != c2_b_cv3[c2_h_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_g_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d2 = c2_b_obj->PositionNumber;
    c2_b2 = (c2_d2 < 1.0);
    if (c2_b2) {
      c2_i31 = -1;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i33 = (int32_T)c2_d2;
      if ((c2_i33 < 1) || (c2_i33 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i33, 1, 7, &c2_c_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i31 = c2_i33 - 1;
    }

    c2_tmp_size[0] = c2_i31 + 1;
    c2_c_loop_ub = c2_i31;
    for (c2_i34 = 0; c2_i34 <= c2_c_loop_ub; c2_i34++) {
      c2_tmp_data[c2_i34] = c2_i34;
    }

    c2_iv1[0] = c2_tmp_size[0];
    c2_iv1[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c2_iv1[0], 2, &c2_poslim_size[0], 2,
      &c2_emlrtECI, (void *)c2_sp);
    c2_iv2[0] = c2_tmp_size[0];
    for (c2_i35 = 0; c2_i35 < 2; c2_i35++) {
      c2_d_loop_ub = c2_iv2[0] - 1;
      for (c2_i36 = 0; c2_i36 <= c2_d_loop_ub; c2_i36++) {
        c2_b_obj->PositionLimitsInternal[c2_tmp_data[c2_i36] + 7 * c2_i35] =
          c2_poslim_data[c2_i36 + c2_poslim_size[0] * c2_i35];
      }
    }

    c2_d3 = c2_b_obj->PositionNumber;
    c2_b3 = (c2_d3 < 1.0);
    if (c2_b3) {
      c2_i37 = 0;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_b_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i38 = (int32_T)c2_d3;
      if ((c2_i38 < 1) || (c2_i38 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i38, 1, 7, &c2_d_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i37 = c2_i38;
    }

    if (c2_i37 != c2_homepos_size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i37, c2_homepos_size[1], &c2_b_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_e_loop_ub = c2_homepos_size[1] - 1;
    for (c2_i39 = 0; c2_i39 <= c2_e_loop_ub; c2_i39++) {
      c2_b_obj->HomePositionInternal[c2_i39] = c2_homepos_data[c2_i39];
    }
  } else {
    for (c2_i29 = 0; c2_i29 < 2; c2_i29++) {
      c2_iv[c2_i29] = 1 + c2_i29;
    }

    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_poslim_size[0], 2,
      &c2_c_emlrtECI, (void *)c2_sp);
    c2_i30 = 0;
    for (c2_i32 = 0; c2_i32 < 2; c2_i32++) {
      c2_b_obj->PositionLimitsInternal[c2_i30] = c2_poslim_data[c2_i32];
      c2_i30 += 7;
    }

    if (c2_homepos_size[1] != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, c2_homepos_size[1], &c2_d_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_b_obj->HomePositionInternal[0] = c2_homepos_data[0];
  }

  return c2_b_obj;
}

static c2_rigidBody *c2_b_rigidBody_rigidBody(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBody *c2_obj,
  c2_robotics_manip_internal_RigidBodyTree *c2_iobj_0,
  c2_robotics_manip_internal_CollisionSet *c2_iobj_1, c2_rigidBodyJoint
  *c2_iobj_2, c2_robotics_manip_internal_RigidBody *c2_iobj_3)
{
  static char_T c2_b_cv[15] = { 'C', 'A', 'r', 'm', 'O', 'r', 'b', 'i', 't', 'a',
    'l', '_', 'j', 'n', 't' };

  static char_T c2_b_cv2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv3[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv4[5] = { 'f', 'i', 'x', 'e', 'd' };

  c2_rigidBody *c2_b_obj;
  c2_rigidBody *c2_c_this;
  c2_rigidBody *c2_j_obj;
  c2_rigidBodyJoint *c2_b_iobj_1;
  c2_rigidBodyJoint *c2_b_this;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_f_obj;
  c2_rigidBodyJoint *c2_g_obj;
  c2_rigidBodyJoint *c2_h_obj;
  c2_rigidBodyJoint *c2_i_obj;
  c2_robotics_manip_internal_CharacterVector c2_s;
  c2_robotics_manip_internal_CollisionSet *c2_b_iobj_0;
  c2_robotics_manip_internal_RigidBody *c2_bodyInternal;
  c2_robotics_manip_internal_RigidBody *c2_c_obj;
  c2_robotics_manip_internal_RigidBody *c2_d_obj;
  c2_robotics_manip_internal_RigidBody *c2_default;
  c2_robotics_manip_internal_RigidBody *c2_this;
  c2_robotics_manip_internal_RigidBodyTree *c2_b_default;
  c2_robotics_manip_internal_RigidBodyTree *c2_treeInternal;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  real_T c2_I[36];
  real_T c2_msubspace_data[36];
  real_T c2_poslim_data[14];
  real_T c2_b_I[9];
  real_T c2_homepos_data[7];
  real_T c2_b_b[6];
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_index;
  int32_T c2_tmp_data[7];
  int32_T c2_homepos_size[2];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_msubspace_size[2];
  int32_T c2_poslim_size[2];
  int32_T c2_switch_expression_size[2];
  int32_T c2_x_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_itilerow;
  int32_T c2_b_jcol;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsB;
  int32_T c2_c_k;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_remainingDimsB;
  int32_T c2_d_k;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_e_k;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_k;
  int32_T c2_f_kstr;
  int32_T c2_g_kstr;
  int32_T c2_h_kstr;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_iacol;
  int32_T c2_ibcol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_jcol;
  int32_T c2_k;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  int32_T c2_remainingDimsB;
  char_T c2_switch_expression_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_b_obj = c2_obj;
  c2_st.site = &c2_r_emlrtRSI;
  c2_b_st.site = &c2_v_emlrtRSI;
  c2_c_obj = c2_iobj_3;
  c2_b_iobj_0 = c2_iobj_1;
  c2_b_iobj_1 = c2_iobj_2;
  c2_default = c2_c_obj;
  c2_c_st.site = &c2_w_emlrtRSI;
  c2_d_obj = c2_default;
  c2_default = c2_d_obj;
  c2_d_st.site = &c2_ab_emlrtRSI;
  c2_this = c2_default;
  c2_default = c2_this;
  c2_s.Length = 200.0;
  for (c2_i = 0; c2_i < 200; c2_i++) {
    c2_s.Vector[c2_i] = ' ';
  }

  c2_default->NameInternal = c2_s;
  c2_s = c2_default->NameInternal;
  c2_s.Length = 11.0;
  for (c2_i1 = 0; c2_i1 < 11; c2_i1++) {
    c2_s.Vector[c2_i1] = c2_cv4[c2_i1];
  }

  c2_default->NameInternal = c2_s;
  c2_c_st.site = &c2_x_emlrtRSI;
  c2_e_obj = c2_b_iobj_1;
  c2_f_obj = c2_e_obj;
  c2_f_obj->InTree = false;
  for (c2_i2 = 0; c2_i2 < 16; c2_i2++) {
    c2_f_obj->JointToParentTransform[c2_i2] = c2_dv[c2_i2];
  }

  for (c2_i3 = 0; c2_i3 < 16; c2_i3++) {
    c2_f_obj->ChildToJointTransform[c2_i3] = c2_dv[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 14; c2_i4++) {
    c2_f_obj->PositionLimitsInternal[c2_i4] = 0.0;
  }

  for (c2_i5 = 0; c2_i5 < 7; c2_i5++) {
    c2_f_obj->HomePositionInternal[c2_i5] = 0.0;
  }

  for (c2_i6 = 0; c2_i6 < 36; c2_i6++) {
    c2_f_obj->MotionSubspaceInternal[c2_i6] = 0.0;
  }

  c2_d_st.site = &c2_bb_emlrtRSI;
  c2_b_this = c2_f_obj;
  c2_f_obj = c2_b_this;
  c2_s.Length = 200.0;
  for (c2_i7 = 0; c2_i7 < 200; c2_i7++) {
    c2_s.Vector[c2_i7] = ' ';
  }

  c2_f_obj->NameInternal = c2_s;
  c2_s.Length = 200.0;
  for (c2_i8 = 0; c2_i8 < 200; c2_i8++) {
    c2_s.Vector[c2_i8] = ' ';
  }

  c2_f_obj->TypeInternal = c2_s;
  c2_s = c2_f_obj->NameInternal;
  c2_s.Length = 15.0;
  for (c2_i9 = 0; c2_i9 < 15; c2_i9++) {
    c2_s.Vector[c2_i9] = c2_b_cv[c2_i9];
  }

  c2_f_obj->NameInternal = c2_s;
  c2_d_st.site = &c2_cb_emlrtRSI;
  c2_g_obj = c2_f_obj;
  c2_s = c2_g_obj->TypeInternal;
  c2_s.Length = 5.0;
  for (c2_i10 = 0; c2_i10 < 5; c2_i10++) {
    c2_s.Vector[c2_i10] = c2_b_cv1[c2_i10];
  }

  c2_g_obj->TypeInternal = c2_s;
  c2_d_st.site = &c2_db_emlrtRSI;
  c2_h_obj = c2_f_obj;
  c2_e_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_h_obj->TypeInternal;
  c2_d = c2_s.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i11 = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_e_st);
    }

    c2_i12 = (int32_T)c2_d;
    if ((c2_i12 < 1) || (c2_i12 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i12, 1, 200, &c2_e_emlrtBCI, &c2_e_st);
    }

    c2_i11 = c2_i12 - 1;
  }

  c2_switch_expression_size[1] = c2_i11 + 1;
  c2_loop_ub = c2_i11;
  for (c2_i13 = 0; c2_i13 <= c2_loop_ub; c2_i13++) {
    c2_switch_expression_data[c2_i13] = c2_s.Vector[c2_i13];
  }

  c2_result = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsB = c2_x_size[1];
  if (c2_remainingDimsB != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_b_cv2[c2_b_kstr] != c2_switch_expression_data[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_result = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_result) {
    c2_index = 0.0;
  } else {
    c2_b_result = false;
    c2_x_size[1] = c2_switch_expression_size[1];
    c2_b_remainingDimsB = c2_x_size[1];
    if (c2_b_remainingDimsB != 9) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 9) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_cv1[c2_d_kstr] != c2_switch_expression_data[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_result = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_result) {
      c2_index = 1.0;
    } else {
      c2_c_result = false;
      c2_x_size[1] = c2_switch_expression_size[1];
      c2_c_remainingDimsB = c2_x_size[1];
      if (c2_c_remainingDimsB != 8) {
      } else {
        c2_e_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_e_kstr - 1 < 8) {
            c2_f_kstr = c2_e_kstr - 1;
            if (c2_b_cv3[c2_f_kstr] != c2_switch_expression_data[c2_f_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_e_kstr++;
            }
          } else {
            c2_c_result = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_result) {
        c2_index = 2.0;
      } else {
        c2_index = -1.0;
      }
    }
  }

  switch ((int32_T)c2_index) {
   case 0:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i14 = 0; c2_i14 < 6; c2_i14++) {
      c2_msubspace_data[c2_i14] = c2_dv5[c2_i14];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i17 = 0; c2_i17 < 2; c2_i17++) {
      c2_poslim_data[c2_i17] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c2_i17;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_f_obj->VelocityNumber = 1.0;
    c2_f_obj->PositionNumber = 1.0;
    for (c2_i21 = 0; c2_i21 < 3; c2_i21++) {
      c2_f_obj->JointAxisInternal[c2_i21] = c2_dv4[c2_i21];
    }
    break;

   case 1:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i15 = 0; c2_i15 < 6; c2_i15++) {
      c2_msubspace_data[c2_i15] = c2_dv3[c2_i15];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      c2_poslim_data[c2_i18] = -0.5 + (real_T)c2_i18;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_f_obj->VelocityNumber = 1.0;
    c2_f_obj->PositionNumber = 1.0;
    for (c2_i22 = 0; c2_i22 < 3; c2_i22++) {
      c2_f_obj->JointAxisInternal[c2_i22] = c2_dv4[c2_i22];
    }
    break;

   case 2:
    memset(&c2_I[0], 0, 36U * sizeof(real_T));
    for (c2_k = 0; c2_k < 6; c2_k++) {
      c2_b_k = c2_k;
      c2_I[c2_b_k + 6 * c2_b_k] = 1.0;
    }

    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 6;
    for (c2_i16 = 0; c2_i16 < 36; c2_i16++) {
      c2_msubspace_data[c2_i16] = c2_I[c2_i16];
    }

    for (c2_jcol = 0; c2_jcol < 2; c2_jcol++) {
      c2_b_jcol = c2_jcol;
      c2_iacol = c2_b_jcol;
      c2_ibmat = c2_b_jcol * 3 - 1;
      for (c2_itilerow = 0; c2_itilerow < 3; c2_itilerow++) {
        c2_b_itilerow = c2_itilerow;
        c2_ibcol = c2_ibmat + c2_b_itilerow;
        c2_b_b[c2_ibcol + 1] = -5.0 + 10.0 * (real_T)c2_iacol;
      }
    }

    c2_poslim_size[0] = 7;
    c2_poslim_size[1] = 2;
    for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
      for (c2_i24 = 0; c2_i24 < 4; c2_i24++) {
        c2_poslim_data[c2_i24 + c2_poslim_size[0] * c2_i20] = rtNaN;
      }
    }

    for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
      for (c2_i25 = 0; c2_i25 < 3; c2_i25++) {
        c2_poslim_data[(c2_i25 + c2_poslim_size[0] * c2_i23) + 4] =
          c2_b_b[c2_i25 + 3 * c2_i23];
      }
    }

    c2_homepos_size[1] = 7;
    for (c2_i26 = 0; c2_i26 < 7; c2_i26++) {
      c2_homepos_data[c2_i26] = c2_dv2[c2_i26];
    }

    c2_f_obj->VelocityNumber = 6.0;
    c2_f_obj->PositionNumber = 7.0;
    for (c2_i27 = 0; c2_i27 < 3; c2_i27++) {
      c2_f_obj->JointAxisInternal[c2_i27] = rtNaN;
    }
    break;

   default:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    memset(&c2_msubspace_data[0], 0, 6U * sizeof(real_T));
    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    memset(&c2_poslim_data[0], 0, sizeof(real_T) << 1);
    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_f_obj->VelocityNumber = 0.0;
    c2_f_obj->PositionNumber = 0.0;
    for (c2_i19 = 0; c2_i19 < 3; c2_i19++) {
      c2_f_obj->JointAxisInternal[c2_i19] = 0.0;
    }
    break;
  }

  c2_d_st.site = &c2_eb_emlrtRSI;
  c2_rigidBodyJoint_set_MotionSubspace(chartInstance, &c2_d_st, c2_f_obj,
    c2_msubspace_data, c2_msubspace_size);
  c2_d_st.site = &c2_fb_emlrtRSI;
  c2_i_obj = c2_f_obj;
  c2_e_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_i_obj->TypeInternal;
  c2_d1 = c2_s.Length;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i28 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_e_st);
    }

    c2_i29 = (int32_T)c2_d1;
    if ((c2_i29 < 1) || (c2_i29 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i29, 1, 200, &c2_e_emlrtBCI, &c2_e_st);
    }

    c2_i28 = c2_i29 - 1;
  }

  c2_switch_expression_size[1] = c2_i28 + 1;
  c2_b_loop_ub = c2_i28;
  for (c2_i30 = 0; c2_i30 <= c2_b_loop_ub; c2_i30++) {
    c2_switch_expression_data[c2_i30] = c2_s.Vector[c2_i30];
  }

  c2_bool = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_g_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_g_kstr - 1 < 5) {
        c2_h_kstr = c2_g_kstr - 1;
        if (c2_switch_expression_data[c2_h_kstr] != c2_b_cv4[c2_h_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_g_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d2 = c2_f_obj->PositionNumber;
    c2_b2 = (c2_d2 < 1.0);
    if (c2_b2) {
      c2_i33 = -1;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_emlrtDCI, &c2_c_st);
      }

      c2_i35 = (int32_T)c2_d2;
      if ((c2_i35 < 1) || (c2_i35 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i35, 1, 7, &c2_c_emlrtBCI, &c2_c_st);
      }

      c2_i33 = c2_i35 - 1;
    }

    c2_tmp_size[0] = c2_i33 + 1;
    c2_c_loop_ub = c2_i33;
    for (c2_i36 = 0; c2_i36 <= c2_c_loop_ub; c2_i36++) {
      c2_tmp_data[c2_i36] = c2_i36;
    }

    c2_iv1[0] = c2_tmp_size[0];
    c2_iv1[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c2_iv1[0], 2, &c2_poslim_size[0], 2,
      &c2_emlrtECI, &c2_c_st);
    c2_iv2[0] = c2_tmp_size[0];
    for (c2_i37 = 0; c2_i37 < 2; c2_i37++) {
      c2_d_loop_ub = c2_iv2[0] - 1;
      for (c2_i39 = 0; c2_i39 <= c2_d_loop_ub; c2_i39++) {
        c2_f_obj->PositionLimitsInternal[c2_tmp_data[c2_i39] + 7 * c2_i37] =
          c2_poslim_data[c2_i39 + c2_poslim_size[0] * c2_i37];
      }
    }

    c2_d3 = c2_f_obj->PositionNumber;
    c2_b3 = (c2_d3 < 1.0);
    if (c2_b3) {
      c2_i40 = 0;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_b_emlrtDCI, &c2_c_st);
      }

      c2_i42 = (int32_T)c2_d3;
      if ((c2_i42 < 1) || (c2_i42 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i42, 1, 7, &c2_d_emlrtBCI, &c2_c_st);
      }

      c2_i40 = c2_i42;
    }

    if (c2_i40 != c2_homepos_size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i40, c2_homepos_size[1], &c2_b_emlrtECI,
        &c2_c_st);
    }

    c2_e_loop_ub = c2_homepos_size[1] - 1;
    for (c2_i43 = 0; c2_i43 <= c2_e_loop_ub; c2_i43++) {
      c2_f_obj->HomePositionInternal[c2_i43] = c2_homepos_data[c2_i43];
    }
  } else {
    for (c2_i31 = 0; c2_i31 < 2; c2_i31++) {
      c2_iv[c2_i31] = 1 + c2_i31;
    }

    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_poslim_size[0], 2,
      &c2_c_emlrtECI, &c2_c_st);
    c2_i32 = 0;
    for (c2_i34 = 0; c2_i34 < 2; c2_i34++) {
      c2_f_obj->PositionLimitsInternal[c2_i32] = c2_poslim_data[c2_i34];
      c2_i32 += 7;
    }

    if (c2_homepos_size[1] != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, c2_homepos_size[1], &c2_d_emlrtECI,
        &c2_c_st);
    }

    c2_f_obj->HomePositionInternal[0] = c2_homepos_data[0];
  }

  c2_default->JointInternal = c2_f_obj;
  c2_default->Index = -1.0;
  c2_default->ParentIndex = -1.0;
  c2_default->MassInternal = 1.0;
  for (c2_i38 = 0; c2_i38 < 3; c2_i38++) {
    c2_default->CenterOfMassInternal[c2_i38] = 0.0;
  }

  memset(&c2_b_I[0], 0, 9U * sizeof(real_T));
  for (c2_c_k = 0; c2_c_k < 3; c2_c_k++) {
    c2_d_k = c2_c_k;
    c2_b_I[c2_d_k + 3 * c2_d_k] = 1.0;
  }

  for (c2_i41 = 0; c2_i41 < 9; c2_i41++) {
    c2_default->InertiaInternal[c2_i41] = c2_b_I[c2_i41];
  }

  memset(&c2_I[0], 0, 36U * sizeof(real_T));
  for (c2_e_k = 0; c2_e_k < 6; c2_e_k++) {
    c2_f_k = c2_e_k;
    c2_I[c2_f_k + 6 * c2_f_k] = 1.0;
  }

  for (c2_i44 = 0; c2_i44 < 36; c2_i44++) {
    c2_default->SpatialInertia[c2_i44] = c2_I[c2_i44];
  }

  c2_c_st.site = &c2_y_emlrtRSI;
  c2_default->CollisionsInternal = c2_CollisionSet_CollisionSet(chartInstance,
    &c2_c_st, c2_b_iobj_0, 0.0);
  c2_default->matlabCodegenIsDeleted = false;
  c2_bodyInternal = c2_default;
  c2_st.site = &c2_t_emlrtRSI;
  c2_b_st.site = &c2_s_emlrtRSI;
  c2_b_default = c2_RigidBodyTree_RigidBodyTree(chartInstance, &c2_b_st,
    c2_iobj_0);
  c2_treeInternal = c2_b_default;
  c2_st.site = &c2_u_emlrtRSI;
  c2_j_obj = c2_b_obj;
  c2_b_obj = c2_j_obj;
  c2_b_st.site = &c2_ab_emlrtRSI;
  c2_c_this = c2_b_obj;
  c2_b_obj = c2_c_this;
  c2_b_obj->BodyInternal = c2_bodyInternal;
  c2_b_obj->TreeInternal = c2_treeInternal;
  c2_b_obj->matlabCodegenIsDeleted = false;
  return c2_b_obj;
}

static c2_rigidBodyJoint *c2_c_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj)
{
  static char_T c2_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv3[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv[6] = { 'j', 'n', 't', 'C', 't', 'i' };

  static char_T c2_b_cv4[5] = { 'f', 'i', 'x', 'e', 'd' };

  c2_rigidBodyJoint *c2_b_obj;
  c2_rigidBodyJoint *c2_c_obj;
  c2_rigidBodyJoint *c2_d_obj;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_this;
  c2_robotics_manip_internal_CharacterVector c2_s;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  real_T c2_I[36];
  real_T c2_msubspace_data[36];
  real_T c2_poslim_data[14];
  real_T c2_homepos_data[7];
  real_T c2_b_b[6];
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_index;
  int32_T c2_tmp_data[7];
  int32_T c2_homepos_size[2];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_msubspace_size[2];
  int32_T c2_poslim_size[2];
  int32_T c2_switch_expression_size[2];
  int32_T c2_x_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_itilerow;
  int32_T c2_b_jcol;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsB;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_remainingDimsB;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_kstr;
  int32_T c2_g_kstr;
  int32_T c2_h_kstr;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_iacol;
  int32_T c2_ibcol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_jcol;
  int32_T c2_k;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  int32_T c2_remainingDimsB;
  char_T c2_switch_expression_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_b_obj = c2_obj;
  c2_b_obj->InTree = false;
  for (c2_i = 0; c2_i < 16; c2_i++) {
    c2_b_obj->JointToParentTransform[c2_i] = c2_dv[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 16; c2_i1++) {
    c2_b_obj->ChildToJointTransform[c2_i1] = c2_dv[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 14; c2_i2++) {
    c2_b_obj->PositionLimitsInternal[c2_i2] = 0.0;
  }

  for (c2_i3 = 0; c2_i3 < 7; c2_i3++) {
    c2_b_obj->HomePositionInternal[c2_i3] = 0.0;
  }

  for (c2_i4 = 0; c2_i4 < 36; c2_i4++) {
    c2_b_obj->MotionSubspaceInternal[c2_i4] = 0.0;
  }

  c2_st.site = &c2_bb_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_s.Length = 200.0;
  for (c2_i5 = 0; c2_i5 < 200; c2_i5++) {
    c2_s.Vector[c2_i5] = ' ';
  }

  c2_b_obj->NameInternal = c2_s;
  c2_s.Length = 200.0;
  for (c2_i6 = 0; c2_i6 < 200; c2_i6++) {
    c2_s.Vector[c2_i6] = ' ';
  }

  c2_b_obj->TypeInternal = c2_s;
  c2_s = c2_b_obj->NameInternal;
  c2_s.Length = 6.0;
  for (c2_i7 = 0; c2_i7 < 6; c2_i7++) {
    c2_s.Vector[c2_i7] = c2_b_cv[c2_i7];
  }

  c2_b_obj->NameInternal = c2_s;
  c2_st.site = &c2_cb_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_s = c2_c_obj->TypeInternal;
  c2_s.Length = 8.0;
  for (c2_i8 = 0; c2_i8 < 8; c2_i8++) {
    c2_s.Vector[c2_i8] = c2_b_cv1[c2_i8];
  }

  c2_c_obj->TypeInternal = c2_s;
  c2_st.site = &c2_db_emlrtRSI;
  c2_d_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_d_obj->TypeInternal;
  c2_d = c2_s.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i9 = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i10 = (int32_T)c2_d;
    if ((c2_i10 < 1) || (c2_i10 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i9 = c2_i10 - 1;
  }

  c2_switch_expression_size[1] = c2_i9 + 1;
  c2_loop_ub = c2_i9;
  for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
    c2_switch_expression_data[c2_i11] = c2_s.Vector[c2_i11];
  }

  c2_result = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsB = c2_x_size[1];
  if (c2_remainingDimsB != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_b_cv2[c2_b_kstr] != c2_switch_expression_data[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_result = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_result) {
    c2_index = 0.0;
  } else {
    c2_b_result = false;
    c2_x_size[1] = c2_switch_expression_size[1];
    c2_b_remainingDimsB = c2_x_size[1];
    if (c2_b_remainingDimsB != 9) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 9) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_cv1[c2_d_kstr] != c2_switch_expression_data[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_result = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_result) {
      c2_index = 1.0;
    } else {
      c2_c_result = false;
      c2_x_size[1] = c2_switch_expression_size[1];
      c2_c_remainingDimsB = c2_x_size[1];
      if (c2_c_remainingDimsB != 8) {
      } else {
        c2_e_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_e_kstr - 1 < 8) {
            c2_f_kstr = c2_e_kstr - 1;
            if (c2_b_cv3[c2_f_kstr] != c2_switch_expression_data[c2_f_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_e_kstr++;
            }
          } else {
            c2_c_result = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_result) {
        c2_index = 2.0;
      } else {
        c2_index = -1.0;
      }
    }
  }

  switch ((int32_T)c2_index) {
   case 0:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i12 = 0; c2_i12 < 6; c2_i12++) {
      c2_msubspace_data[c2_i12] = c2_dv5[c2_i12];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
      c2_poslim_data[c2_i15] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c2_i15;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i19 = 0; c2_i19 < 3; c2_i19++) {
      c2_b_obj->JointAxisInternal[c2_i19] = c2_dv4[c2_i19];
    }
    break;

   case 1:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i13 = 0; c2_i13 < 6; c2_i13++) {
      c2_msubspace_data[c2_i13] = c2_dv3[c2_i13];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
      c2_poslim_data[c2_i16] = -0.5 + (real_T)c2_i16;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i20 = 0; c2_i20 < 3; c2_i20++) {
      c2_b_obj->JointAxisInternal[c2_i20] = c2_dv4[c2_i20];
    }
    break;

   case 2:
    memset(&c2_I[0], 0, 36U * sizeof(real_T));
    for (c2_k = 0; c2_k < 6; c2_k++) {
      c2_b_k = c2_k;
      c2_I[c2_b_k + 6 * c2_b_k] = 1.0;
    }

    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 6;
    for (c2_i14 = 0; c2_i14 < 36; c2_i14++) {
      c2_msubspace_data[c2_i14] = c2_I[c2_i14];
    }

    for (c2_jcol = 0; c2_jcol < 2; c2_jcol++) {
      c2_b_jcol = c2_jcol;
      c2_iacol = c2_b_jcol;
      c2_ibmat = c2_b_jcol * 3 - 1;
      for (c2_itilerow = 0; c2_itilerow < 3; c2_itilerow++) {
        c2_b_itilerow = c2_itilerow;
        c2_ibcol = c2_ibmat + c2_b_itilerow;
        c2_b_b[c2_ibcol + 1] = -5.0 + 10.0 * (real_T)c2_iacol;
      }
    }

    c2_poslim_size[0] = 7;
    c2_poslim_size[1] = 2;
    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      for (c2_i22 = 0; c2_i22 < 4; c2_i22++) {
        c2_poslim_data[c2_i22 + c2_poslim_size[0] * c2_i18] = rtNaN;
      }
    }

    for (c2_i21 = 0; c2_i21 < 2; c2_i21++) {
      for (c2_i23 = 0; c2_i23 < 3; c2_i23++) {
        c2_poslim_data[(c2_i23 + c2_poslim_size[0] * c2_i21) + 4] =
          c2_b_b[c2_i23 + 3 * c2_i21];
      }
    }

    c2_homepos_size[1] = 7;
    for (c2_i24 = 0; c2_i24 < 7; c2_i24++) {
      c2_homepos_data[c2_i24] = c2_dv2[c2_i24];
    }

    c2_b_obj->VelocityNumber = 6.0;
    c2_b_obj->PositionNumber = 7.0;
    for (c2_i25 = 0; c2_i25 < 3; c2_i25++) {
      c2_b_obj->JointAxisInternal[c2_i25] = rtNaN;
    }
    break;

   default:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    memset(&c2_msubspace_data[0], 0, 6U * sizeof(real_T));
    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    memset(&c2_poslim_data[0], 0, sizeof(real_T) << 1);
    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 0.0;
    c2_b_obj->PositionNumber = 0.0;
    for (c2_i17 = 0; c2_i17 < 3; c2_i17++) {
      c2_b_obj->JointAxisInternal[c2_i17] = 0.0;
    }
    break;
  }

  c2_st.site = &c2_eb_emlrtRSI;
  c2_rigidBodyJoint_set_MotionSubspace(chartInstance, &c2_st, c2_b_obj,
    c2_msubspace_data, c2_msubspace_size);
  c2_st.site = &c2_fb_emlrtRSI;
  c2_e_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_e_obj->TypeInternal;
  c2_d1 = c2_s.Length;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i26 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i27 = (int32_T)c2_d1;
    if ((c2_i27 < 1) || (c2_i27 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i26 = c2_i27 - 1;
  }

  c2_switch_expression_size[1] = c2_i26 + 1;
  c2_b_loop_ub = c2_i26;
  for (c2_i28 = 0; c2_i28 <= c2_b_loop_ub; c2_i28++) {
    c2_switch_expression_data[c2_i28] = c2_s.Vector[c2_i28];
  }

  c2_bool = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_g_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_g_kstr - 1 < 5) {
        c2_h_kstr = c2_g_kstr - 1;
        if (c2_switch_expression_data[c2_h_kstr] != c2_b_cv4[c2_h_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_g_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d2 = c2_b_obj->PositionNumber;
    c2_b2 = (c2_d2 < 1.0);
    if (c2_b2) {
      c2_i31 = -1;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i33 = (int32_T)c2_d2;
      if ((c2_i33 < 1) || (c2_i33 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i33, 1, 7, &c2_c_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i31 = c2_i33 - 1;
    }

    c2_tmp_size[0] = c2_i31 + 1;
    c2_c_loop_ub = c2_i31;
    for (c2_i34 = 0; c2_i34 <= c2_c_loop_ub; c2_i34++) {
      c2_tmp_data[c2_i34] = c2_i34;
    }

    c2_iv1[0] = c2_tmp_size[0];
    c2_iv1[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c2_iv1[0], 2, &c2_poslim_size[0], 2,
      &c2_emlrtECI, (void *)c2_sp);
    c2_iv2[0] = c2_tmp_size[0];
    for (c2_i35 = 0; c2_i35 < 2; c2_i35++) {
      c2_d_loop_ub = c2_iv2[0] - 1;
      for (c2_i36 = 0; c2_i36 <= c2_d_loop_ub; c2_i36++) {
        c2_b_obj->PositionLimitsInternal[c2_tmp_data[c2_i36] + 7 * c2_i35] =
          c2_poslim_data[c2_i36 + c2_poslim_size[0] * c2_i35];
      }
    }

    c2_d3 = c2_b_obj->PositionNumber;
    c2_b3 = (c2_d3 < 1.0);
    if (c2_b3) {
      c2_i37 = 0;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_b_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i38 = (int32_T)c2_d3;
      if ((c2_i38 < 1) || (c2_i38 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i38, 1, 7, &c2_d_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i37 = c2_i38;
    }

    if (c2_i37 != c2_homepos_size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i37, c2_homepos_size[1], &c2_b_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_e_loop_ub = c2_homepos_size[1] - 1;
    for (c2_i39 = 0; c2_i39 <= c2_e_loop_ub; c2_i39++) {
      c2_b_obj->HomePositionInternal[c2_i39] = c2_homepos_data[c2_i39];
    }
  } else {
    for (c2_i29 = 0; c2_i29 < 2; c2_i29++) {
      c2_iv[c2_i29] = 1 + c2_i29;
    }

    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_poslim_size[0], 2,
      &c2_c_emlrtECI, (void *)c2_sp);
    c2_i30 = 0;
    for (c2_i32 = 0; c2_i32 < 2; c2_i32++) {
      c2_b_obj->PositionLimitsInternal[c2_i30] = c2_poslim_data[c2_i32];
      c2_i30 += 7;
    }

    if (c2_homepos_size[1] != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, c2_homepos_size[1], &c2_d_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_b_obj->HomePositionInternal[0] = c2_homepos_data[0];
  }

  return c2_b_obj;
}

static c2_rigidBodyJoint *c2_d_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj)
{
  static char_T c2_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv3[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv[6] = { 'j', 'n', 't', 'C', 'o', 'r' };

  static char_T c2_b_cv4[5] = { 'f', 'i', 'x', 'e', 'd' };

  c2_rigidBodyJoint *c2_b_obj;
  c2_rigidBodyJoint *c2_c_obj;
  c2_rigidBodyJoint *c2_d_obj;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_this;
  c2_robotics_manip_internal_CharacterVector c2_s;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  real_T c2_I[36];
  real_T c2_msubspace_data[36];
  real_T c2_poslim_data[14];
  real_T c2_homepos_data[7];
  real_T c2_b_b[6];
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_index;
  int32_T c2_tmp_data[7];
  int32_T c2_homepos_size[2];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_msubspace_size[2];
  int32_T c2_poslim_size[2];
  int32_T c2_switch_expression_size[2];
  int32_T c2_x_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_itilerow;
  int32_T c2_b_jcol;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsB;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_remainingDimsB;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_kstr;
  int32_T c2_g_kstr;
  int32_T c2_h_kstr;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_iacol;
  int32_T c2_ibcol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_jcol;
  int32_T c2_k;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  int32_T c2_remainingDimsB;
  char_T c2_switch_expression_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_b_obj = c2_obj;
  c2_b_obj->InTree = false;
  for (c2_i = 0; c2_i < 16; c2_i++) {
    c2_b_obj->JointToParentTransform[c2_i] = c2_dv[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 16; c2_i1++) {
    c2_b_obj->ChildToJointTransform[c2_i1] = c2_dv[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 14; c2_i2++) {
    c2_b_obj->PositionLimitsInternal[c2_i2] = 0.0;
  }

  for (c2_i3 = 0; c2_i3 < 7; c2_i3++) {
    c2_b_obj->HomePositionInternal[c2_i3] = 0.0;
  }

  for (c2_i4 = 0; c2_i4 < 36; c2_i4++) {
    c2_b_obj->MotionSubspaceInternal[c2_i4] = 0.0;
  }

  c2_st.site = &c2_bb_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_s.Length = 200.0;
  for (c2_i5 = 0; c2_i5 < 200; c2_i5++) {
    c2_s.Vector[c2_i5] = ' ';
  }

  c2_b_obj->NameInternal = c2_s;
  c2_s.Length = 200.0;
  for (c2_i6 = 0; c2_i6 < 200; c2_i6++) {
    c2_s.Vector[c2_i6] = ' ';
  }

  c2_b_obj->TypeInternal = c2_s;
  c2_s = c2_b_obj->NameInternal;
  c2_s.Length = 6.0;
  for (c2_i7 = 0; c2_i7 < 6; c2_i7++) {
    c2_s.Vector[c2_i7] = c2_b_cv[c2_i7];
  }

  c2_b_obj->NameInternal = c2_s;
  c2_st.site = &c2_cb_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_s = c2_c_obj->TypeInternal;
  c2_s.Length = 8.0;
  for (c2_i8 = 0; c2_i8 < 8; c2_i8++) {
    c2_s.Vector[c2_i8] = c2_b_cv1[c2_i8];
  }

  c2_c_obj->TypeInternal = c2_s;
  c2_st.site = &c2_db_emlrtRSI;
  c2_d_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_d_obj->TypeInternal;
  c2_d = c2_s.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i9 = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i10 = (int32_T)c2_d;
    if ((c2_i10 < 1) || (c2_i10 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i9 = c2_i10 - 1;
  }

  c2_switch_expression_size[1] = c2_i9 + 1;
  c2_loop_ub = c2_i9;
  for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
    c2_switch_expression_data[c2_i11] = c2_s.Vector[c2_i11];
  }

  c2_result = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsB = c2_x_size[1];
  if (c2_remainingDimsB != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_b_cv2[c2_b_kstr] != c2_switch_expression_data[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_result = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_result) {
    c2_index = 0.0;
  } else {
    c2_b_result = false;
    c2_x_size[1] = c2_switch_expression_size[1];
    c2_b_remainingDimsB = c2_x_size[1];
    if (c2_b_remainingDimsB != 9) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 9) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_cv1[c2_d_kstr] != c2_switch_expression_data[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_result = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_result) {
      c2_index = 1.0;
    } else {
      c2_c_result = false;
      c2_x_size[1] = c2_switch_expression_size[1];
      c2_c_remainingDimsB = c2_x_size[1];
      if (c2_c_remainingDimsB != 8) {
      } else {
        c2_e_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_e_kstr - 1 < 8) {
            c2_f_kstr = c2_e_kstr - 1;
            if (c2_b_cv3[c2_f_kstr] != c2_switch_expression_data[c2_f_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_e_kstr++;
            }
          } else {
            c2_c_result = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_result) {
        c2_index = 2.0;
      } else {
        c2_index = -1.0;
      }
    }
  }

  switch ((int32_T)c2_index) {
   case 0:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i12 = 0; c2_i12 < 6; c2_i12++) {
      c2_msubspace_data[c2_i12] = c2_dv5[c2_i12];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
      c2_poslim_data[c2_i15] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c2_i15;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i19 = 0; c2_i19 < 3; c2_i19++) {
      c2_b_obj->JointAxisInternal[c2_i19] = c2_dv4[c2_i19];
    }
    break;

   case 1:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i13 = 0; c2_i13 < 6; c2_i13++) {
      c2_msubspace_data[c2_i13] = c2_dv3[c2_i13];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
      c2_poslim_data[c2_i16] = -0.5 + (real_T)c2_i16;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i20 = 0; c2_i20 < 3; c2_i20++) {
      c2_b_obj->JointAxisInternal[c2_i20] = c2_dv4[c2_i20];
    }
    break;

   case 2:
    memset(&c2_I[0], 0, 36U * sizeof(real_T));
    for (c2_k = 0; c2_k < 6; c2_k++) {
      c2_b_k = c2_k;
      c2_I[c2_b_k + 6 * c2_b_k] = 1.0;
    }

    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 6;
    for (c2_i14 = 0; c2_i14 < 36; c2_i14++) {
      c2_msubspace_data[c2_i14] = c2_I[c2_i14];
    }

    for (c2_jcol = 0; c2_jcol < 2; c2_jcol++) {
      c2_b_jcol = c2_jcol;
      c2_iacol = c2_b_jcol;
      c2_ibmat = c2_b_jcol * 3 - 1;
      for (c2_itilerow = 0; c2_itilerow < 3; c2_itilerow++) {
        c2_b_itilerow = c2_itilerow;
        c2_ibcol = c2_ibmat + c2_b_itilerow;
        c2_b_b[c2_ibcol + 1] = -5.0 + 10.0 * (real_T)c2_iacol;
      }
    }

    c2_poslim_size[0] = 7;
    c2_poslim_size[1] = 2;
    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      for (c2_i22 = 0; c2_i22 < 4; c2_i22++) {
        c2_poslim_data[c2_i22 + c2_poslim_size[0] * c2_i18] = rtNaN;
      }
    }

    for (c2_i21 = 0; c2_i21 < 2; c2_i21++) {
      for (c2_i23 = 0; c2_i23 < 3; c2_i23++) {
        c2_poslim_data[(c2_i23 + c2_poslim_size[0] * c2_i21) + 4] =
          c2_b_b[c2_i23 + 3 * c2_i21];
      }
    }

    c2_homepos_size[1] = 7;
    for (c2_i24 = 0; c2_i24 < 7; c2_i24++) {
      c2_homepos_data[c2_i24] = c2_dv2[c2_i24];
    }

    c2_b_obj->VelocityNumber = 6.0;
    c2_b_obj->PositionNumber = 7.0;
    for (c2_i25 = 0; c2_i25 < 3; c2_i25++) {
      c2_b_obj->JointAxisInternal[c2_i25] = rtNaN;
    }
    break;

   default:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    memset(&c2_msubspace_data[0], 0, 6U * sizeof(real_T));
    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    memset(&c2_poslim_data[0], 0, sizeof(real_T) << 1);
    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 0.0;
    c2_b_obj->PositionNumber = 0.0;
    for (c2_i17 = 0; c2_i17 < 3; c2_i17++) {
      c2_b_obj->JointAxisInternal[c2_i17] = 0.0;
    }
    break;
  }

  c2_st.site = &c2_eb_emlrtRSI;
  c2_rigidBodyJoint_set_MotionSubspace(chartInstance, &c2_st, c2_b_obj,
    c2_msubspace_data, c2_msubspace_size);
  c2_st.site = &c2_fb_emlrtRSI;
  c2_e_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_e_obj->TypeInternal;
  c2_d1 = c2_s.Length;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i26 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i27 = (int32_T)c2_d1;
    if ((c2_i27 < 1) || (c2_i27 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i26 = c2_i27 - 1;
  }

  c2_switch_expression_size[1] = c2_i26 + 1;
  c2_b_loop_ub = c2_i26;
  for (c2_i28 = 0; c2_i28 <= c2_b_loop_ub; c2_i28++) {
    c2_switch_expression_data[c2_i28] = c2_s.Vector[c2_i28];
  }

  c2_bool = false;
  c2_x_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_g_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_g_kstr - 1 < 5) {
        c2_h_kstr = c2_g_kstr - 1;
        if (c2_switch_expression_data[c2_h_kstr] != c2_b_cv4[c2_h_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_g_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d2 = c2_b_obj->PositionNumber;
    c2_b2 = (c2_d2 < 1.0);
    if (c2_b2) {
      c2_i31 = -1;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i33 = (int32_T)c2_d2;
      if ((c2_i33 < 1) || (c2_i33 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i33, 1, 7, &c2_c_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i31 = c2_i33 - 1;
    }

    c2_tmp_size[0] = c2_i31 + 1;
    c2_c_loop_ub = c2_i31;
    for (c2_i34 = 0; c2_i34 <= c2_c_loop_ub; c2_i34++) {
      c2_tmp_data[c2_i34] = c2_i34;
    }

    c2_iv1[0] = c2_tmp_size[0];
    c2_iv1[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c2_iv1[0], 2, &c2_poslim_size[0], 2,
      &c2_emlrtECI, (void *)c2_sp);
    c2_iv2[0] = c2_tmp_size[0];
    for (c2_i35 = 0; c2_i35 < 2; c2_i35++) {
      c2_d_loop_ub = c2_iv2[0] - 1;
      for (c2_i36 = 0; c2_i36 <= c2_d_loop_ub; c2_i36++) {
        c2_b_obj->PositionLimitsInternal[c2_tmp_data[c2_i36] + 7 * c2_i35] =
          c2_poslim_data[c2_i36 + c2_poslim_size[0] * c2_i35];
      }
    }

    c2_d3 = c2_b_obj->PositionNumber;
    c2_b3 = (c2_d3 < 1.0);
    if (c2_b3) {
      c2_i37 = 0;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_b_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i38 = (int32_T)c2_d3;
      if ((c2_i38 < 1) || (c2_i38 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i38, 1, 7, &c2_d_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i37 = c2_i38;
    }

    if (c2_i37 != c2_homepos_size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i37, c2_homepos_size[1], &c2_b_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_e_loop_ub = c2_homepos_size[1] - 1;
    for (c2_i39 = 0; c2_i39 <= c2_e_loop_ub; c2_i39++) {
      c2_b_obj->HomePositionInternal[c2_i39] = c2_homepos_data[c2_i39];
    }
  } else {
    for (c2_i29 = 0; c2_i29 < 2; c2_i29++) {
      c2_iv[c2_i29] = 1 + c2_i29;
    }

    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_poslim_size[0], 2,
      &c2_c_emlrtECI, (void *)c2_sp);
    c2_i30 = 0;
    for (c2_i32 = 0; c2_i32 < 2; c2_i32++) {
      c2_b_obj->PositionLimitsInternal[c2_i30] = c2_poslim_data[c2_i32];
      c2_i30 += 7;
    }

    if (c2_homepos_size[1] != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, c2_homepos_size[1], &c2_d_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_b_obj->HomePositionInternal[0] = c2_homepos_data[0];
  }

  return c2_b_obj;
}

static void c2_rigidBodyJoint_set_PositionLimits(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj)
{
  static char_T c2_b_cv1[8] = { 'n', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c2_b_cv[4] = { 'r', 'e', 'a', 'l' };

  static char_T c2_b_cv2[4] = { 's', 'i', 'z', 'e' };

  c2_cell_9 c2_r;
  c2_rigidBodyJoint *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_homepos_data[7];
  real_T c2_x_data[7];
  real_T c2_b_dv[2];
  real_T c2_d;
  real_T c2_d1;
  int32_T c2_tmp_data[7];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_sz[2];
  int32_T c2_x_size[2];
  int32_T c2_b_homepos_size[1];
  int32_T c2_c_homepos_size[1];
  int32_T c2_homepos_size[1];
  int32_T c2_tmp_size[1];
  int32_T c2_a;
  int32_T c2_b_loop_ub;
  int32_T c2_b_nx;
  int32_T c2_b_varargin_1;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_emptyDimValue;
  int32_T c2_f_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_loop_ub;
  int32_T c2_maxdimlen;
  int32_T c2_n;
  int32_T c2_nx;
  int32_T c2_result;
  int32_T c2_varargin_1;
  boolean_T c2_b_homepos_data[7];
  boolean_T c2_c_homepos_data[7];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_guard1;
  boolean_T c2_resetHome;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_gc_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_resetHome = false;
  if (c2_b_obj->PositionNumber != (real_T)(int32_T)muDoubleScalarFloor
      (c2_b_obj->PositionNumber)) {
    emlrtIntegerCheckR2012b(c2_b_obj->PositionNumber, &c2_i_emlrtDCI, &c2_st);
  }

  c2_guard1 = false;
  switch ((int32_T)c2_b_obj->PositionNumber) {
   case 0:
    c2_b_st.site = &c2_ic_emlrtRSI;
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv6, 10, 0U, 1, 0U, 2, 1, 61),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv6, 10, 0U, 1, 0U, 2, 1, 61),
                  false);
    sf_mex_call(&c2_b_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
    break;

   case 7:
    for (c2_i = 0; c2_i < 4; c2_i++) {
      c2_r.f1[c2_i] = c2_b_cv[c2_i];
    }

    for (c2_i1 = 0; c2_i1 < 8; c2_i1++) {
      c2_r.f2[c2_i1] = c2_b_cv1[c2_i1];
    }

    for (c2_i3 = 0; c2_i3 < 4; c2_i3++) {
      c2_r.f3[c2_i3] = c2_b_cv2[c2_i3];
    }

    c2_r.f4[0] = c2_b_obj->PositionNumber;
    c2_r.f4[1] = 2.0;
    c2_b_st.site = &c2_jc_emlrtRSI;
    c2_validateattributes(chartInstance, &c2_b_st, c2_r);
    for (c2_i6 = 0; c2_i6 < 4; c2_i6++) {
      c2_i8 = c2_i6 + 1;
      if ((c2_i8 < 1) || (c2_i8 > 1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 1, 1, &c2_k_emlrtBCI, &c2_st);
      }
    }

    c2_b_st.site = &c2_kc_emlrtRSI;
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv5, 10, 0U, 1, 0U, 2, 1, 52),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv5, 10, 0U, 1, 0U, 2, 1, 52),
                  false);
    sf_mex_call(&c2_b_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_d_y)));
    break;

   default:
    c2_d = c2_b_obj->PositionNumber;
    c2_b = (c2_d < 1.0);
    if (c2_b) {
      c2_i2 = -1;
    } else {
      if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
        emlrtIntegerCheckR2012b(c2_d, &c2_h_emlrtDCI, &c2_st);
      }

      c2_i4 = (int32_T)c2_d;
      if ((c2_i4 < 1) || (c2_i4 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 7, &c2_i_emlrtBCI, &c2_st);
      }

      c2_i2 = c2_i4 - 1;
    }

    c2_x_size[1] = c2_i2 + 1;
    c2_loop_ub = c2_i2;
    for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
      c2_x_data[c2_i5] = c2_b_obj->HomePositionInternal[c2_i5];
    }

    c2_b_st.site = &c2_lc_emlrtRSI;
    c2_nx = c2_x_size[1];
    c2_c_st.site = &c2_pc_emlrtRSI;
    c2_b_nx = c2_nx;
    c2_a = c2_b_nx;
    c2_emptyDimValue = (uint8_T)c2_a;
    if (c2_emptyDimValue > c2_b_nx) {
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv9, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv9, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c2_c_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_f_y)));
    }

    c2_sz[0] = c2_emptyDimValue;
    c2_n = 1;
    if (c2_x_size[1] > 1) {
      c2_n = c2_x_size[1];
    }

    c2_maxdimlen = muIntScalarMax_sint32(c2_nx, c2_n);
    if (c2_sz[0] > c2_maxdimlen) {
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv7, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      c2_h_y = NULL;
      sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv7, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c2_b_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_h_y)));
    }

    c2_varargin_1 = c2_sz[0];
    c2_b_varargin_1 = c2_varargin_1;
    c2_result = c2_b_varargin_1;
    if (c2_result != c2_nx) {
      c2_i_y = NULL;
      sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv8, 10, 0U, 1, 0U, 2, 1, 40),
                    false);
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv8, 10, 0U, 1, 0U, 2, 1, 40),
                    false);
      sf_mex_call(&c2_b_st, &c2_h_emlrtMCI, "error", 0U, 2U, 14, c2_i_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_j_y)));
    }

    c2_homepos_size[0] = c2_emptyDimValue;
    c2_d_loop_ub = c2_emptyDimValue - 1;
    for (c2_i15 = 0; c2_i15 <= c2_d_loop_ub; c2_i15++) {
      c2_homepos_data[c2_i15] = c2_x_data[c2_i15];
    }

    c2_b_homepos_size[0] = c2_homepos_size[0];
    c2_e_loop_ub = c2_homepos_size[0] - 1;
    for (c2_i16 = 0; c2_i16 <= c2_e_loop_ub; c2_i16++) {
      c2_b_homepos_data[c2_i16] = (c2_homepos_data[c2_i16] > 3.9269908169872414);
    }

    c2_b_st.site = &c2_mc_emlrtRSI;
    if (c2_any(chartInstance, &c2_b_st, c2_b_homepos_data, c2_b_homepos_size)) {
      c2_guard1 = true;
    } else {
      c2_c_homepos_size[0] = c2_homepos_size[0];
      c2_f_loop_ub = c2_homepos_size[0] - 1;
      for (c2_i17 = 0; c2_i17 <= c2_f_loop_ub; c2_i17++) {
        c2_c_homepos_data[c2_i17] = (c2_homepos_data[c2_i17] <
          -3.9269908169872414);
      }

      c2_b_st.site = &c2_mc_emlrtRSI;
      if (c2_any(chartInstance, &c2_b_st, c2_c_homepos_data, c2_c_homepos_size))
      {
        c2_guard1 = true;
      }
    }
    break;
  }

  if (c2_guard1) {
    c2_resetHome = true;
    c2_b_st.site = &c2_nc_emlrtRSI;
    c2_c_st.site = &c2_rc_emlrtRSI;
    c2_warning(chartInstance, &c2_c_st);
  }

  c2_d1 = c2_obj->PositionNumber;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i7 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_j_emlrtDCI, (emlrtConstCTX)c2_sp);
    }

    c2_i9 = (int32_T)c2_d1;
    if ((c2_i9 < 1) || (c2_i9 > 7)) {
      emlrtDynamicBoundsCheckR2012b(c2_i9, 1, 7, &c2_j_emlrtBCI, (emlrtConstCTX)
        c2_sp);
    }

    c2_i7 = c2_i9 - 1;
  }

  c2_tmp_size[0] = c2_i7 + 1;
  c2_b_loop_ub = c2_i7;
  for (c2_i10 = 0; c2_i10 <= c2_b_loop_ub; c2_i10++) {
    c2_tmp_data[c2_i10] = c2_i10;
  }

  c2_iv[0] = c2_tmp_size[0];
  c2_iv[1] = 2;
  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_iv1[c2_i11] = 1 + c2_i11;
  }

  emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_iv1[0], 2, &c2_f_emlrtECI,
    (void *)c2_sp);
  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_b_dv[c2_i12] = -3.9269908169872414 + 7.8539816339744828 * (real_T)c2_i12;
  }

  c2_iv2[0] = c2_tmp_size[0];
  for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
    c2_c_loop_ub = c2_iv2[0] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_c_loop_ub; c2_i14++) {
      c2_obj->PositionLimitsInternal[c2_tmp_data[c2_i14] + 7 * c2_i13] =
        c2_b_dv[c2_i14 + c2_iv2[0] * c2_i13];
    }
  }

  if (c2_resetHome) {
    c2_st.site = &c2_hc_emlrtRSI;
    c2_rigidBodyJoint_resetHomePosition(chartInstance, &c2_st, c2_obj);
  }
}

static void c2_validateattributes(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_9 c2_attributesMixed)
{
  static char_T c2_b_cv2[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'S', 'i', 'z', 'e' };

  static char_T c2_b_cv[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'S', 'i', 'z', 'e', 'A', 'r', 'r', 'a', 'y' };

  static char_T c2_b_cv1[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i',
    'g', 'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static char_T c2_b_cv3[14] = { 'P', 'o', 's', 'i', 't', 'i', 'o', 'n', 'L',
    'i', 'm', 'i', 't', 's' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_sz[2];
  real_T c2_b_k;
  real_T c2_b_x;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d_k;
  real_T c2_e_y;
  real_T c2_x;
  int32_T c2_c_k;
  int32_T c2_i;
  int32_T c2_k;
  boolean_T c2_b;
  boolean_T c2_b_p;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_oc_emlrtRSI;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_sz[c2_i] = c2_attributesMixed.f4[c2_i];
  }

  c2_p = true;
  for (c2_k = 0; c2_k < 2; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    if (c2_p) {
      if (c2_sz[(int32_T)c2_b_k - 1] != c2_sz[(int32_T)c2_b_k - 1]) {
        c2_c_p = true;
      } else {
        c2_x = c2_sz[(int32_T)c2_b_k - 1];
        c2_b = muDoubleScalarIsInf(c2_x);
        if ((!c2_b) && (c2_sz[(int32_T)c2_b_k - 1] >= 0.0)) {
          c2_b_x = c2_sz[(int32_T)c2_b_k - 1];
          c2_c_x = c2_b_x;
          c2_e_y = c2_c_x;
          c2_e_y = muDoubleScalarFloor(c2_e_y);
          if (c2_sz[(int32_T)c2_b_k - 1] == c2_e_y) {
            c2_c_p = true;
          } else {
            c2_c_p = false;
          }
        } else {
          c2_c_p = false;
        }
      }
    } else {
      c2_c_p = false;
    }

    c2_p = c2_c_p;
  }

  if (!c2_p) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 38),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 38),
                  false);
    sf_mex_call(&c2_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_b_p = true;
  for (c2_c_k = 0; c2_c_k < 2; c2_c_k++) {
    c2_d_k = (real_T)c2_c_k + 1.0;
    if (c2_b_p) {
      if (c2_sz[(int32_T)c2_d_k - 1] != c2_sz[(int32_T)c2_d_k - 1]) {
        c2_d_p = true;
      } else {
        c2_d = (real_T)(int32_T)c2_d_k;
        if (c2_sz[(int32_T)c2_d_k - 1] == c2_d) {
          c2_d_p = true;
        } else {
          c2_d_p = false;
        }
      }
    } else {
      c2_d_p = false;
    }

    c2_b_p = c2_d_p;
  }

  if (!c2_b_p) {
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 35),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1, 45),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1, 0U, 2, 1, 14),
                  false);
    sf_mex_call(&c2_st, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 2U, 14, c2_d_y, 14, c2_f_y)));
  }
}

static boolean_T c2_any(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, boolean_T c2_x_data[], int32_T c2_x_size[1])
{
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_a;
  real_T c2_vlen;
  int32_T c2_b_a;
  int32_T c2_b_b;
  int32_T c2_c;
  int32_T c2_c_a;
  int32_T c2_i2;
  int32_T c2_ix;
  int32_T c2_vspread;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_exitg1;
  boolean_T c2_y;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_qc_emlrtRSI;
  if ((c2_x_size[0] == 1) || (c2_x_size[0] != 1)) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv10, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv10, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    sf_mex_call(&c2_st, &c2_i_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_y = false;
  c2_vlen = (real_T)c2_x_size[0];
  c2_a = c2_vlen;
  c2_c = (int32_T)c2_a;
  c2_b_a = c2_c - 1;
  c2_vspread = c2_b_a;
  c2_b_b = c2_vspread;
  c2_i2 = c2_b_b;
  c2_c_a = c2_i2 + 1;
  c2_i2 = c2_c_a;
  c2_ix = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_ix + 1 <= c2_i2)) {
    if (!c2_x_data[c2_ix]) {
      c2_b1 = true;
    } else {
      c2_b1 = false;
    }

    if (!c2_b1) {
      c2_y = true;
      c2_exitg1 = true;
    } else {
      c2_ix++;
    }
  }

  return c2_y;
}

static void c2_warning(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp)
{
  static char_T c2_msgID[47] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
    'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n',
    't', ':', 'R', 'e', 's', 'e', 't', 't', 'i', 'n', 'g', 'H', 'o', 'm', 'e',
    'P', 'o', 's', 'i', 't', 'i', 'o', 'n' };

  static char_T c2_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c2_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_msgID, 10, 0U, 1, 0U, 2, 1, 47),
                false);
  c2_st.site = &c2_sc_emlrtRSI;
  c2_b_feval(chartInstance, &c2_st, c2_y, c2_feval(chartInstance, &c2_st, c2_b_y,
              c2_c_y));
}

static void c2_rigidBodyJoint_resetHomePosition(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj)
{
  emlrtStack c2_st;
  real_T c2_b_obj_data[7];
  real_T c2_b_ub_data[7];
  real_T c2_lb_data[7];
  real_T c2_obj_data[7];
  real_T c2_ub_data[7];
  real_T c2_b_dv[2];
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  int32_T c2_tmp_data[7];
  int32_T c2_tmp_size[2];
  int32_T c2_b_b_size[1];
  int32_T c2_b_obj_size[1];
  int32_T c2_b_size[1];
  int32_T c2_b_ub_size[1];
  int32_T c2_c_b_size[1];
  int32_T c2_d_b_size[1];
  int32_T c2_lb_size[1];
  int32_T c2_obj_size[1];
  int32_T c2_ub_size[1];
  int32_T c2_ab_loop_ub;
  int32_T c2_b_loop_ub;
  int32_T c2_bb_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_cb_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_db_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_eb_loop_ub;
  int32_T c2_f_loop_ub;
  int32_T c2_fb_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_gb_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_hb_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_ib_loop_ub;
  int32_T c2_j_loop_ub;
  int32_T c2_jb_loop_ub;
  int32_T c2_k_loop_ub;
  int32_T c2_kb_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_lb_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_m_loop_ub;
  int32_T c2_mb_loop_ub;
  int32_T c2_n_loop_ub;
  int32_T c2_nb_loop_ub;
  int32_T c2_o_loop_ub;
  int32_T c2_ob_loop_ub;
  int32_T c2_p_loop_ub;
  int32_T c2_pb_loop_ub;
  int32_T c2_q_loop_ub;
  int32_T c2_qb_loop_ub;
  int32_T c2_r_loop_ub;
  int32_T c2_rb_loop_ub;
  int32_T c2_s_loop_ub;
  int32_T c2_t_loop_ub;
  int32_T c2_u_loop_ub;
  int32_T c2_v_loop_ub;
  int32_T c2_w_loop_ub;
  int32_T c2_x_loop_ub;
  int32_T c2_y_loop_ub;
  boolean_T c2_b_b_data[7];
  boolean_T c2_b_data[7];
  boolean_T c2_c_b_data[7];
  boolean_T c2_d_b_data[7];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_guard1;
  boolean_T c2_guard2;
  boolean_T c2_guard3;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_d = c2_obj->PositionNumber;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_k_emlrtDCI, (emlrtConstCTX)c2_sp);
    }

    c2_i1 = (int32_T)c2_d;
    if ((c2_i1 < 1) || (c2_i1 > 7)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 7, &c2_l_emlrtBCI, (emlrtConstCTX)
        c2_sp);
    }

    c2_i = c2_i1 - 1;
  }

  c2_obj_size[0] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_obj_data[c2_i2] = c2_obj->PositionLimitsInternal[c2_i2 + 7];
  }

  c2_ub_size[0] = c2_obj_size[0];
  c2_b_loop_ub = c2_obj_size[0] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_ub_data[c2_i3] = c2_obj_data[c2_i3];
  }

  c2_d1 = c2_obj->PositionNumber;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i4 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_l_emlrtDCI, (emlrtConstCTX)c2_sp);
    }

    c2_i5 = (int32_T)c2_d1;
    if ((c2_i5 < 1) || (c2_i5 > 7)) {
      emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 7, &c2_m_emlrtBCI, (emlrtConstCTX)
        c2_sp);
    }

    c2_i4 = c2_i5 - 1;
  }

  c2_b_obj_size[0] = c2_i4 + 1;
  c2_c_loop_ub = c2_i4;
  for (c2_i6 = 0; c2_i6 <= c2_c_loop_ub; c2_i6++) {
    c2_b_obj_data[c2_i6] = c2_obj->PositionLimitsInternal[c2_i6];
  }

  c2_lb_size[0] = c2_b_obj_size[0];
  c2_d_loop_ub = c2_b_obj_size[0] - 1;
  for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
    c2_lb_data[c2_i7] = c2_b_obj_data[c2_i7];
  }

  if (c2_obj->PositionNumber == 1.0) {
    c2_b_size[0] = c2_lb_size[0];
    c2_e_loop_ub = c2_lb_size[0] - 1;
    for (c2_i8 = 0; c2_i8 <= c2_e_loop_ub; c2_i8++) {
      c2_b_data[c2_i8] = muDoubleScalarIsInf(c2_lb_data[c2_i8]);
    }

    c2_f_loop_ub = c2_b_size[0] - 1;
    for (c2_i9 = 0; c2_i9 <= c2_f_loop_ub; c2_i9++) {
      c2_b_data[c2_i9] = !c2_b_data[c2_i9];
    }

    c2_b_b_size[0] = c2_lb_size[0];
    c2_g_loop_ub = c2_lb_size[0] - 1;
    for (c2_i10 = 0; c2_i10 <= c2_g_loop_ub; c2_i10++) {
      c2_b_b_data[c2_i10] = muDoubleScalarIsNaN(c2_lb_data[c2_i10]);
    }

    c2_h_loop_ub = c2_b_b_size[0] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_h_loop_ub; c2_i11++) {
      c2_b_b_data[c2_i11] = !c2_b_b_data[c2_i11];
    }

    c2_i_loop_ub = c2_b_size[0] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_i_loop_ub; c2_i12++) {
      c2_b_data[c2_i12] = (c2_b_data[c2_i12] && c2_b_b_data[c2_i12]);
    }

    c2_st.site = &c2_tc_emlrtRSI;
    c2_guard1 = false;
    c2_guard2 = false;
    c2_guard3 = false;
    if (c2_all(chartInstance, &c2_st, c2_b_data, c2_b_size)) {
      c2_b_size[0] = c2_ub_size[0];
      c2_j_loop_ub = c2_ub_size[0] - 1;
      for (c2_i13 = 0; c2_i13 <= c2_j_loop_ub; c2_i13++) {
        c2_b_data[c2_i13] = muDoubleScalarIsInf(c2_ub_data[c2_i13]);
      }

      c2_l_loop_ub = c2_b_size[0] - 1;
      for (c2_i15 = 0; c2_i15 <= c2_l_loop_ub; c2_i15++) {
        c2_b_data[c2_i15] = !c2_b_data[c2_i15];
      }

      c2_b_b_size[0] = c2_ub_size[0];
      c2_o_loop_ub = c2_ub_size[0] - 1;
      for (c2_i18 = 0; c2_i18 <= c2_o_loop_ub; c2_i18++) {
        c2_b_b_data[c2_i18] = muDoubleScalarIsNaN(c2_ub_data[c2_i18]);
      }

      c2_s_loop_ub = c2_b_b_size[0] - 1;
      for (c2_i22 = 0; c2_i22 <= c2_s_loop_ub; c2_i22++) {
        c2_b_b_data[c2_i22] = !c2_b_b_data[c2_i22];
      }

      c2_v_loop_ub = c2_b_size[0] - 1;
      for (c2_i26 = 0; c2_i26 <= c2_v_loop_ub; c2_i26++) {
        c2_b_data[c2_i26] = (c2_b_data[c2_i26] && c2_b_b_data[c2_i26]);
      }

      c2_st.site = &c2_tc_emlrtRSI;
      if (c2_all(chartInstance, &c2_st, c2_b_data, c2_b_size)) {
        if ((c2_lb_size[0] != c2_ub_size[0]) && ((c2_lb_size[0] != 1) &&
             (c2_ub_size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(c2_lb_size[0], c2_ub_size[0],
            &c2_g_emlrtECI, (emlrtConstCTX)c2_sp);
        }

        if (c2_lb_size[0] == c2_ub_size[0]) {
          c2_cb_loop_ub = c2_lb_size[0] - 1;
          for (c2_i32 = 0; c2_i32 <= c2_cb_loop_ub; c2_i32++) {
            c2_lb_data[c2_i32] += c2_ub_data[c2_i32];
          }
        } else {
          c2_plus(chartInstance, c2_lb_data, c2_lb_size, c2_ub_data, c2_ub_size);
        }

        c2_ub_size[0] = c2_lb_size[0];
        c2_gb_loop_ub = c2_lb_size[0] - 1;
        for (c2_i36 = 0; c2_i36 <= c2_gb_loop_ub; c2_i36++) {
          c2_ub_data[c2_i36] = 0.5 * c2_lb_data[c2_i36];
        }
      } else {
        c2_guard3 = true;
      }
    } else {
      c2_guard3 = true;
    }

    if (c2_guard3) {
      c2_b_size[0] = c2_lb_size[0];
      c2_k_loop_ub = c2_lb_size[0] - 1;
      for (c2_i14 = 0; c2_i14 <= c2_k_loop_ub; c2_i14++) {
        c2_b_data[c2_i14] = muDoubleScalarIsInf(c2_lb_data[c2_i14]);
      }

      c2_n_loop_ub = c2_b_size[0] - 1;
      for (c2_i17 = 0; c2_i17 <= c2_n_loop_ub; c2_i17++) {
        c2_b_data[c2_i17] = !c2_b_data[c2_i17];
      }

      c2_b_b_size[0] = c2_lb_size[0];
      c2_r_loop_ub = c2_lb_size[0] - 1;
      for (c2_i21 = 0; c2_i21 <= c2_r_loop_ub; c2_i21++) {
        c2_b_b_data[c2_i21] = muDoubleScalarIsNaN(c2_lb_data[c2_i21]);
      }

      c2_u_loop_ub = c2_b_b_size[0] - 1;
      for (c2_i25 = 0; c2_i25 <= c2_u_loop_ub; c2_i25++) {
        c2_b_b_data[c2_i25] = !c2_b_b_data[c2_i25];
      }

      c2_y_loop_ub = c2_b_size[0] - 1;
      for (c2_i29 = 0; c2_i29 <= c2_y_loop_ub; c2_i29++) {
        c2_b_data[c2_i29] = (c2_b_data[c2_i29] && c2_b_b_data[c2_i29]);
      }

      c2_st.site = &c2_uc_emlrtRSI;
      if (c2_all(chartInstance, &c2_st, c2_b_data, c2_b_size)) {
        c2_b_size[0] = c2_ub_size[0];
        c2_fb_loop_ub = c2_ub_size[0] - 1;
        for (c2_i35 = 0; c2_i35 <= c2_fb_loop_ub; c2_i35++) {
          c2_b_data[c2_i35] = muDoubleScalarIsInf(c2_ub_data[c2_i35]);
        }

        c2_hb_loop_ub = c2_b_size[0] - 1;
        for (c2_i37 = 0; c2_i37 <= c2_hb_loop_ub; c2_i37++) {
          c2_b_data[c2_i37] = !c2_b_data[c2_i37];
        }

        c2_b_b_size[0] = c2_ub_size[0];
        c2_jb_loop_ub = c2_ub_size[0] - 1;
        for (c2_i39 = 0; c2_i39 <= c2_jb_loop_ub; c2_i39++) {
          c2_b_b_data[c2_i39] = muDoubleScalarIsNaN(c2_ub_data[c2_i39]);
        }

        c2_lb_loop_ub = c2_b_b_size[0] - 1;
        for (c2_i41 = 0; c2_i41 <= c2_lb_loop_ub; c2_i41++) {
          c2_b_b_data[c2_i41] = !c2_b_b_data[c2_i41];
        }

        c2_nb_loop_ub = c2_b_size[0] - 1;
        for (c2_i43 = 0; c2_i43 <= c2_nb_loop_ub; c2_i43++) {
          c2_b_data[c2_i43] = (c2_b_data[c2_i43] && c2_b_b_data[c2_i43]);
        }

        c2_d_b_size[0] = c2_b_size[0];
        c2_pb_loop_ub = c2_b_size[0] - 1;
        for (c2_i45 = 0; c2_i45 <= c2_pb_loop_ub; c2_i45++) {
          c2_d_b_data[c2_i45] = !c2_b_data[c2_i45];
        }

        c2_st.site = &c2_uc_emlrtRSI;
        if (c2_any(chartInstance, &c2_st, c2_d_b_data, c2_d_b_size)) {
          c2_ub_size[0] = c2_lb_size[0];
          c2_rb_loop_ub = c2_lb_size[0] - 1;
          for (c2_i47 = 0; c2_i47 <= c2_rb_loop_ub; c2_i47++) {
            c2_ub_data[c2_i47] = c2_lb_data[c2_i47];
          }
        } else {
          c2_guard2 = true;
        }
      } else {
        c2_guard2 = true;
      }
    }

    if (c2_guard2) {
      c2_b_size[0] = c2_lb_size[0];
      c2_m_loop_ub = c2_lb_size[0] - 1;
      for (c2_i16 = 0; c2_i16 <= c2_m_loop_ub; c2_i16++) {
        c2_b_data[c2_i16] = muDoubleScalarIsInf(c2_lb_data[c2_i16]);
      }

      c2_q_loop_ub = c2_b_size[0] - 1;
      for (c2_i19 = 0; c2_i19 <= c2_q_loop_ub; c2_i19++) {
        c2_b_data[c2_i19] = !c2_b_data[c2_i19];
      }

      c2_b_b_size[0] = c2_lb_size[0];
      c2_t_loop_ub = c2_lb_size[0] - 1;
      for (c2_i24 = 0; c2_i24 <= c2_t_loop_ub; c2_i24++) {
        c2_b_b_data[c2_i24] = muDoubleScalarIsNaN(c2_lb_data[c2_i24]);
      }

      c2_x_loop_ub = c2_b_b_size[0] - 1;
      for (c2_i28 = 0; c2_i28 <= c2_x_loop_ub; c2_i28++) {
        c2_b_b_data[c2_i28] = !c2_b_b_data[c2_i28];
      }

      c2_ab_loop_ub = c2_b_size[0] - 1;
      for (c2_i30 = 0; c2_i30 <= c2_ab_loop_ub; c2_i30++) {
        c2_b_data[c2_i30] = (c2_b_data[c2_i30] && c2_b_b_data[c2_i30]);
      }

      c2_c_b_size[0] = c2_b_size[0];
      c2_eb_loop_ub = c2_b_size[0] - 1;
      for (c2_i34 = 0; c2_i34 <= c2_eb_loop_ub; c2_i34++) {
        c2_c_b_data[c2_i34] = !c2_b_data[c2_i34];
      }

      c2_st.site = &c2_vc_emlrtRSI;
      if (c2_any(chartInstance, &c2_st, c2_c_b_data, c2_c_b_size)) {
        c2_b_size[0] = c2_ub_size[0];
        c2_ib_loop_ub = c2_ub_size[0] - 1;
        for (c2_i38 = 0; c2_i38 <= c2_ib_loop_ub; c2_i38++) {
          c2_b_data[c2_i38] = muDoubleScalarIsInf(c2_ub_data[c2_i38]);
        }

        c2_kb_loop_ub = c2_b_size[0] - 1;
        for (c2_i40 = 0; c2_i40 <= c2_kb_loop_ub; c2_i40++) {
          c2_b_data[c2_i40] = !c2_b_data[c2_i40];
        }

        c2_b_b_size[0] = c2_ub_size[0];
        c2_mb_loop_ub = c2_ub_size[0] - 1;
        for (c2_i42 = 0; c2_i42 <= c2_mb_loop_ub; c2_i42++) {
          c2_b_b_data[c2_i42] = muDoubleScalarIsNaN(c2_ub_data[c2_i42]);
        }

        c2_ob_loop_ub = c2_b_b_size[0] - 1;
        for (c2_i44 = 0; c2_i44 <= c2_ob_loop_ub; c2_i44++) {
          c2_b_b_data[c2_i44] = !c2_b_b_data[c2_i44];
        }

        c2_qb_loop_ub = c2_b_size[0] - 1;
        for (c2_i46 = 0; c2_i46 <= c2_qb_loop_ub; c2_i46++) {
          c2_b_data[c2_i46] = (c2_b_data[c2_i46] && c2_b_b_data[c2_i46]);
        }

        c2_st.site = &c2_vc_emlrtRSI;
        if (c2_all(chartInstance, &c2_st, c2_b_data, c2_b_size)) {
        } else {
          c2_guard1 = true;
        }
      } else {
        c2_guard1 = true;
      }
    }

    if (c2_guard1) {
      c2_b_dv[0] = (real_T)c2_lb_size[0];
      c2_ub_size[0] = (int32_T)c2_b_dv[0];
      c2_p_loop_ub = (int32_T)c2_b_dv[0] - 1;
      if (c2_p_loop_ub >= 0) {
        memset(&c2_ub_data[0], 0, (uint32_T)(c2_p_loop_ub + 1) * sizeof(real_T));
      }
    }

    c2_d2 = c2_obj->PositionNumber;
    c2_b2 = (c2_d2 < 1.0);
    if (c2_b2) {
      c2_i20 = 0;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_m_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i23 = (int32_T)c2_d2;
      if ((c2_i23 < 1) || (c2_i23 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i23, 1, 7, &c2_n_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i20 = c2_i23;
    }

    if (c2_i20 != c2_ub_size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i20, c2_ub_size[0], &c2_h_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_tmp_size[1] = c2_i20;
    c2_w_loop_ub = c2_i20 - 1;
    for (c2_i27 = 0; c2_i27 <= c2_w_loop_ub; c2_i27++) {
      c2_tmp_data[c2_i27] = c2_i27;
    }

    c2_b_ub_size[0] = c2_tmp_size[1];
    c2_bb_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i31 = 0; c2_i31 <= c2_bb_loop_ub; c2_i31++) {
      c2_b_ub_data[c2_i31] = c2_ub_data[c2_i31];
    }

    c2_db_loop_ub = c2_b_ub_size[0] - 1;
    for (c2_i33 = 0; c2_i33 <= c2_db_loop_ub; c2_i33++) {
      c2_obj->HomePositionInternal[c2_tmp_data[c2_i33]] = c2_b_ub_data[c2_i33];
    }
  }
}

static boolean_T c2_all(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, boolean_T c2_x_data[], int32_T c2_x_size[1])
{
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_a;
  real_T c2_vlen;
  int32_T c2_b_a;
  int32_T c2_b_b;
  int32_T c2_c;
  int32_T c2_c_a;
  int32_T c2_i2;
  int32_T c2_ix;
  int32_T c2_vspread;
  boolean_T c2_b;
  boolean_T c2_exitg1;
  boolean_T c2_y;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_wc_emlrtRSI;
  if ((c2_x_size[0] == 1) || (c2_x_size[0] != 1)) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv10, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv10, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    sf_mex_call(&c2_st, &c2_i_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_y = true;
  c2_vlen = (real_T)c2_x_size[0];
  c2_a = c2_vlen;
  c2_c = (int32_T)c2_a;
  c2_b_a = c2_c - 1;
  c2_vspread = c2_b_a;
  c2_b_b = c2_vspread;
  c2_i2 = c2_b_b;
  c2_c_a = c2_i2 + 1;
  c2_i2 = c2_c_a;
  c2_ix = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_ix + 1 <= c2_i2)) {
    if (!c2_x_data[c2_ix]) {
      c2_y = false;
      c2_exitg1 = true;
    } else {
      c2_ix++;
    }
  }

  return c2_y;
}

static void c2_b_rigidBodyJoint_set_PositionLimits(SFc2_Modele_3DInstanceStruct *
  chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj)
{
  static char_T c2_b_cv1[8] = { 'n', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c2_b_cv[4] = { 'r', 'e', 'a', 'l' };

  static char_T c2_b_cv2[4] = { 's', 'i', 'z', 'e' };

  c2_cell_9 c2_r;
  c2_rigidBodyJoint *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_homepos_data[7];
  real_T c2_x_data[7];
  real_T c2_b_dv[2];
  real_T c2_d;
  real_T c2_d1;
  int32_T c2_tmp_data[7];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_sz[2];
  int32_T c2_x_size[2];
  int32_T c2_b_homepos_size[1];
  int32_T c2_c_homepos_size[1];
  int32_T c2_homepos_size[1];
  int32_T c2_tmp_size[1];
  int32_T c2_a;
  int32_T c2_b_loop_ub;
  int32_T c2_b_nx;
  int32_T c2_b_varargin_1;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_emptyDimValue;
  int32_T c2_f_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_loop_ub;
  int32_T c2_maxdimlen;
  int32_T c2_n;
  int32_T c2_nx;
  int32_T c2_result;
  int32_T c2_varargin_1;
  boolean_T c2_b_homepos_data[7];
  boolean_T c2_c_homepos_data[7];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_guard1;
  boolean_T c2_resetHome;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_gc_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_resetHome = false;
  if (c2_b_obj->PositionNumber != (real_T)(int32_T)muDoubleScalarFloor
      (c2_b_obj->PositionNumber)) {
    emlrtIntegerCheckR2012b(c2_b_obj->PositionNumber, &c2_i_emlrtDCI, &c2_st);
  }

  c2_guard1 = false;
  switch ((int32_T)c2_b_obj->PositionNumber) {
   case 0:
    c2_b_st.site = &c2_ic_emlrtRSI;
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv6, 10, 0U, 1, 0U, 2, 1, 61),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv6, 10, 0U, 1, 0U, 2, 1, 61),
                  false);
    sf_mex_call(&c2_b_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
    break;

   case 7:
    for (c2_i = 0; c2_i < 4; c2_i++) {
      c2_r.f1[c2_i] = c2_b_cv[c2_i];
    }

    for (c2_i1 = 0; c2_i1 < 8; c2_i1++) {
      c2_r.f2[c2_i1] = c2_b_cv1[c2_i1];
    }

    for (c2_i3 = 0; c2_i3 < 4; c2_i3++) {
      c2_r.f3[c2_i3] = c2_b_cv2[c2_i3];
    }

    c2_r.f4[0] = c2_b_obj->PositionNumber;
    c2_r.f4[1] = 2.0;
    c2_b_st.site = &c2_jc_emlrtRSI;
    c2_validateattributes(chartInstance, &c2_b_st, c2_r);
    for (c2_i6 = 0; c2_i6 < 4; c2_i6++) {
      c2_i8 = c2_i6 + 1;
      if ((c2_i8 < 1) || (c2_i8 > 1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 1, 1, &c2_k_emlrtBCI, &c2_st);
      }
    }

    c2_b_st.site = &c2_kc_emlrtRSI;
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv5, 10, 0U, 1, 0U, 2, 1, 52),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv5, 10, 0U, 1, 0U, 2, 1, 52),
                  false);
    sf_mex_call(&c2_b_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_d_y)));
    break;

   default:
    c2_d = c2_b_obj->PositionNumber;
    c2_b = (c2_d < 1.0);
    if (c2_b) {
      c2_i2 = -1;
    } else {
      if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
        emlrtIntegerCheckR2012b(c2_d, &c2_h_emlrtDCI, &c2_st);
      }

      c2_i4 = (int32_T)c2_d;
      if ((c2_i4 < 1) || (c2_i4 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 7, &c2_i_emlrtBCI, &c2_st);
      }

      c2_i2 = c2_i4 - 1;
    }

    c2_x_size[1] = c2_i2 + 1;
    c2_loop_ub = c2_i2;
    for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
      c2_x_data[c2_i5] = c2_b_obj->HomePositionInternal[c2_i5];
    }

    c2_b_st.site = &c2_lc_emlrtRSI;
    c2_nx = c2_x_size[1];
    c2_c_st.site = &c2_pc_emlrtRSI;
    c2_b_nx = c2_nx;
    c2_a = c2_b_nx;
    c2_emptyDimValue = (uint8_T)c2_a;
    if (c2_emptyDimValue > c2_b_nx) {
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv9, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv9, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c2_c_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_f_y)));
    }

    c2_sz[0] = c2_emptyDimValue;
    c2_n = 1;
    if (c2_x_size[1] > 1) {
      c2_n = c2_x_size[1];
    }

    c2_maxdimlen = muIntScalarMax_sint32(c2_nx, c2_n);
    if (c2_sz[0] > c2_maxdimlen) {
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv7, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      c2_h_y = NULL;
      sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv7, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c2_b_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_h_y)));
    }

    c2_varargin_1 = c2_sz[0];
    c2_b_varargin_1 = c2_varargin_1;
    c2_result = c2_b_varargin_1;
    if (c2_result != c2_nx) {
      c2_i_y = NULL;
      sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv8, 10, 0U, 1, 0U, 2, 1, 40),
                    false);
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv8, 10, 0U, 1, 0U, 2, 1, 40),
                    false);
      sf_mex_call(&c2_b_st, &c2_h_emlrtMCI, "error", 0U, 2U, 14, c2_i_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_j_y)));
    }

    c2_homepos_size[0] = c2_emptyDimValue;
    c2_d_loop_ub = c2_emptyDimValue - 1;
    for (c2_i15 = 0; c2_i15 <= c2_d_loop_ub; c2_i15++) {
      c2_homepos_data[c2_i15] = c2_x_data[c2_i15];
    }

    c2_b_homepos_size[0] = c2_homepos_size[0];
    c2_e_loop_ub = c2_homepos_size[0] - 1;
    for (c2_i16 = 0; c2_i16 <= c2_e_loop_ub; c2_i16++) {
      c2_b_homepos_data[c2_i16] = (c2_homepos_data[c2_i16] > 1.684242728174528);
    }

    c2_b_st.site = &c2_mc_emlrtRSI;
    if (c2_any(chartInstance, &c2_b_st, c2_b_homepos_data, c2_b_homepos_size)) {
      c2_guard1 = true;
    } else {
      c2_c_homepos_size[0] = c2_homepos_size[0];
      c2_f_loop_ub = c2_homepos_size[0] - 1;
      for (c2_i17 = 0; c2_i17 <= c2_f_loop_ub; c2_i17++) {
        c2_c_homepos_data[c2_i17] = (c2_homepos_data[c2_i17] <
          -0.89884456477707975);
      }

      c2_b_st.site = &c2_mc_emlrtRSI;
      if (c2_any(chartInstance, &c2_b_st, c2_c_homepos_data, c2_c_homepos_size))
      {
        c2_guard1 = true;
      }
    }
    break;
  }

  if (c2_guard1) {
    c2_resetHome = true;
    c2_b_st.site = &c2_nc_emlrtRSI;
    c2_c_st.site = &c2_rc_emlrtRSI;
    c2_warning(chartInstance, &c2_c_st);
  }

  c2_d1 = c2_obj->PositionNumber;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i7 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_j_emlrtDCI, (emlrtConstCTX)c2_sp);
    }

    c2_i9 = (int32_T)c2_d1;
    if ((c2_i9 < 1) || (c2_i9 > 7)) {
      emlrtDynamicBoundsCheckR2012b(c2_i9, 1, 7, &c2_j_emlrtBCI, (emlrtConstCTX)
        c2_sp);
    }

    c2_i7 = c2_i9 - 1;
  }

  c2_tmp_size[0] = c2_i7 + 1;
  c2_b_loop_ub = c2_i7;
  for (c2_i10 = 0; c2_i10 <= c2_b_loop_ub; c2_i10++) {
    c2_tmp_data[c2_i10] = c2_i10;
  }

  c2_iv[0] = c2_tmp_size[0];
  c2_iv[1] = 2;
  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_iv1[c2_i11] = 1 + c2_i11;
  }

  emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_iv1[0], 2, &c2_f_emlrtECI,
    (void *)c2_sp);
  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_b_dv[c2_i12] = -0.89884456477707975 + 2.5830872929516078 * (real_T)c2_i12;
  }

  c2_iv2[0] = c2_tmp_size[0];
  for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
    c2_c_loop_ub = c2_iv2[0] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_c_loop_ub; c2_i14++) {
      c2_obj->PositionLimitsInternal[c2_tmp_data[c2_i14] + 7 * c2_i13] =
        c2_b_dv[c2_i14 + c2_iv2[0] * c2_i13];
    }
  }

  if (c2_resetHome) {
    c2_st.site = &c2_hc_emlrtRSI;
    c2_rigidBodyJoint_resetHomePosition(chartInstance, &c2_st, c2_obj);
  }
}

static void c2_rigidBody_set_Joint(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_rigidBody *c2_obj, c2_rigidBodyJoint *c2_value,
  c2_rigidBodyJoint *c2_iobj_0)
{
  static char_T c2_b_cv[53] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'B', 'o', 'd', 'y', 'A', 'l', 'r', 'e', 'a', 'd',
    'y', 'A', 'd', 'd', 'e', 'd', 'T', 'o', 'R', 'o', 'b', 'o', 't' };

  static char_T c2_b_cv3[12] = { 'r', 'e', 'p', 'l', 'a', 'c', 'e', 'J', 'o',
    'i', 'n', 't' };

  static char_T c2_b_cv1[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv2[5] = { 'J', 'o', 'i', 'n', 't' };

  c2_rigidBodyJoint *c2_b_iobj_0;
  c2_rigidBodyJoint *c2_jnt;
  c2_robotics_manip_internal_RigidBody *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_y = NULL;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_xc_emlrtRSI;
  c2_b_obj = c2_obj->BodyInternal;
  c2_jnt = c2_value;
  c2_b_iobj_0 = c2_iobj_0;
  if (c2_b_obj->Index == 0.0) {
    c2_b_st.site = &c2_yc_emlrtRSI;
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_b_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_e_y)));
  }

  if (c2_b_obj->Index > 0.0) {
    c2_b_st.site = &c2_ad_emlrtRSI;
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 53),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 53),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1, 0U, 2, 1, 12),
                  false);
    sf_mex_call(&c2_b_st, &c2_l_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 3U, 14, c2_d_y, 14, c2_f_y, 14, c2_g_y)));
  }

  c2_b_st.site = &c2_bd_emlrtRSI;
  c2_b_obj->JointInternal = c2_rigidBodyJoint_copy(chartInstance, &c2_b_st,
    c2_jnt, c2_b_iobj_0);
}

static c2_rigidBodyJoint *c2_rigidBodyJoint_copy(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj,
  c2_rigidBodyJoint *c2_iobj_0)
{
  static char_T c2_b_cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv[4] = { 'N', 'a', 'm', 'e' };

  c2_rigidBodyJoint *c2_b_iobj_0;
  c2_rigidBodyJoint *c2_b_obj;
  c2_rigidBodyJoint *c2_c_obj;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_f_obj;
  c2_rigidBodyJoint *c2_g_obj;
  c2_rigidBodyJoint *c2_k_obj;
  c2_rigidBodyJoint *c2_l_obj;
  c2_rigidBodyJoint *c2_m_obj;
  c2_rigidBodyJoint *c2_newjoint;
  c2_rigidBodyJoint *c2_r;
  c2_robotics_manip_internal_CharacterVector c2_d_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_msubspace_data[36];
  real_T c2_n_obj[16];
  real_T c2_o_obj[16];
  real_T c2_h_obj[14];
  real_T c2_i_obj[7];
  real_T c2_j_obj[3];
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  int32_T c2_b_jtype_size[2];
  int32_T c2_c_jtype_size[2];
  int32_T c2_jname_size[2];
  int32_T c2_jtype_size[2];
  int32_T c2_msubspace_size[2];
  int32_T c2_varargin_1_size[2];
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_varargin_1_data[204];
  char_T c2_jname_data[200];
  char_T c2_jtype_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_bool;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_cd_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_b_iobj_0 = c2_iobj_0;
  c2_b_st.site = &c2_dd_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_c_st.site = &c2_gb_emlrtRSI;
  c2_d_obj = c2_c_obj->TypeInternal;
  c2_d = c2_d_obj.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i1 = (int32_T)c2_d;
    if ((c2_i1 < 1) || (c2_i1 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i = c2_i1 - 1;
  }

  c2_jtype_size[0] = 1;
  c2_jtype_size[1] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_jtype_data[c2_i2] = c2_d_obj.Vector[c2_i2];
  }

  c2_b_st.site = &c2_ed_emlrtRSI;
  c2_e_obj = c2_b_obj;
  c2_c_st.site = &c2_jd_emlrtRSI;
  c2_d_obj = c2_e_obj->NameInternal;
  c2_d1 = c2_d_obj.Length;
  c2_b1 = (c2_d1 < 1.0);
  if (c2_b1) {
    c2_i3 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i4 = (int32_T)c2_d1;
    if ((c2_i4 < 1) || (c2_i4 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i3 = c2_i4 - 1;
  }

  c2_jname_size[0] = 1;
  c2_jname_size[1] = c2_i3 + 1;
  c2_b_loop_ub = c2_i3;
  for (c2_i5 = 0; c2_i5 <= c2_b_loop_ub; c2_i5++) {
    c2_jname_data[c2_i5] = c2_d_obj.Vector[c2_i5];
  }

  c2_b_st.site = &c2_fd_emlrtRSI;
  for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
    c2_b_jtype_size[c2_i6] = c2_jtype_size[c2_i6];
  }

  c2_newjoint = c2_e_rigidBodyJoint_rigidBodyJoint(chartInstance, &c2_b_st,
    c2_b_iobj_0, c2_jname_data, c2_jname_size, c2_jtype_data, c2_b_jtype_size);
  c2_b_st.site = &c2_gd_emlrtRSI;
  c2_f_obj = c2_b_obj;
  c2_c_st.site = &c2_jd_emlrtRSI;
  c2_d_obj = c2_f_obj->NameInternal;
  c2_d2 = c2_d_obj.Length;
  c2_b2 = (c2_d2 < 1.0);
  if (c2_b2) {
    c2_i7 = -1;
  } else {
    if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
      emlrtIntegerCheckR2012b(c2_d2, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i8 = (int32_T)c2_d2;
    if ((c2_i8 < 1) || (c2_i8 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i8, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i7 = c2_i8 - 1;
  }

  c2_jtype_size[1] = c2_i7 + 1;
  c2_b3 = (c2_jtype_size[1] == 0);
  if (!c2_b3) {
    c2_b_st.site = &c2_hd_emlrtRSI;
    c2_g_obj = c2_b_obj;
    c2_c_st.site = &c2_jd_emlrtRSI;
    c2_d_obj = c2_g_obj->NameInternal;
    c2_d3 = c2_d_obj.Length;
    c2_b4 = (c2_d3 < 1.0);
    if (c2_b4) {
      c2_i13 = -1;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_c_emlrtDCI, &c2_c_st);
      }

      c2_i15 = (int32_T)c2_d3;
      if ((c2_i15 < 1) || (c2_i15 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
      }

      c2_i13 = c2_i15 - 1;
    }

    c2_jtype_size[1] = c2_i13 + 1;
    c2_c_loop_ub = c2_i13;
    for (c2_i17 = 0; c2_i17 <= c2_c_loop_ub; c2_i17++) {
      c2_jtype_data[c2_i17] = c2_d_obj.Vector[c2_i17];
    }

    c2_b_st.site = &c2_hd_emlrtRSI;
    c2_l_obj = c2_newjoint;
    c2_varargin_1_size[1] = c2_jtype_size[1];
    c2_d_loop_ub = c2_jtype_size[1] - 1;
    for (c2_i18 = 0; c2_i18 <= c2_d_loop_ub; c2_i18++) {
      c2_varargin_1_data[c2_i18] = c2_jtype_data[c2_i18];
    }

    c2_jtype_size[0] = 1;
    c2_jtype_size[1] = c2_varargin_1_size[1];
    c2_e_loop_ub = c2_varargin_1_size[1] - 1;
    for (c2_i20 = 0; c2_i20 <= c2_e_loop_ub; c2_i20++) {
      c2_jtype_data[c2_i20] = c2_varargin_1_data[c2_i20];
    }

    c2_c_st.site = &c2_yd_emlrtRSI;
    c2_d_st.site = &c2_oc_emlrtRSI;
    c2_b6 = (c2_jtype_size[1] == 0);
    if (c2_b6) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv12, 10, 0U, 1, 0U, 2, 1, 38),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv13, 10, 0U, 1, 0U, 2, 1, 48),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 4),
                    false);
      sf_mex_call(&c2_d_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                  sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
    }

    if (!c2_l_obj->InTree) {
      c2_r = c2_l_obj;
      c2_d_obj = c2_l_obj->NameInternal;
      c2_c_st.site = &c2_ae_emlrtRSI;
      for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
        c2_c_jtype_size[c2_i23] = c2_jtype_size[c2_i23];
      }

      c2_b_CharacterVector_setVector(chartInstance, &c2_c_st, &c2_d_obj,
        c2_jtype_data, c2_c_jtype_size);
      c2_r->NameInternal = c2_d_obj;
    } else {
      c2_c_st.site = &c2_be_emlrtRSI;
      c2_d_st.site = &c2_rc_emlrtRSI;
      c2_b_warning(chartInstance, &c2_d_st);
    }
  }

  for (c2_i9 = 0; c2_i9 < 14; c2_i9++) {
    c2_h_obj[c2_i9] = c2_b_obj->PositionLimitsInternal[c2_i9];
  }

  for (c2_i10 = 0; c2_i10 < 14; c2_i10++) {
    c2_newjoint->PositionLimitsInternal[c2_i10] = c2_h_obj[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 7; c2_i11++) {
    c2_i_obj[c2_i11] = c2_b_obj->HomePositionInternal[c2_i11];
  }

  for (c2_i12 = 0; c2_i12 < 7; c2_i12++) {
    c2_newjoint->HomePositionInternal[c2_i12] = c2_i_obj[c2_i12];
  }

  for (c2_i14 = 0; c2_i14 < 3; c2_i14++) {
    c2_j_obj[c2_i14] = c2_b_obj->JointAxisInternal[c2_i14];
  }

  for (c2_i16 = 0; c2_i16 < 3; c2_i16++) {
    c2_newjoint->JointAxisInternal[c2_i16] = c2_j_obj[c2_i16];
  }

  c2_b_st.site = &c2_id_emlrtRSI;
  c2_k_obj = c2_b_obj;
  c2_c_st.site = &c2_ce_emlrtRSI;
  c2_m_obj = c2_k_obj;
  c2_d_st.site = &c2_gb_emlrtRSI;
  c2_d_obj = c2_m_obj->TypeInternal;
  c2_d4 = c2_d_obj.Length;
  c2_b5 = (c2_d4 < 1.0);
  if (c2_b5) {
    c2_i19 = -1;
  } else {
    if (c2_d4 != (real_T)(int32_T)muDoubleScalarFloor(c2_d4)) {
      emlrtIntegerCheckR2012b(c2_d4, &c2_c_emlrtDCI, &c2_d_st);
    }

    c2_i21 = (int32_T)c2_d4;
    if ((c2_i21 < 1) || (c2_i21 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i21, 1, 200, &c2_e_emlrtBCI, &c2_d_st);
    }

    c2_i19 = c2_i21 - 1;
  }

  c2_jtype_size[1] = c2_i19 + 1;
  c2_f_loop_ub = c2_i19;
  for (c2_i22 = 0; c2_i22 <= c2_f_loop_ub; c2_i22++) {
    c2_jtype_data[c2_i22] = c2_d_obj.Vector[c2_i22];
  }

  c2_bool = false;
  c2_varargin_1_size[1] = c2_jtype_size[1];
  c2_remainingDimsA = c2_varargin_1_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 5) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_jtype_data[c2_b_kstr] != c2_b_cv1[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d5 = c2_k_obj->VelocityNumber;
    c2_b7 = (c2_d5 < 1.0);
    if (c2_b7) {
      c2_i24 = -1;
    } else {
      if (c2_d5 != (real_T)(int32_T)muDoubleScalarFloor(c2_d5)) {
        emlrtIntegerCheckR2012b(c2_d5, &c2_n_emlrtDCI, &c2_b_st);
      }

      c2_i25 = (int32_T)c2_d5;
      if ((c2_i25 < 1) || (c2_i25 > 6)) {
        emlrtDynamicBoundsCheckR2012b(c2_i25, 1, 6, &c2_o_emlrtBCI, &c2_b_st);
      }

      c2_i24 = c2_i25 - 1;
    }

    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = c2_i24 + 1;
    c2_g_loop_ub = c2_i24;
    c2_i28 = 0;
    for (c2_i29 = 0; c2_i29 <= c2_g_loop_ub; c2_i29++) {
      for (c2_i31 = 0; c2_i31 < 6; c2_i31++) {
        c2_msubspace_data[c2_i31 + c2_i28] = c2_k_obj->
          MotionSubspaceInternal[c2_i31 + c2_i28];
      }

      c2_i28 += 6;
    }
  } else {
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    memset(&c2_msubspace_data[0], 0, 6U * sizeof(real_T));
  }

  c2_b_st.site = &c2_id_emlrtRSI;
  c2_rigidBodyJoint_set_MotionSubspace(chartInstance, &c2_b_st, c2_newjoint,
    c2_msubspace_data, c2_msubspace_size);
  for (c2_i26 = 0; c2_i26 < 16; c2_i26++) {
    c2_n_obj[c2_i26] = c2_b_obj->JointToParentTransform[c2_i26];
  }

  for (c2_i27 = 0; c2_i27 < 16; c2_i27++) {
    c2_newjoint->JointToParentTransform[c2_i27] = c2_n_obj[c2_i27];
  }

  for (c2_i30 = 0; c2_i30 < 16; c2_i30++) {
    c2_o_obj[c2_i30] = c2_b_obj->ChildToJointTransform[c2_i30];
  }

  for (c2_i32 = 0; c2_i32 < 16; c2_i32++) {
    c2_newjoint->ChildToJointTransform[c2_i32] = c2_o_obj[c2_i32];
  }

  return c2_newjoint;
}

static c2_rigidBodyJoint *c2_e_rigidBodyJoint_rigidBodyJoint
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_rigidBodyJoint *c2_obj, char_T c2_jname_data[], int32_T c2_jname_size[2],
   char_T c2_jtype_data[], int32_T c2_jtype_size[2])
{
  static char_T c2_b_cv7[52] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't',
    'r', 'i', 'n', 'g', 'U', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T c2_b_cv2[49] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't',
    'r', 'i', 'n', 'g', 'A', 'm', 'b', 'i', 'g', 'u', 'o', 'u', 's', 'S', 't',
    'r', 'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T c2_b_cv5[46] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i',
    'g', 'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'u', 'n',
    'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd', 'S', 't', 'r', 'i', 'n',
    'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T c2_b_cv4[44] = { '\'', 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e',
    '\'', ',', ' ', '\'', 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c', '\'', ',',
    ' ', '\'', 'f', 'i', 'x', 'e', 'd', '\'', ',', ' ', '\'', 'f', 'l', 'o', 'a',
    't', 'i', 'n', 'g', '\'' };

  static char_T c2_b_cv1[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i',
    'g', 'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'a', 'm',
    'b', 'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r', 'i', 'n', 'g', 'C', 'h',
    'o', 'i', 'c', 'e' };

  static char_T c2_b_cv10[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv9[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv[5] = { 'j', 'n', 'a', 'm', 'e' };

  static char_T c2_b_cv11[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv3[5] = { 'j', 't', 'y', 'p', 'e' };

  static char_T c2_b_cv6[3] = { ',', ' ', '\'' };

  static char_T c2_b_cv8[2] = { '\'', ',' };

  c2_rigidBodyJoint *c2_b_obj;
  c2_rigidBodyJoint *c2_c_obj;
  c2_rigidBodyJoint *c2_d_obj;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_r;
  c2_rigidBodyJoint *c2_r1;
  c2_rigidBodyJoint *c2_this;
  c2_robotics_manip_internal_CharacterVector c2_s;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_I[36];
  real_T c2_msubspace_data[36];
  real_T c2_poslim_data[14];
  real_T c2_homepos_data[7];
  real_T c2_b_b[6];
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_index;
  int32_T c2_tmp_data[7];
  int32_T c2_b_jname_size[2];
  int32_T c2_homepos_size[2];
  int32_T c2_inputstr_size[2];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_jointtype_size[2];
  int32_T c2_msubspace_size[2];
  int32_T c2_partial_match_size[2];
  int32_T c2_poslim_size[2];
  int32_T c2_switch_expression_size[2];
  int32_T c2_varargin_1_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_itilerow;
  int32_T c2_b_jcol;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsB;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_remainingDimsB;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_kstr;
  int32_T c2_f_loop_ub;
  int32_T c2_g_kstr;
  int32_T c2_g_loop_ub;
  int32_T c2_h_kstr;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_iacol;
  int32_T c2_ibcol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_j_loop_ub;
  int32_T c2_jcol;
  int32_T c2_k;
  int32_T c2_k_loop_ub;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_nmatched;
  int32_T c2_remainingDimsA;
  int32_T c2_remainingDimsB;
  char_T c2_inputstr_data[205];
  char_T c2_b_jname_data[204];
  char_T c2_varargin_1_data[204];
  char_T c2_switch_expression_data[200];
  char_T c2_jointtype_data[9];
  char_T c2_partial_match_data[9];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_result;
  boolean_T c2_guard1;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_b_obj = c2_obj;
  c2_b_obj->InTree = false;
  for (c2_i = 0; c2_i < 16; c2_i++) {
    c2_b_obj->JointToParentTransform[c2_i] = c2_dv[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 16; c2_i1++) {
    c2_b_obj->ChildToJointTransform[c2_i1] = c2_dv[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 14; c2_i2++) {
    c2_b_obj->PositionLimitsInternal[c2_i2] = 0.0;
  }

  for (c2_i3 = 0; c2_i3 < 7; c2_i3++) {
    c2_b_obj->HomePositionInternal[c2_i3] = 0.0;
  }

  for (c2_i4 = 0; c2_i4 < 36; c2_i4++) {
    c2_b_obj->MotionSubspaceInternal[c2_i4] = 0.0;
  }

  c2_varargin_1_size[1] = c2_jname_size[1];
  c2_loop_ub = c2_jname_size[1] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
    c2_varargin_1_data[c2_i5] = c2_jname_data[c2_i5];
  }

  c2_jname_size[0] = 1;
  c2_jname_size[1] = c2_varargin_1_size[1];
  c2_b_loop_ub = c2_varargin_1_size[1] - 1;
  for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
    c2_jname_data[c2_i6] = c2_varargin_1_data[c2_i6];
  }

  c2_st.site = &c2_kd_emlrtRSI;
  c2_varargin_1_size[1] = c2_jname_size[1];
  c2_b_st.site = &c2_oc_emlrtRSI;
  c2_b = (c2_varargin_1_size[1] == 0);
  if (c2_b) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv12, 10, 0U, 1, 0U, 2, 1, 38),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv13, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  c2_st.site = &c2_bb_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_s.Length = 200.0;
  for (c2_i7 = 0; c2_i7 < 200; c2_i7++) {
    c2_s.Vector[c2_i7] = ' ';
  }

  c2_b_obj->NameInternal = c2_s;
  c2_s.Length = 200.0;
  for (c2_i8 = 0; c2_i8 < 200; c2_i8++) {
    c2_s.Vector[c2_i8] = ' ';
  }

  c2_b_obj->TypeInternal = c2_s;
  c2_r = c2_b_obj;
  c2_s = c2_b_obj->NameInternal;
  c2_b_jname_size[0] = 1;
  c2_b_jname_size[1] = c2_jname_size[1];
  c2_c_loop_ub = c2_jname_size[0] * c2_jname_size[1] - 1;
  for (c2_i9 = 0; c2_i9 <= c2_c_loop_ub; c2_i9++) {
    c2_b_jname_data[c2_i9] = c2_jname_data[c2_i9];
  }

  c2_st.site = &c2_ld_emlrtRSI;
  c2_b_CharacterVector_setVector(chartInstance, &c2_st, &c2_s, c2_b_jname_data,
    c2_b_jname_size);
  c2_r->NameInternal = c2_s;
  c2_st.site = &c2_md_emlrtRSI;
  c2_b_st.site = &c2_nd_emlrtRSI;
  c2_c_st.site = &c2_od_emlrtRSI;
  c2_get_match(chartInstance, &c2_c_st, c2_jtype_data, c2_jtype_size,
               c2_partial_match_data, c2_partial_match_size, &c2_nmatched);
  c2_guard1 = false;
  if (c2_nmatched == 0) {
    c2_guard1 = true;
  } else {
    c2_b1 = (c2_jtype_size[1] == 0);
    if (c2_b1) {
      c2_guard1 = true;
    } else if (c2_nmatched > 1) {
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
        43), false);
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1,
        49), false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1, 0U, 2, 1, 5),
                    false);
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1, 0U, 2, 1,
        44), false);
      c2_inputstr_size[1] = c2_jtype_size[1] + 5;
      for (c2_i12 = 0; c2_i12 < 3; c2_i12++) {
        c2_inputstr_data[c2_i12] = c2_b_cv6[c2_i12];
      }

      c2_e_loop_ub = c2_jtype_size[1] - 1;
      for (c2_i13 = 0; c2_i13 <= c2_e_loop_ub; c2_i13++) {
        c2_inputstr_data[c2_i13 + 3] = c2_jtype_data[c2_i13];
      }

      for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
        c2_inputstr_data[(c2_i14 + c2_jtype_size[1]) + 3] = c2_b_cv8[c2_i14];
      }

      c2_l_y = NULL;
      sf_mex_assign(&c2_l_y, sf_mex_create("y", &c2_inputstr_data, 10, 0U, 1, 0U,
        2, 1, c2_inputstr_size[1]), false);
      sf_mex_call(&c2_b_st, &c2_o_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 4U, 14, c2_e_y, 14, c2_f_y,
                    14, c2_g_y, 14, c2_l_y)));
    } else {
      c2_jointtype_size[0] = 1;
      c2_jointtype_size[1] = c2_partial_match_size[1];
      c2_d_loop_ub = c2_partial_match_size[1] - 1;
      for (c2_i11 = 0; c2_i11 <= c2_d_loop_ub; c2_i11++) {
        c2_jointtype_data[c2_i11] = c2_partial_match_data[c2_i11];
      }
    }
  }

  if (c2_guard1) {
    c2_jointtype_size[0] = 1;
    c2_jointtype_size[1] = 8;
    for (c2_i10 = 0; c2_i10 < 8; c2_i10++) {
      c2_jointtype_data[c2_i10] = ' ';
    }

    if (c2_nmatched == 0) {
      c2_b3 = true;
    } else {
      c2_b2 = (c2_jtype_size[1] == 0);
      if (c2_b2) {
        c2_b3 = true;
      } else {
        c2_b3 = false;
      }
    }

    if (c2_b3) {
      c2_h_y = NULL;
      sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1, 0U, 2, 1,
        46), false);
      c2_i_y = NULL;
      sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1, 0U, 2, 1,
        52), false);
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1, 0U, 2, 1, 5),
                    false);
      c2_k_y = NULL;
      sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1, 0U, 2, 1,
        44), false);
      c2_inputstr_size[1] = c2_jtype_size[1] + 5;
      for (c2_i17 = 0; c2_i17 < 3; c2_i17++) {
        c2_inputstr_data[c2_i17] = c2_b_cv6[c2_i17];
      }

      c2_g_loop_ub = c2_jtype_size[1] - 1;
      for (c2_i19 = 0; c2_i19 <= c2_g_loop_ub; c2_i19++) {
        c2_inputstr_data[c2_i19 + 3] = c2_jtype_data[c2_i19];
      }

      for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
        c2_inputstr_data[(c2_i20 + c2_jtype_size[1]) + 3] = c2_b_cv8[c2_i20];
      }

      c2_m_y = NULL;
      sf_mex_assign(&c2_m_y, sf_mex_create("y", &c2_inputstr_data, 10, 0U, 1, 0U,
        2, 1, c2_inputstr_size[1]), false);
      sf_mex_call(&c2_b_st, &c2_n_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 4U, 14, c2_i_y, 14, c2_j_y,
                    14, c2_k_y, 14, c2_m_y)));
    }
  }

  c2_st.site = &c2_cb_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_r1 = c2_c_obj;
  c2_s = c2_c_obj->TypeInternal;
  c2_b_st.site = &c2_xd_emlrtRSI;
  c2_b_CharacterVector_setVector(chartInstance, &c2_b_st, &c2_s,
    c2_jointtype_data, c2_jointtype_size);
  c2_r1->TypeInternal = c2_s;
  c2_st.site = &c2_db_emlrtRSI;
  c2_d_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_d_obj->TypeInternal;
  c2_d = c2_s.Length;
  c2_b4 = (c2_d < 1.0);
  if (c2_b4) {
    c2_i15 = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i16 = (int32_T)c2_d;
    if ((c2_i16 < 1) || (c2_i16 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i16, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i15 = c2_i16 - 1;
  }

  c2_switch_expression_size[1] = c2_i15 + 1;
  c2_f_loop_ub = c2_i15;
  for (c2_i18 = 0; c2_i18 <= c2_f_loop_ub; c2_i18++) {
    c2_switch_expression_data[c2_i18] = c2_s.Vector[c2_i18];
  }

  c2_result = false;
  c2_varargin_1_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsB = c2_varargin_1_size[1];
  if (c2_remainingDimsB != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_b_cv9[c2_b_kstr] != c2_switch_expression_data[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_result = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_result) {
    c2_index = 0.0;
  } else {
    c2_b_result = false;
    c2_varargin_1_size[1] = c2_switch_expression_size[1];
    c2_b_remainingDimsB = c2_varargin_1_size[1];
    if (c2_b_remainingDimsB != 9) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 9) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_cv1[c2_d_kstr] != c2_switch_expression_data[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_result = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_result) {
      c2_index = 1.0;
    } else {
      c2_c_result = false;
      c2_varargin_1_size[1] = c2_switch_expression_size[1];
      c2_c_remainingDimsB = c2_varargin_1_size[1];
      if (c2_c_remainingDimsB != 8) {
      } else {
        c2_e_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_e_kstr - 1 < 8) {
            c2_f_kstr = c2_e_kstr - 1;
            if (c2_b_cv10[c2_f_kstr] != c2_switch_expression_data[c2_f_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_e_kstr++;
            }
          } else {
            c2_c_result = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_result) {
        c2_index = 2.0;
      } else {
        c2_index = -1.0;
      }
    }
  }

  switch ((int32_T)c2_index) {
   case 0:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i21 = 0; c2_i21 < 6; c2_i21++) {
      c2_msubspace_data[c2_i21] = c2_dv5[c2_i21];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i24 = 0; c2_i24 < 2; c2_i24++) {
      c2_poslim_data[c2_i24] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c2_i24;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i28 = 0; c2_i28 < 3; c2_i28++) {
      c2_b_obj->JointAxisInternal[c2_i28] = c2_dv4[c2_i28];
    }
    break;

   case 1:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i22 = 0; c2_i22 < 6; c2_i22++) {
      c2_msubspace_data[c2_i22] = c2_dv3[c2_i22];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i25 = 0; c2_i25 < 2; c2_i25++) {
      c2_poslim_data[c2_i25] = -0.5 + (real_T)c2_i25;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 1.0;
    c2_b_obj->PositionNumber = 1.0;
    for (c2_i29 = 0; c2_i29 < 3; c2_i29++) {
      c2_b_obj->JointAxisInternal[c2_i29] = c2_dv4[c2_i29];
    }
    break;

   case 2:
    memset(&c2_I[0], 0, 36U * sizeof(real_T));
    for (c2_k = 0; c2_k < 6; c2_k++) {
      c2_b_k = c2_k;
      c2_I[c2_b_k + 6 * c2_b_k] = 1.0;
    }

    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 6;
    for (c2_i23 = 0; c2_i23 < 36; c2_i23++) {
      c2_msubspace_data[c2_i23] = c2_I[c2_i23];
    }

    for (c2_jcol = 0; c2_jcol < 2; c2_jcol++) {
      c2_b_jcol = c2_jcol;
      c2_iacol = c2_b_jcol;
      c2_ibmat = c2_b_jcol * 3 - 1;
      for (c2_itilerow = 0; c2_itilerow < 3; c2_itilerow++) {
        c2_b_itilerow = c2_itilerow;
        c2_ibcol = c2_ibmat + c2_b_itilerow;
        c2_b_b[c2_ibcol + 1] = -5.0 + 10.0 * (real_T)c2_iacol;
      }
    }

    c2_poslim_size[0] = 7;
    c2_poslim_size[1] = 2;
    for (c2_i27 = 0; c2_i27 < 2; c2_i27++) {
      for (c2_i31 = 0; c2_i31 < 4; c2_i31++) {
        c2_poslim_data[c2_i31 + c2_poslim_size[0] * c2_i27] = rtNaN;
      }
    }

    for (c2_i30 = 0; c2_i30 < 2; c2_i30++) {
      for (c2_i32 = 0; c2_i32 < 3; c2_i32++) {
        c2_poslim_data[(c2_i32 + c2_poslim_size[0] * c2_i30) + 4] =
          c2_b_b[c2_i32 + 3 * c2_i30];
      }
    }

    c2_homepos_size[1] = 7;
    for (c2_i33 = 0; c2_i33 < 7; c2_i33++) {
      c2_homepos_data[c2_i33] = c2_dv2[c2_i33];
    }

    c2_b_obj->VelocityNumber = 6.0;
    c2_b_obj->PositionNumber = 7.0;
    for (c2_i34 = 0; c2_i34 < 3; c2_i34++) {
      c2_b_obj->JointAxisInternal[c2_i34] = rtNaN;
    }
    break;

   default:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    memset(&c2_msubspace_data[0], 0, 6U * sizeof(real_T));
    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    memset(&c2_poslim_data[0], 0, sizeof(real_T) << 1);
    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_b_obj->VelocityNumber = 0.0;
    c2_b_obj->PositionNumber = 0.0;
    for (c2_i26 = 0; c2_i26 < 3; c2_i26++) {
      c2_b_obj->JointAxisInternal[c2_i26] = 0.0;
    }
    break;
  }

  c2_st.site = &c2_eb_emlrtRSI;
  c2_rigidBodyJoint_set_MotionSubspace(chartInstance, &c2_st, c2_b_obj,
    c2_msubspace_data, c2_msubspace_size);
  c2_st.site = &c2_fb_emlrtRSI;
  c2_e_obj = c2_b_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_s = c2_e_obj->TypeInternal;
  c2_d1 = c2_s.Length;
  c2_b5 = (c2_d1 < 1.0);
  if (c2_b5) {
    c2_i35 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i36 = (int32_T)c2_d1;
    if ((c2_i36 < 1) || (c2_i36 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i36, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i35 = c2_i36 - 1;
  }

  c2_switch_expression_size[1] = c2_i35 + 1;
  c2_h_loop_ub = c2_i35;
  for (c2_i37 = 0; c2_i37 <= c2_h_loop_ub; c2_i37++) {
    c2_switch_expression_data[c2_i37] = c2_s.Vector[c2_i37];
  }

  c2_bool = false;
  c2_varargin_1_size[1] = c2_switch_expression_size[1];
  c2_remainingDimsA = c2_varargin_1_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_g_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_g_kstr - 1 < 5) {
        c2_h_kstr = c2_g_kstr - 1;
        if (c2_switch_expression_data[c2_h_kstr] != c2_b_cv11[c2_h_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_g_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d2 = c2_b_obj->PositionNumber;
    c2_b6 = (c2_d2 < 1.0);
    if (c2_b6) {
      c2_i40 = -1;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i42 = (int32_T)c2_d2;
      if ((c2_i42 < 1) || (c2_i42 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i42, 1, 7, &c2_c_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i40 = c2_i42 - 1;
    }

    c2_tmp_size[0] = c2_i40 + 1;
    c2_i_loop_ub = c2_i40;
    for (c2_i43 = 0; c2_i43 <= c2_i_loop_ub; c2_i43++) {
      c2_tmp_data[c2_i43] = c2_i43;
    }

    c2_iv1[0] = c2_tmp_size[0];
    c2_iv1[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c2_iv1[0], 2, &c2_poslim_size[0], 2,
      &c2_emlrtECI, (void *)c2_sp);
    c2_iv2[0] = c2_tmp_size[0];
    for (c2_i44 = 0; c2_i44 < 2; c2_i44++) {
      c2_j_loop_ub = c2_iv2[0] - 1;
      for (c2_i45 = 0; c2_i45 <= c2_j_loop_ub; c2_i45++) {
        c2_b_obj->PositionLimitsInternal[c2_tmp_data[c2_i45] + 7 * c2_i44] =
          c2_poslim_data[c2_i45 + c2_poslim_size[0] * c2_i44];
      }
    }

    c2_d3 = c2_b_obj->PositionNumber;
    c2_b7 = (c2_d3 < 1.0);
    if (c2_b7) {
      c2_i46 = 0;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_b_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i47 = (int32_T)c2_d3;
      if ((c2_i47 < 1) || (c2_i47 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i47, 1, 7, &c2_d_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i46 = c2_i47;
    }

    if (c2_i46 != c2_homepos_size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i46, c2_homepos_size[1], &c2_b_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_k_loop_ub = c2_homepos_size[1] - 1;
    for (c2_i48 = 0; c2_i48 <= c2_k_loop_ub; c2_i48++) {
      c2_b_obj->HomePositionInternal[c2_i48] = c2_homepos_data[c2_i48];
    }
  } else {
    for (c2_i38 = 0; c2_i38 < 2; c2_i38++) {
      c2_iv[c2_i38] = 1 + c2_i38;
    }

    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_poslim_size[0], 2,
      &c2_c_emlrtECI, (void *)c2_sp);
    c2_i39 = 0;
    for (c2_i41 = 0; c2_i41 < 2; c2_i41++) {
      c2_b_obj->PositionLimitsInternal[c2_i39] = c2_poslim_data[c2_i41];
      c2_i39 += 7;
    }

    if (c2_homepos_size[1] != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, c2_homepos_size[1], &c2_d_emlrtECI,
        (emlrtConstCTX)c2_sp);
    }

    c2_b_obj->HomePositionInternal[0] = c2_homepos_data[0];
  }

  return c2_b_obj;
}

static void c2_CharacterVector_setVector(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_CharacterVector *c2_obj, char_T c2_vec_data[],
  int32_T c2_vec_size[2], c2_robotics_manip_internal_CharacterVector *c2_b_obj)
{
  int32_T c2_b_vec_size[2];
  int32_T c2_i;
  int32_T c2_loop_ub;
  char_T c2_b_vec_data[204];
  *c2_b_obj = *c2_obj;
  c2_b_vec_size[0] = 1;
  c2_b_vec_size[1] = c2_vec_size[1];
  c2_loop_ub = c2_vec_size[0] * c2_vec_size[1] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_b_vec_data[c2_i] = c2_vec_data[c2_i];
  }

  c2_b_CharacterVector_setVector(chartInstance, c2_sp, c2_b_obj, c2_b_vec_data,
    c2_b_vec_size);
}

static void c2_get_match(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_str_data[], int32_T c2_str_size[2], char_T
  c2_match_data[], int32_T c2_match_size[2], int32_T *c2_nmatched)
{
  static char_T c2_b_cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_vstr[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_c_vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_st;
  const mxArray *c2_bb_y = NULL;
  const mxArray *c2_cb_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_db_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_fb_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_gb_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_hb_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_ib_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_kb_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_lb_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_nb_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_ob_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_pb_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_rb_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_sb_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_tb_y = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_v_y = NULL;
  const mxArray *c2_x_y = NULL;
  const mxArray *c2_y_y = NULL;
  real_T c2_b_cmpLen;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c_cmpLen;
  real_T c2_c_x;
  real_T c2_c_y;
  real_T c2_cmpLen;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_lenstr;
  real_T c2_x;
  real_T c2_y;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_a;
  int32_T c2_b_b;
  int32_T c2_b_cmpLenInt;
  int32_T c2_b_kstr;
  int32_T c2_b_minnanb;
  int32_T c2_b_na;
  int32_T c2_b_ns;
  int32_T c2_c_a;
  int32_T c2_c_b;
  int32_T c2_c_cmpLenInt;
  int32_T c2_c_kstr;
  int32_T c2_c_minnanb;
  int32_T c2_c_na;
  int32_T c2_c_ns;
  int32_T c2_cmpLenInt;
  int32_T c2_d_a;
  int32_T c2_d_cmpLen;
  int32_T c2_d_kstr;
  int32_T c2_e_a;
  int32_T c2_e_cmpLen;
  int32_T c2_e_kstr;
  int32_T c2_exitg1;
  int32_T c2_f_a;
  int32_T c2_f_cmpLen;
  int32_T c2_f_kstr;
  int32_T c2_g_cmpLen;
  int32_T c2_h_cmpLen;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_cmpLen;
  int32_T c2_kstr;
  int32_T c2_len;
  int32_T c2_minnanb;
  int32_T c2_na;
  int32_T c2_ns;
  char_T c2_ab_y;
  char_T c2_b_s;
  char_T c2_c_s;
  char_T c2_d_s;
  char_T c2_e_s;
  char_T c2_eb_y;
  char_T c2_f_s;
  char_T c2_g_s;
  char_T c2_g_x;
  char_T c2_h_s;
  char_T c2_h_x;
  char_T c2_i_s;
  char_T c2_i_x;
  char_T c2_j_s;
  char_T c2_j_x;
  char_T c2_jb_y;
  char_T c2_k_s;
  char_T c2_k_x;
  char_T c2_l_s;
  char_T c2_l_x;
  char_T c2_m_s;
  char_T c2_m_x;
  char_T c2_mb_y;
  char_T c2_n_s;
  char_T c2_n_x;
  char_T c2_o_s;
  char_T c2_o_x;
  char_T c2_p_s;
  char_T c2_p_x;
  char_T c2_q_s;
  char_T c2_q_x;
  char_T c2_qb_y;
  char_T c2_r_s;
  char_T c2_r_x;
  char_T c2_s;
  char_T c2_s_s;
  char_T c2_t_s;
  char_T c2_u_s;
  char_T c2_v_s;
  char_T c2_w_s;
  char_T c2_w_y;
  char_T c2_x_s;
  int8_T c2_b_u;
  int8_T c2_c_u;
  int8_T c2_d_u;
  int8_T c2_e_u;
  int8_T c2_f_u;
  int8_T c2_g_u;
  int8_T c2_h_u;
  int8_T c2_i_u;
  int8_T c2_j_u;
  int8_T c2_k_u;
  int8_T c2_l_u;
  int8_T c2_u;
  boolean_T c2_b1;
  boolean_T c2_b10;
  boolean_T c2_b11;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_b8;
  boolean_T c2_b9;
  boolean_T c2_b_bool;
  boolean_T c2_b_guard1;
  boolean_T c2_b_p;
  boolean_T c2_bool;
  boolean_T c2_c_bool;
  boolean_T c2_c_p;
  boolean_T c2_d_b;
  boolean_T c2_d_p;
  boolean_T c2_e_p;
  boolean_T c2_f_p;
  boolean_T c2_g_p;
  boolean_T c2_guard1;
  boolean_T c2_guard2;
  boolean_T c2_guard3;
  boolean_T c2_guard4;
  boolean_T c2_h_p;
  boolean_T c2_i_p;
  boolean_T c2_j_p;
  boolean_T c2_k_p;
  boolean_T c2_l_p;
  boolean_T c2_matched;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_match_size[0] = 1;
  c2_match_size[1] = 8;
  for (c2_i = 0; c2_i < 8; c2_i++) {
    c2_match_data[c2_i] = ' ';
  }

  c2_len = c2_str_size[1];
  c2_lenstr = (real_T)c2_len;
  *c2_nmatched = 0;
  c2_matched = false;
  c2_guard1 = false;
  c2_guard2 = false;
  c2_guard3 = false;
  c2_guard4 = false;
  if (c2_lenstr <= 8.0) {
    c2_st.site = &c2_pd_emlrtRSI;
    c2_cmpLen = c2_lenstr;
    c2_x = c2_cmpLen;
    c2_b_x = c2_x;
    c2_y = c2_b_x;
    c2_y = muDoubleScalarFloor(c2_y);
    c2_cmpLenInt = (int32_T)c2_y;
    c2_b_st.site = &c2_qd_emlrtRSI;
    c2_d_cmpLen = c2_cmpLenInt;
    c2_c_st.site = &c2_rd_emlrtRSI;
    c2_e_cmpLen = c2_d_cmpLen;
    c2_bool = false;
    c2_na = c2_str_size[1];
    c2_a = c2_na;
    if (c2_a < 8) {
      c2_minnanb = c2_a;
    } else {
      c2_minnanb = 8;
    }

    c2_b_guard1 = false;
    if (c2_e_cmpLen <= c2_minnanb) {
      c2_d_a = c2_minnanb;
      c2_b = c2_e_cmpLen;
      if (c2_d_a < c2_b) {
        c2_ns = c2_d_a;
      } else {
        c2_ns = c2_b;
      }

      c2_b_guard1 = true;
    } else if (c2_na == 8) {
      c2_ns = 8;
      c2_b_guard1 = true;
    }

    if (c2_b_guard1) {
      c2_i4 = (uint8_T)c2_ns - 1;
      c2_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_kstr - 1 <= c2_i4) {
          c2_c_kstr = c2_kstr - 1;
          c2_d_st.site = &c2_sd_emlrtRSI;
          c2_s = c2_str_data[c2_c_kstr];
          c2_b_s = c2_s;
          c2_d_b = ((uint8_T)c2_b_s <= 127);
          c2_p = c2_d_b;
          if (!c2_p) {
            c2_d_y = NULL;
            sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2,
              1, 31), false);
            c2_e_y = NULL;
            sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2,
              1, 31), false);
            c2_u = MAX_int8_T;
            c2_g_y = NULL;
            sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_u, 2, 0U, 0, 0U, 0),
                          false);
            sf_mex_call(&c2_d_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_d_y,
                        14, sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14,
                          c2_g_y)));
          }

          c2_d_st.site = &c2_td_emlrtRSI;
          c2_g_s = c2_b_cv[c2_c_kstr];
          c2_h_s = c2_g_s;
          c2_b3 = ((uint8_T)c2_h_s <= 127);
          c2_d_p = c2_b3;
          if (!c2_d_p) {
            c2_j_y = NULL;
            sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2,
              1, 31), false);
            c2_m_y = NULL;
            sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2,
              1, 31), false);
            c2_d_u = MAX_int8_T;
            c2_p_y = NULL;
            sf_mex_assign(&c2_p_y, sf_mex_create("y", &c2_d_u, 2, 0U, 0, 0U, 0),
                          false);
            sf_mex_call(&c2_d_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_j_y,
                        14, sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_m_y, 14,
                          c2_p_y)));
          }

          c2_d_st.site = &c2_ud_emlrtRSI;
          c2_g_x = c2_str_data[c2_c_kstr];
          c2_e_st.site = &c2_vd_emlrtRSI;
          c2_h_x = c2_g_x;
          c2_f_st.site = &c2_wd_emlrtRSI;
          c2_m_s = c2_h_x;
          c2_n_s = c2_m_s;
          c2_b6 = ((uint8_T)c2_n_s <= 127);
          c2_g_p = c2_b6;
          if (!c2_g_p) {
            c2_v_y = NULL;
            sf_mex_assign(&c2_v_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2,
              1, 31), false);
            c2_x_y = NULL;
            sf_mex_assign(&c2_x_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2,
              1, 31), false);
            c2_g_u = MAX_int8_T;
            c2_bb_y = NULL;
            sf_mex_assign(&c2_bb_y, sf_mex_create("y", &c2_g_u, 2, 0U, 0, 0U, 0),
                          false);
            sf_mex_call(&c2_f_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_v_y,
                        14, sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_x_y, 14,
                          c2_bb_y)));
          }

          c2_w_y = c2_cv14[(uint8_T)c2_h_x & 127];
          c2_d_st.site = &c2_ud_emlrtRSI;
          c2_m_x = c2_b_cv[c2_c_kstr];
          c2_e_st.site = &c2_vd_emlrtRSI;
          c2_n_x = c2_m_x;
          c2_f_st.site = &c2_wd_emlrtRSI;
          c2_s_s = c2_n_x;
          c2_t_s = c2_s_s;
          c2_b9 = ((uint8_T)c2_t_s <= 127);
          c2_j_p = c2_b9;
          if (!c2_j_p) {
            c2_ib_y = NULL;
            sf_mex_assign(&c2_ib_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2,
              1, 31), false);
            c2_kb_y = NULL;
            sf_mex_assign(&c2_kb_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2,
              1, 31), false);
            c2_j_u = MAX_int8_T;
            c2_nb_y = NULL;
            sf_mex_assign(&c2_nb_y, sf_mex_create("y", &c2_j_u, 2, 0U, 0, 0U, 0),
                          false);
            sf_mex_call(&c2_f_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_ib_y,
                        14, sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_kb_y, 14,
                          c2_nb_y)));
          }

          c2_jb_y = c2_cv14[(uint8_T)c2_n_x & 127];
          if (c2_w_y != c2_jb_y) {
            c2_exitg1 = 1;
          } else {
            c2_kstr++;
          }
        } else {
          c2_bool = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_bool) {
      if (c2_lenstr == 8.0) {
        *c2_nmatched = 1;
        c2_match_size[0] = 1;
        c2_match_size[1] = 8;
        for (c2_i8 = 0; c2_i8 < 8; c2_i8++) {
          c2_match_data[c2_i8] = c2_b_vstr[c2_i8];
        }
      } else {
        c2_match_size[0] = 1;
        c2_match_size[1] = 8;
        for (c2_i6 = 0; c2_i6 < 8; c2_i6++) {
          c2_match_data[c2_i6] = c2_b_vstr[c2_i6];
        }

        c2_matched = true;
        *c2_nmatched = 1;
        c2_guard4 = true;
      }
    } else {
      c2_guard4 = true;
    }
  } else {
    c2_guard4 = true;
  }

  if (c2_guard4) {
    if (c2_lenstr <= 9.0) {
      c2_st.site = &c2_pd_emlrtRSI;
      c2_b_cmpLen = c2_lenstr;
      c2_c_x = c2_b_cmpLen;
      c2_d_x = c2_c_x;
      c2_b_y = c2_d_x;
      c2_b_y = muDoubleScalarFloor(c2_b_y);
      c2_b_cmpLenInt = (int32_T)c2_b_y;
      c2_b_st.site = &c2_qd_emlrtRSI;
      c2_f_cmpLen = c2_b_cmpLenInt;
      c2_c_st.site = &c2_rd_emlrtRSI;
      c2_h_cmpLen = c2_f_cmpLen;
      c2_b_bool = false;
      c2_b_na = c2_str_size[1];
      c2_b_a = c2_b_na;
      if (c2_b_a < 9) {
        c2_b_minnanb = c2_b_a;
      } else {
        c2_b_minnanb = 9;
      }

      c2_b_guard1 = false;
      if (c2_h_cmpLen <= c2_b_minnanb) {
        c2_e_a = c2_b_minnanb;
        c2_b_b = c2_h_cmpLen;
        if (c2_e_a < c2_b_b) {
          c2_b_ns = c2_e_a;
        } else {
          c2_b_ns = c2_b_b;
        }

        c2_b_guard1 = true;
      } else if (c2_b_na == 9) {
        c2_b_ns = 9;
        c2_b_guard1 = true;
      }

      if (c2_b_guard1) {
        c2_i5 = (uint8_T)c2_b_ns - 1;
        c2_b_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_b_kstr - 1 <= c2_i5) {
            c2_e_kstr = c2_b_kstr - 1;
            c2_d_st.site = &c2_sd_emlrtRSI;
            c2_c_s = c2_str_data[c2_e_kstr];
            c2_d_s = c2_c_s;
            c2_b1 = ((uint8_T)c2_d_s <= 127);
            c2_b_p = c2_b1;
            if (!c2_b_p) {
              c2_f_y = NULL;
              sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_i_y = NULL;
              sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_b_u = MAX_int8_T;
              c2_l_y = NULL;
              sf_mex_assign(&c2_l_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0, 0U, 0),
                            false);
              sf_mex_call(&c2_d_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_f_y,
                          14, sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_i_y,
                                14, c2_l_y)));
            }

            c2_d_st.site = &c2_td_emlrtRSI;
            c2_i_s = c2_cv1[c2_e_kstr];
            c2_j_s = c2_i_s;
            c2_b4 = ((uint8_T)c2_j_s <= 127);
            c2_e_p = c2_b4;
            if (!c2_e_p) {
              c2_o_y = NULL;
              sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_r_y = NULL;
              sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_e_u = MAX_int8_T;
              c2_t_y = NULL;
              sf_mex_assign(&c2_t_y, sf_mex_create("y", &c2_e_u, 2, 0U, 0, 0U, 0),
                            false);
              sf_mex_call(&c2_d_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_o_y,
                          14, sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_r_y,
                                14, c2_t_y)));
            }

            c2_d_st.site = &c2_ud_emlrtRSI;
            c2_i_x = c2_str_data[c2_e_kstr];
            c2_e_st.site = &c2_vd_emlrtRSI;
            c2_k_x = c2_i_x;
            c2_f_st.site = &c2_wd_emlrtRSI;
            c2_o_s = c2_k_x;
            c2_p_s = c2_o_s;
            c2_b7 = ((uint8_T)c2_p_s <= 127);
            c2_h_p = c2_b7;
            if (!c2_h_p) {
              c2_y_y = NULL;
              sf_mex_assign(&c2_y_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_db_y = NULL;
              sf_mex_assign(&c2_db_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_h_u = MAX_int8_T;
              c2_gb_y = NULL;
              sf_mex_assign(&c2_gb_y, sf_mex_create("y", &c2_h_u, 2, 0U, 0, 0U,
                0), false);
              sf_mex_call(&c2_f_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_y_y,
                          14, sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_db_y,
                                14, c2_gb_y)));
            }

            c2_ab_y = c2_cv14[(uint8_T)c2_k_x & 127];
            c2_d_st.site = &c2_ud_emlrtRSI;
            c2_o_x = c2_cv1[c2_e_kstr];
            c2_e_st.site = &c2_vd_emlrtRSI;
            c2_q_x = c2_o_x;
            c2_f_st.site = &c2_wd_emlrtRSI;
            c2_u_s = c2_q_x;
            c2_v_s = c2_u_s;
            c2_b10 = ((uint8_T)c2_v_s <= 127);
            c2_k_p = c2_b10;
            if (!c2_k_p) {
              c2_lb_y = NULL;
              sf_mex_assign(&c2_lb_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_pb_y = NULL;
              sf_mex_assign(&c2_pb_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_k_u = MAX_int8_T;
              c2_sb_y = NULL;
              sf_mex_assign(&c2_sb_y, sf_mex_create("y", &c2_k_u, 2, 0U, 0, 0U,
                0), false);
              sf_mex_call(&c2_f_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_lb_y,
                          14, sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_pb_y,
                                14, c2_sb_y)));
            }

            c2_mb_y = c2_cv14[(uint8_T)c2_q_x & 127];
            if (c2_ab_y != c2_mb_y) {
              c2_exitg1 = 1;
            } else {
              c2_b_kstr++;
            }
          } else {
            c2_b_bool = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_b_bool) {
        if (c2_lenstr == 9.0) {
          *c2_nmatched = 1;
          c2_match_size[0] = 1;
          c2_match_size[1] = 9;
          for (c2_i10 = 0; c2_i10 < 9; c2_i10++) {
            c2_match_data[c2_i10] = c2_cv1[c2_i10];
          }
        } else {
          if (!c2_matched) {
            c2_match_size[0] = 1;
            c2_match_size[1] = 9;
            for (c2_i9 = 0; c2_i9 < 9; c2_i9++) {
              c2_match_data[c2_i9] = c2_cv1[c2_i9];
            }
          }

          c2_matched = true;
          (*c2_nmatched)++;
          c2_guard3 = true;
        }
      } else {
        c2_guard3 = true;
      }
    } else {
      c2_guard3 = true;
    }
  }

  if (c2_guard3) {
    if (c2_lenstr <= 5.0) {
      c2_st.site = &c2_pd_emlrtRSI;
      c2_c_cmpLen = c2_lenstr;
      c2_e_x = c2_c_cmpLen;
      c2_f_x = c2_e_x;
      c2_c_y = c2_f_x;
      c2_c_y = muDoubleScalarFloor(c2_c_y);
      c2_c_cmpLenInt = (int32_T)c2_c_y;
      c2_b_st.site = &c2_qd_emlrtRSI;
      c2_g_cmpLen = c2_c_cmpLenInt;
      c2_c_st.site = &c2_rd_emlrtRSI;
      c2_i_cmpLen = c2_g_cmpLen;
      c2_c_bool = false;
      c2_c_na = c2_str_size[1];
      c2_c_a = c2_c_na;
      if (c2_c_a < 5) {
        c2_c_minnanb = c2_c_a;
      } else {
        c2_c_minnanb = 5;
      }

      c2_b_guard1 = false;
      if (c2_i_cmpLen <= c2_c_minnanb) {
        c2_f_a = c2_c_minnanb;
        c2_c_b = c2_i_cmpLen;
        if (c2_f_a < c2_c_b) {
          c2_c_ns = c2_f_a;
        } else {
          c2_c_ns = c2_c_b;
        }

        c2_b_guard1 = true;
      } else if (c2_c_na == 5) {
        c2_c_ns = 5;
        c2_b_guard1 = true;
      }

      if (c2_b_guard1) {
        c2_i7 = (uint8_T)c2_c_ns - 1;
        c2_d_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_d_kstr - 1 <= c2_i7) {
            c2_f_kstr = c2_d_kstr - 1;
            c2_d_st.site = &c2_sd_emlrtRSI;
            c2_e_s = c2_str_data[c2_f_kstr];
            c2_f_s = c2_e_s;
            c2_b2 = ((uint8_T)c2_f_s <= 127);
            c2_c_p = c2_b2;
            if (!c2_c_p) {
              c2_h_y = NULL;
              sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_k_y = NULL;
              sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_c_u = MAX_int8_T;
              c2_n_y = NULL;
              sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0, 0U, 0),
                            false);
              sf_mex_call(&c2_d_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_h_y,
                          14, sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_k_y,
                                14, c2_n_y)));
            }

            c2_d_st.site = &c2_td_emlrtRSI;
            c2_k_s = c2_b_cv1[c2_f_kstr];
            c2_l_s = c2_k_s;
            c2_b5 = ((uint8_T)c2_l_s <= 127);
            c2_f_p = c2_b5;
            if (!c2_f_p) {
              c2_q_y = NULL;
              sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_s_y = NULL;
              sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_f_u = MAX_int8_T;
              c2_u_y = NULL;
              sf_mex_assign(&c2_u_y, sf_mex_create("y", &c2_f_u, 2, 0U, 0, 0U, 0),
                            false);
              sf_mex_call(&c2_d_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_q_y,
                          14, sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_s_y,
                                14, c2_u_y)));
            }

            c2_d_st.site = &c2_ud_emlrtRSI;
            c2_j_x = c2_str_data[c2_f_kstr];
            c2_e_st.site = &c2_vd_emlrtRSI;
            c2_l_x = c2_j_x;
            c2_f_st.site = &c2_wd_emlrtRSI;
            c2_q_s = c2_l_x;
            c2_r_s = c2_q_s;
            c2_b8 = ((uint8_T)c2_r_s <= 127);
            c2_i_p = c2_b8;
            if (!c2_i_p) {
              c2_cb_y = NULL;
              sf_mex_assign(&c2_cb_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_fb_y = NULL;
              sf_mex_assign(&c2_fb_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_i_u = MAX_int8_T;
              c2_hb_y = NULL;
              sf_mex_assign(&c2_hb_y, sf_mex_create("y", &c2_i_u, 2, 0U, 0, 0U,
                0), false);
              sf_mex_call(&c2_f_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_cb_y,
                          14, sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_fb_y,
                                14, c2_hb_y)));
            }

            c2_eb_y = c2_cv14[(uint8_T)c2_l_x & 127];
            c2_d_st.site = &c2_ud_emlrtRSI;
            c2_p_x = c2_b_cv1[c2_f_kstr];
            c2_e_st.site = &c2_vd_emlrtRSI;
            c2_r_x = c2_p_x;
            c2_f_st.site = &c2_wd_emlrtRSI;
            c2_w_s = c2_r_x;
            c2_x_s = c2_w_s;
            c2_b11 = ((uint8_T)c2_x_s <= 127);
            c2_l_p = c2_b11;
            if (!c2_l_p) {
              c2_ob_y = NULL;
              sf_mex_assign(&c2_ob_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_rb_y = NULL;
              sf_mex_assign(&c2_rb_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U,
                2, 1, 31), false);
              c2_l_u = MAX_int8_T;
              c2_tb_y = NULL;
              sf_mex_assign(&c2_tb_y, sf_mex_create("y", &c2_l_u, 2, 0U, 0, 0U,
                0), false);
              sf_mex_call(&c2_f_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_ob_y,
                          14, sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_rb_y,
                                14, c2_tb_y)));
            }

            c2_qb_y = c2_cv14[(uint8_T)c2_r_x & 127];
            if (c2_eb_y != c2_qb_y) {
              c2_exitg1 = 1;
            } else {
              c2_d_kstr++;
            }
          } else {
            c2_c_bool = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_bool) {
        if (c2_lenstr == 5.0) {
          *c2_nmatched = 1;
          c2_match_size[0] = 1;
          c2_match_size[1] = 5;
          for (c2_i12 = 0; c2_i12 < 5; c2_i12++) {
            c2_match_data[c2_i12] = c2_c_vstr[c2_i12];
          }
        } else {
          if (!c2_matched) {
            c2_match_size[0] = 1;
            c2_match_size[1] = 5;
            for (c2_i11 = 0; c2_i11 < 5; c2_i11++) {
              c2_match_data[c2_i11] = c2_c_vstr[c2_i11];
            }
          }

          c2_matched = true;
          (*c2_nmatched)++;
          c2_guard2 = true;
        }
      } else {
        c2_guard2 = true;
      }
    } else {
      c2_guard2 = true;
    }
  }

  if (c2_guard2) {
    if (c2_lenstr <= 8.0) {
      c2_st.site = &c2_pd_emlrtRSI;
      if (c2_strcmp(chartInstance, &c2_st, c2_str_data, c2_str_size, c2_lenstr))
      {
        if (c2_lenstr == 8.0) {
          *c2_nmatched = 1;
          c2_match_size[0] = 1;
          c2_match_size[1] = 8;
          for (c2_i3 = 0; c2_i3 < 8; c2_i3++) {
            c2_match_data[c2_i3] = c2_vstr[c2_i3];
          }
        } else {
          if (!c2_matched) {
            c2_match_size[0] = 1;
            c2_match_size[1] = 8;
            for (c2_i2 = 0; c2_i2 < 8; c2_i2++) {
              c2_match_data[c2_i2] = c2_vstr[c2_i2];
            }
          }

          (*c2_nmatched)++;
          c2_guard1 = true;
        }
      } else {
        c2_guard1 = true;
      }
    } else {
      c2_guard1 = true;
    }
  }

  if (c2_guard1 && (*c2_nmatched == 0)) {
    c2_match_size[0] = 1;
    c2_match_size[1] = 8;
    for (c2_i1 = 0; c2_i1 < 8; c2_i1++) {
      c2_match_data[c2_i1] = ' ';
    }
  }
}

static boolean_T c2_strcmp(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2], real_T c2_cmpLen)
{
  static char_T c2_b_cv[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  real_T c2_b_x;
  real_T c2_x;
  real_T c2_y;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_a;
  int32_T c2_b_cmpLen;
  int32_T c2_b_kstr;
  int32_T c2_c_cmpLen;
  int32_T c2_cmpLenInt;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_kstr;
  int32_T c2_minnanb;
  int32_T c2_na;
  int32_T c2_ns;
  char_T c2_b_s;
  char_T c2_c_s;
  char_T c2_c_x;
  char_T c2_d_s;
  char_T c2_d_x;
  char_T c2_e_s;
  char_T c2_e_x;
  char_T c2_f_s;
  char_T c2_f_x;
  char_T c2_g_s;
  char_T c2_h_s;
  char_T c2_i_y;
  char_T c2_m_y;
  char_T c2_s;
  int8_T c2_b_u;
  int8_T c2_c_u;
  int8_T c2_d_u;
  int8_T c2_u;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_bool;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_guard1;
  boolean_T c2_p;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_x = c2_cmpLen;
  c2_b_x = c2_x;
  c2_y = c2_b_x;
  c2_y = muDoubleScalarFloor(c2_y);
  c2_cmpLenInt = (int32_T)c2_y;
  c2_st.site = &c2_qd_emlrtRSI;
  c2_b_cmpLen = c2_cmpLenInt;
  c2_b_st.site = &c2_rd_emlrtRSI;
  c2_c_cmpLen = c2_b_cmpLen;
  c2_bool = false;
  c2_na = c2_a_size[1];
  c2_a = c2_na;
  if (c2_a < 8) {
    c2_minnanb = c2_a;
  } else {
    c2_minnanb = 8;
  }

  c2_guard1 = false;
  if (c2_c_cmpLen <= c2_minnanb) {
    c2_b_a = c2_minnanb;
    c2_b = c2_c_cmpLen;
    if (c2_b_a < c2_b) {
      c2_ns = c2_b_a;
    } else {
      c2_ns = c2_b;
    }

    c2_guard1 = true;
  } else if (c2_na == 8) {
    c2_ns = 8;
    c2_guard1 = true;
  }

  if (c2_guard1) {
    c2_i = (uint8_T)c2_ns - 1;
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 <= c2_i) {
        c2_b_kstr = c2_kstr - 1;
        c2_c_st.site = &c2_sd_emlrtRSI;
        c2_s = c2_a_data[c2_b_kstr];
        c2_b_s = c2_s;
        c2_b_b = ((uint8_T)c2_b_s <= 127);
        c2_p = c2_b_b;
        if (!c2_p) {
          c2_b_y = NULL;
          sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2, 1,
            31), false);
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2, 1,
            31), false);
          c2_u = MAX_int8_T;
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_u, 2, 0U, 0, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14,
                        c2_d_y)));
        }

        c2_c_st.site = &c2_td_emlrtRSI;
        c2_c_s = c2_b_cv[c2_b_kstr];
        c2_d_s = c2_c_s;
        c2_b1 = ((uint8_T)c2_d_s <= 127);
        c2_b_p = c2_b1;
        if (!c2_b_p) {
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2, 1,
            31), false);
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2, 1,
            31), false);
          c2_b_u = MAX_int8_T;
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_f_y, 14,
                        c2_g_y)));
        }

        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_c_x = c2_a_data[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_d_x = c2_c_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_e_s = c2_d_x;
        c2_f_s = c2_e_s;
        c2_b2 = ((uint8_T)c2_f_s <= 127);
        c2_c_p = c2_b2;
        if (!c2_c_p) {
          c2_h_y = NULL;
          sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2, 1,
            31), false);
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2, 1,
            31), false);
          c2_c_u = MAX_int8_T;
          c2_k_y = NULL;
          sf_mex_assign(&c2_k_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_j_y, 14,
                        c2_k_y)));
        }

        c2_i_y = c2_cv14[(uint8_T)c2_d_x & 127];
        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_e_x = c2_b_cv[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_f_x = c2_e_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_g_s = c2_f_x;
        c2_h_s = c2_g_s;
        c2_b3 = ((uint8_T)c2_h_s <= 127);
        c2_d_p = c2_b3;
        if (!c2_d_p) {
          c2_l_y = NULL;
          sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2, 1,
            31), false);
          c2_n_y = NULL;
          sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv15, 10, 0U, 1, 0U, 2, 1,
            31), false);
          c2_d_u = MAX_int8_T;
          c2_o_y = NULL;
          sf_mex_assign(&c2_o_y, sf_mex_create("y", &c2_d_u, 2, 0U, 0, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_l_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_n_y, 14,
                        c2_o_y)));
        }

        c2_m_y = c2_cv14[(uint8_T)c2_f_x & 127];
        if (c2_i_y != c2_m_y) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static void c2_b_warning(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp)
{
  static char_T c2_msgID[38] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
    'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n',
    't', ':', 'J', 'o', 'i', 'n', 't', 'N', 'o', 't', 'F', 'r', 'e', 'e' };

  static char_T c2_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c2_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_msgID, 10, 0U, 1, 0U, 2, 1, 38),
                false);
  c2_st.site = &c2_sc_emlrtRSI;
  c2_d_feval(chartInstance, &c2_st, c2_y, c2_c_feval(chartInstance, &c2_st,
              c2_b_y, c2_c_y));
}

static void c2_rigidBodyTree_addBody(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj, c2_rigidBody *c2_bodyin,
  c2_robotics_manip_internal_CollisionSet *c2_iobj_0, c2_rigidBodyJoint
  *c2_iobj_1, c2_robotics_manip_internal_RigidBody *c2_iobj_2)
{
  static char_T c2_b_cv[8] = { 'b', 'o', 'd', 'y', 'n', 'a', 'm', 'e' };

  static char_T c2_b_cv1[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv2[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv3[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv4[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv5[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv6[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv7[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv8[5] = { 'J', 'o', 'i', 'n', 't' };

  c2_rigidBodyJoint *c2_b_iobj_1;
  c2_rigidBodyJoint *c2_b_jnt;
  c2_rigidBodyJoint *c2_c_jnt;
  c2_rigidBodyJoint *c2_d_jnt;
  c2_rigidBodyJoint *c2_e_jnt;
  c2_rigidBodyJoint *c2_f_jnt;
  c2_rigidBodyJoint *c2_g_jnt;
  c2_rigidBodyJoint *c2_j_obj;
  c2_rigidBodyJoint *c2_jnt;
  c2_rigidBodyJoint *c2_l_obj;
  c2_rigidBodyJoint *c2_n_obj;
  c2_robotics_manip_internal_CharacterVector c2_d_obj;
  c2_robotics_manip_internal_CollisionSet *c2_b_iobj_0;
  c2_robotics_manip_internal_RigidBody *c2_b_bodyin;
  c2_robotics_manip_internal_RigidBody *c2_b_iobj_2;
  c2_robotics_manip_internal_RigidBody *c2_body;
  c2_robotics_manip_internal_RigidBody *c2_c_obj;
  c2_robotics_manip_internal_RigidBody *c2_f_obj;
  c2_robotics_manip_internal_RigidBody *c2_g_obj;
  c2_robotics_manip_internal_RigidBody *c2_h_obj;
  c2_robotics_manip_internal_RigidBody *c2_i_obj;
  c2_robotics_manip_internal_RigidBody *c2_k_obj;
  c2_robotics_manip_internal_RigidBody *c2_m_obj;
  c2_robotics_manip_internal_RigidBody *c2_o_obj;
  c2_robotics_manip_internal_RigidBody *c2_p_obj;
  c2_robotics_manip_internal_RigidBody *c2_parent;
  c2_robotics_manip_internal_RigidBody *c2_q_obj;
  c2_robotics_manip_internal_RigidBody *c2_r_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_b_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_e_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_s_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_ab_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_bb_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_cb_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_db_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_eb_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_v_y = NULL;
  const mxArray *c2_w_y = NULL;
  const mxArray *c2_x_y = NULL;
  const mxArray *c2_y = NULL;
  const mxArray *c2_y_y = NULL;
  real_T c2_bid;
  real_T c2_bid2;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_index;
  real_T c2_pid;
  int32_T c2_b_bname_size[2];
  int32_T c2_bname_size[2];
  int32_T c2_c_bname_size[2];
  int32_T c2_varargin_1_size[2];
  int32_T c2_b_body;
  int32_T c2_b_i;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_c_body;
  int32_T c2_c_loop_ub;
  int32_T c2_d_body;
  int32_T c2_d_loop_ub;
  int32_T c2_e_body;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg2;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_varargin_1_data[204];
  char_T c2_b_bname_data[200];
  char_T c2_bname_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_bool;
  boolean_T c2_exitg1;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_ge_emlrtRSI;
  c2_b_obj = &c2_obj->TreeInternal;
  c2_b_bodyin = c2_bodyin->BodyInternal;
  c2_b_iobj_0 = &c2_iobj_0[0];
  c2_b_iobj_1 = &c2_iobj_1[0];
  c2_b_iobj_2 = c2_iobj_2;
  c2_b_st.site = &c2_he_emlrtRSI;
  c2_c_obj = c2_b_bodyin;
  c2_c_st.site = &c2_te_emlrtRSI;
  c2_d_obj = c2_c_obj->NameInternal;
  c2_d = c2_d_obj.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i1 = (int32_T)c2_d;
    if ((c2_i1 < 1) || (c2_i1 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i = c2_i1 - 1;
  }

  c2_bname_size[1] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_bname_data[c2_i2] = c2_d_obj.Vector[c2_i2];
  }

  c2_b_st.site = &c2_he_emlrtRSI;
  c2_e_obj = c2_b_obj;
  c2_bid = -1.0;
  c2_varargin_1_size[1] = c2_bname_size[1];
  c2_b_loop_ub = c2_bname_size[1] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_varargin_1_data[c2_i3] = c2_bname_data[c2_i3];
  }

  c2_bname_size[0] = 1;
  c2_bname_size[1] = c2_varargin_1_size[1];
  c2_c_loop_ub = c2_varargin_1_size[1] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_c_loop_ub; c2_i4++) {
    c2_bname_data[c2_i4] = c2_varargin_1_data[c2_i4];
  }

  c2_c_st.site = &c2_ue_emlrtRSI;
  c2_varargin_1_size[1] = c2_bname_size[1];
  c2_d_st.site = &c2_oc_emlrtRSI;
  c2_b1 = (c2_varargin_1_size[1] == 0);
  if (c2_b1) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv18, 10, 0U, 1, 0U, 2, 1, 43),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv13, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 8),
                  false);
    sf_mex_call(&c2_d_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_d_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  c2_c_st.site = &c2_ve_emlrtRSI;
  c2_f_obj = &c2_e_obj->Base;
  c2_d_st.site = &c2_te_emlrtRSI;
  c2_d_obj = c2_f_obj->NameInternal;
  c2_d1 = c2_d_obj.Length;
  c2_b2 = (c2_d1 < 1.0);
  if (c2_b2) {
    c2_i5 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_d_st);
    }

    c2_i6 = (int32_T)c2_d1;
    if ((c2_i6 < 1) || (c2_i6 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i6, 1, 200, &c2_e_emlrtBCI, &c2_d_st);
    }

    c2_i5 = c2_i6 - 1;
  }

  c2_b_bname_size[0] = 1;
  c2_b_bname_size[1] = c2_i5 + 1;
  c2_d_loop_ub = c2_i5;
  for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
    c2_b_bname_data[c2_i7] = c2_d_obj.Vector[c2_i7];
  }

  if (c2_b_strcmp(chartInstance, c2_b_bname_data, c2_b_bname_size, c2_bname_data,
                  c2_bname_size)) {
    c2_bid = 0.0;
  } else {
    c2_d2 = c2_e_obj->NumBodies;
    c2_i8 = (int32_T)c2_d2;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d2, mxDOUBLE_CLASS, c2_i8,
      &c2_ne_emlrtRTEI, &c2_b_st);
    c2_b_i = 0;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_i <= c2_i8 - 1)) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_c_st.site = &c2_we_emlrtRSI;
      c2_i9 = (int32_T)c2_c_i - 1;
      if ((c2_i9 < 0) || (c2_i9 > 1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i9, 0, 1, &c2_u_emlrtBCI, &c2_c_st);
      }

      c2_i_obj = c2_e_obj->Bodies[c2_i9];
      c2_d_st.site = &c2_te_emlrtRSI;
      c2_d_obj = c2_i_obj->NameInternal;
      c2_d4 = c2_d_obj.Length;
      c2_b4 = (c2_d4 < 1.0);
      if (c2_b4) {
        c2_i13 = -1;
      } else {
        if (c2_d4 != (real_T)(int32_T)muDoubleScalarFloor(c2_d4)) {
          emlrtIntegerCheckR2012b(c2_d4, &c2_c_emlrtDCI, &c2_d_st);
        }

        c2_i15 = (int32_T)c2_d4;
        if ((c2_i15 < 1) || (c2_i15 > 200)) {
          emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 200, &c2_e_emlrtBCI, &c2_d_st);
        }

        c2_i13 = c2_i15 - 1;
      }

      c2_b_bname_size[0] = 1;
      c2_b_bname_size[1] = c2_i13 + 1;
      c2_f_loop_ub = c2_i13;
      for (c2_i17 = 0; c2_i17 <= c2_f_loop_ub; c2_i17++) {
        c2_b_bname_data[c2_i17] = c2_d_obj.Vector[c2_i17];
      }

      if (c2_b_strcmp(chartInstance, c2_b_bname_data, c2_b_bname_size,
                      c2_bname_data, c2_bname_size)) {
        c2_bid = c2_c_i;
        c2_exitg1 = true;
      } else {
        c2_b_i++;
      }
    }
  }

  if (c2_bid > -1.0) {
    c2_b_st.site = &c2_ie_emlrtRSI;
    c2_g_obj = c2_b_bodyin;
    c2_c_st.site = &c2_te_emlrtRSI;
    c2_d_obj = c2_g_obj->NameInternal;
    c2_d3 = c2_d_obj.Length;
    c2_b3 = (c2_d3 < 1.0);
    if (c2_b3) {
      c2_i10 = -1;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_c_emlrtDCI, &c2_c_st);
      }

      c2_i11 = (int32_T)c2_d3;
      if ((c2_i11 < 1) || (c2_i11 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i11, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
      }

      c2_i10 = c2_i11 - 1;
    }

    c2_bname_size[1] = c2_i10 + 1;
    c2_e_loop_ub = c2_i10;
    for (c2_i12 = 0; c2_i12 <= c2_e_loop_ub; c2_i12++) {
      c2_bname_data[c2_i12] = c2_d_obj.Vector[c2_i12];
    }

    c2_b_st.site = &c2_ie_emlrtRSI;
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv16, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv16, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_i_y = NULL;
    sf_mex_assign(&c2_i_y, sf_mex_create("y", &c2_bname_data, 10, 0U, 1, 0U, 2,
      1, c2_bname_size[1]), false);
    sf_mex_call(&c2_b_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_h_y, 14, c2_i_y)));
  }

  c2_b_st.site = &c2_je_emlrtRSI;
  c2_pid = c2_RigidBodyTree_validateInputBodyName(chartInstance, &c2_b_st,
    c2_b_obj);
  c2_b_st.site = &c2_ke_emlrtRSI;
  c2_h_obj = c2_b_bodyin;
  if (c2_h_obj->Index == 0.0) {
    c2_c_st.site = &c2_af_emlrtRSI;
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14, c2_f_y)));
  }

  c2_jnt = c2_h_obj->JointInternal;
  c2_b_st.site = &c2_ke_emlrtRSI;
  c2_j_obj = c2_jnt;
  c2_c_st.site = &c2_jd_emlrtRSI;
  c2_d_obj = c2_j_obj->NameInternal;
  c2_d5 = c2_d_obj.Length;
  c2_b5 = (c2_d5 < 1.0);
  if (c2_b5) {
    c2_i14 = -1;
  } else {
    if (c2_d5 != (real_T)(int32_T)muDoubleScalarFloor(c2_d5)) {
      emlrtIntegerCheckR2012b(c2_d5, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i16 = (int32_T)c2_d5;
    if ((c2_i16 < 1) || (c2_i16 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i16, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i14 = c2_i16 - 1;
  }

  c2_bname_size[0] = 1;
  c2_bname_size[1] = c2_i14 + 1;
  c2_g_loop_ub = c2_i14;
  for (c2_i18 = 0; c2_i18 <= c2_g_loop_ub; c2_i18++) {
    c2_bname_data[c2_i18] = c2_d_obj.Vector[c2_i18];
  }

  c2_b_st.site = &c2_ke_emlrtRSI;
  for (c2_i19 = 0; c2_i19 < 2; c2_i19++) {
    c2_c_bname_size[c2_i19] = c2_bname_size[c2_i19];
  }

  c2_bid2 = c2_RigidBodyTree_findBodyIndexByJointName(chartInstance, &c2_b_st,
    c2_b_obj, c2_bname_data, c2_c_bname_size);
  if (c2_bid2 > 0.0) {
    c2_b_st.site = &c2_le_emlrtRSI;
    c2_k_obj = c2_b_bodyin;
    if (c2_k_obj->Index == 0.0) {
      c2_c_st.site = &c2_af_emlrtRSI;
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_k_y = NULL;
      sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_l_y = NULL;
      sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_k_y, 14, c2_l_y)));
    }

    c2_b_jnt = c2_k_obj->JointInternal;
    c2_b_st.site = &c2_le_emlrtRSI;
    c2_l_obj = c2_b_jnt;
    c2_c_st.site = &c2_jd_emlrtRSI;
    c2_d_obj = c2_l_obj->NameInternal;
    c2_d6 = c2_d_obj.Length;
    c2_b6 = (c2_d6 < 1.0);
    if (c2_b6) {
      c2_i22 = -1;
    } else {
      if (c2_d6 != (real_T)(int32_T)muDoubleScalarFloor(c2_d6)) {
        emlrtIntegerCheckR2012b(c2_d6, &c2_c_emlrtDCI, &c2_c_st);
      }

      c2_i23 = (int32_T)c2_d6;
      if ((c2_i23 < 1) || (c2_i23 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i23, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
      }

      c2_i22 = c2_i23 - 1;
    }

    c2_bname_size[1] = c2_i22 + 1;
    c2_h_loop_ub = c2_i22;
    for (c2_i25 = 0; c2_i25 <= c2_h_loop_ub; c2_i25++) {
      c2_bname_data[c2_i25] = c2_d_obj.Vector[c2_i25];
    }

    c2_b_st.site = &c2_le_emlrtRSI;
    c2_m_y = NULL;
    sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv17, 10, 0U, 1, 0U, 2, 1, 52),
                  false);
    c2_n_y = NULL;
    sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv17, 10, 0U, 1, 0U, 2, 1, 52),
                  false);
    c2_o_y = NULL;
    sf_mex_assign(&c2_o_y, sf_mex_create("y", &c2_bname_data, 10, 0U, 1, 0U, 2,
      1, c2_bname_size[1]), false);
    sf_mex_call(&c2_b_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_m_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_n_y, 14, c2_o_y)));
  }

  c2_index = c2_b_obj->NumBodies + 1.0;
  c2_b_st.site = &c2_se_emlrtRSI;
  c2_body = c2_RigidBody_copy(chartInstance, &c2_b_st, c2_b_bodyin,
    &c2_b_iobj_0[0], &c2_b_iobj_1[0], c2_b_iobj_2);
  for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
    c2_body->ChildrenIndices[c2_i20] = 0.0;
  }

  if (c2_index != (real_T)(int32_T)muDoubleScalarFloor(c2_index)) {
    emlrtIntegerCheckR2012b(c2_index, &c2_o_emlrtDCI, &c2_st);
  }

  c2_i21 = (int32_T)c2_index - 1;
  if ((c2_i21 < 0) || (c2_i21 > 1)) {
    emlrtDynamicBoundsCheckR2012b(c2_i21, 0, 1, &c2_t_emlrtBCI, &c2_st);
  }

  c2_b_obj->Bodies[c2_i21] = c2_body;
  c2_body->Index = c2_index;
  c2_body->ParentIndex = c2_pid;
  if (c2_pid > 0.0) {
    c2_i24 = (int32_T)c2_pid - 1;
    if ((c2_i24 < 0) || (c2_i24 > 1)) {
      emlrtDynamicBoundsCheckR2012b(c2_i24, 0, 1, &c2_v_emlrtBCI, &c2_st);
    }

    c2_parent = c2_b_obj->Bodies[c2_i24];
  } else {
    c2_parent = &c2_b_obj->Base;
  }

  if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index)) {
    emlrtIntegerCheckR2012b(c2_body->Index, &c2_t_emlrtDCI, &c2_st);
  }

  c2_i26 = (int32_T)c2_body->Index;
  if ((c2_i26 < 1) || (c2_i26 > 2)) {
    emlrtDynamicBoundsCheckR2012b(c2_i26, 1, 2, &c2_w_emlrtBCI, &c2_st);
  }

  c2_parent->ChildrenIndices[c2_i26 - 1] = 1.0;
  c2_body->JointInternal->InTree = true;
  c2_b_obj->NumBodies++;
  c2_b_st.site = &c2_me_emlrtRSI;
  c2_m_obj = c2_body;
  if (c2_m_obj->Index == 0.0) {
    c2_c_st.site = &c2_af_emlrtRSI;
    c2_p_y = NULL;
    sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_q_y = NULL;
    sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_r_y = NULL;
    sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_p_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_q_y, 14, c2_r_y)));
  }

  c2_c_jnt = c2_m_obj->JointInternal;
  c2_b_st.site = &c2_me_emlrtRSI;
  c2_n_obj = c2_c_jnt;
  c2_c_st.site = &c2_gb_emlrtRSI;
  c2_d_obj = c2_n_obj->TypeInternal;
  c2_d7 = c2_d_obj.Length;
  c2_b7 = (c2_d7 < 1.0);
  if (c2_b7) {
    c2_i27 = -1;
  } else {
    if (c2_d7 != (real_T)(int32_T)muDoubleScalarFloor(c2_d7)) {
      emlrtIntegerCheckR2012b(c2_d7, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i28 = (int32_T)c2_d7;
    if ((c2_i28 < 1) || (c2_i28 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i28, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i27 = c2_i28 - 1;
  }

  c2_bname_size[1] = c2_i27 + 1;
  c2_i_loop_ub = c2_i27;
  for (c2_i29 = 0; c2_i29 <= c2_i_loop_ub; c2_i29++) {
    c2_bname_data[c2_i29] = c2_d_obj.Vector[c2_i29];
  }

  c2_bool = false;
  c2_varargin_1_size[1] = c2_bname_size[1];
  c2_remainingDimsA = c2_varargin_1_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg2 = 0;
      if (c2_kstr - 1 < 5) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_bname_data[c2_b_kstr] != c2_b_cv4[c2_b_kstr]) {
          c2_exitg2 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg2 = 1;
      }
    } while (c2_exitg2 == 0);
  }

  if (!c2_bool) {
    c2_b_obj->NumNonFixedBodies++;
    c2_b_st.site = &c2_ne_emlrtRSI;
    c2_o_obj = c2_body;
    if (c2_o_obj->Index == 0.0) {
      c2_c_st.site = &c2_af_emlrtRSI;
      c2_s_y = NULL;
      sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_t_y = NULL;
      sf_mex_assign(&c2_t_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_u_y = NULL;
      sf_mex_assign(&c2_u_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_s_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_t_y, 14, c2_u_y)));
    }

    c2_d_jnt = c2_o_obj->JointInternal;
    if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index))
    {
      emlrtIntegerCheckR2012b(c2_body->Index, &c2_p_emlrtDCI, &c2_st);
    }

    c2_i32 = (int32_T)c2_body->Index;
    if ((c2_i32 < 1) || (c2_i32 > 2)) {
      emlrtDynamicBoundsCheckR2012b(c2_i32, 1, 2, &c2_p_emlrtBCI, &c2_st);
    }

    c2_c_body = c2_i32 - 1;
    c2_b_obj->PositionDoFMap[c2_c_body] = c2_b_obj->PositionNumber + 1.0;
    c2_b_obj->PositionDoFMap[2 + c2_c_body] = c2_b_obj->PositionNumber +
      c2_d_jnt->PositionNumber;
    c2_b_st.site = &c2_oe_emlrtRSI;
    c2_p_obj = c2_body;
    if (c2_p_obj->Index == 0.0) {
      c2_c_st.site = &c2_af_emlrtRSI;
      c2_v_y = NULL;
      sf_mex_assign(&c2_v_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_w_y = NULL;
      sf_mex_assign(&c2_w_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_y_y = NULL;
      sf_mex_assign(&c2_y_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_v_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_w_y, 14, c2_y_y)));
    }

    c2_e_jnt = c2_p_obj->JointInternal;
    if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index))
    {
      emlrtIntegerCheckR2012b(c2_body->Index, &c2_q_emlrtDCI, &c2_st);
    }

    c2_i35 = (int32_T)c2_body->Index;
    if ((c2_i35 < 1) || (c2_i35 > 2)) {
      emlrtDynamicBoundsCheckR2012b(c2_i35, 1, 2, &c2_q_emlrtBCI, &c2_st);
    }

    c2_e_body = c2_i35 - 1;
    c2_b_obj->VelocityDoFMap[c2_e_body] = c2_b_obj->VelocityNumber + 1.0;
    c2_b_obj->VelocityDoFMap[2 + c2_e_body] = c2_b_obj->VelocityNumber +
      c2_e_jnt->VelocityNumber;
  } else {
    if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index))
    {
      emlrtIntegerCheckR2012b(c2_body->Index, &c2_r_emlrtDCI, &c2_st);
    }

    c2_i30 = (int32_T)c2_body->Index;
    if ((c2_i30 < 1) || (c2_i30 > 2)) {
      emlrtDynamicBoundsCheckR2012b(c2_i30, 1, 2, &c2_r_emlrtBCI, &c2_st);
    }

    c2_b_body = c2_i30 - 1;
    for (c2_i31 = 0; c2_i31 < 2; c2_i31++) {
      c2_b_obj->PositionDoFMap[c2_b_body + (c2_i31 << 1)] = 0.0 - (real_T)c2_i31;
    }

    if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index))
    {
      emlrtIntegerCheckR2012b(c2_body->Index, &c2_s_emlrtDCI, &c2_st);
    }

    c2_i33 = (int32_T)c2_body->Index;
    if ((c2_i33 < 1) || (c2_i33 > 2)) {
      emlrtDynamicBoundsCheckR2012b(c2_i33, 1, 2, &c2_s_emlrtBCI, &c2_st);
    }

    c2_d_body = c2_i33 - 1;
    for (c2_i34 = 0; c2_i34 < 2; c2_i34++) {
      c2_b_obj->VelocityDoFMap[c2_d_body + (c2_i34 << 1)] = 0.0 - (real_T)c2_i34;
    }
  }

  c2_b_st.site = &c2_pe_emlrtRSI;
  c2_q_obj = c2_body;
  if (c2_q_obj->Index == 0.0) {
    c2_c_st.site = &c2_af_emlrtRSI;
    c2_x_y = NULL;
    sf_mex_assign(&c2_x_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_ab_y = NULL;
    sf_mex_assign(&c2_ab_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_bb_y = NULL;
    sf_mex_assign(&c2_bb_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_x_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_ab_y, 14, c2_bb_y)));
  }

  c2_f_jnt = c2_q_obj->JointInternal;
  c2_b_obj->PositionNumber += c2_f_jnt->PositionNumber;
  c2_b_st.site = &c2_qe_emlrtRSI;
  c2_r_obj = c2_body;
  if (c2_r_obj->Index == 0.0) {
    c2_c_st.site = &c2_af_emlrtRSI;
    c2_cb_y = NULL;
    sf_mex_assign(&c2_cb_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_db_y = NULL;
    sf_mex_assign(&c2_db_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_eb_y = NULL;
    sf_mex_assign(&c2_eb_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_cb_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_db_y, 14, c2_eb_y)));
  }

  c2_g_jnt = c2_r_obj->JointInternal;
  c2_b_obj->VelocityNumber += c2_g_jnt->VelocityNumber;
  c2_b_st.site = &c2_re_emlrtRSI;
  c2_s_obj = c2_b_obj;
  c2_s_obj->VisualizationInfo.IsMaxReachUpToDate = false;
}

static boolean_T c2_b_strcmp(SFc2_Modele_3DInstanceStruct *chartInstance, char_T
  c2_a_data[], int32_T c2_a_size[2], char_T c2_b_data[], int32_T c2_b_size[2])
{
  int32_T c2_x_size[2];
  int32_T c2_b_kstr;
  int32_T c2_b_nb;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_kstr;
  int32_T c2_nb;
  int32_T c2_ns;
  int32_T c2_remainingDimsA;
  int32_T c2_remainingDimsB;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_bool;
  boolean_T c2_guard1;
  (void)chartInstance;
  c2_bool = false;
  c2_nb = c2_b_size[1];
  c2_b = (c2_a_size[1] == 0);
  c2_guard1 = false;
  if (c2_b) {
    c2_b1 = (c2_b_size[1] == 0);
    if (c2_b1) {
      c2_bool = true;
    } else {
      c2_guard1 = true;
    }
  } else {
    c2_guard1 = true;
  }

  if (c2_guard1) {
    c2_x_size[1] = c2_a_size[1];
    c2_remainingDimsA = c2_x_size[1];
    c2_remainingDimsB = c2_b_size[1];
    if (c2_remainingDimsA != c2_remainingDimsB) {
    } else {
      c2_b_nb = c2_nb;
      c2_ns = c2_b_nb;
      c2_i = (uint8_T)c2_ns - 1;
      c2_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_kstr - 1 <= c2_i) {
          c2_b_kstr = c2_kstr - 1;
          if (c2_a_data[c2_b_kstr] != c2_b_data[c2_b_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_kstr++;
          }
        } else {
          c2_bool = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }
  }

  return c2_bool;
}

static real_T c2_RigidBodyTree_validateInputBodyName
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj)
{
  static char_T c2_b_cv[4] = { 'b', 'a', 's', 'e' };

  static char_T c2_b_cv1[4] = { 'b', 'a', 's', 'e' };

  c2_robotics_manip_internal_CharacterVector c2_d_obj;
  c2_robotics_manip_internal_RigidBody *c2_c_obj;
  c2_robotics_manip_internal_RigidBody *c2_e_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_bid;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  int32_T c2_bname_size[2];
  int32_T c2_x_size[2];
  int32_T c2_b_i;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsA;
  int32_T c2_c_kstr;
  int32_T c2_d_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_bname_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b_bool;
  boolean_T c2_bool;
  boolean_T c2_exitg2;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_xe_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_bid = -1.0;
  c2_b_st.site = &c2_ve_emlrtRSI;
  c2_c_obj = &c2_b_obj->Base;
  c2_c_st.site = &c2_te_emlrtRSI;
  c2_d_obj = c2_c_obj->NameInternal;
  c2_d = c2_d_obj.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i1 = (int32_T)c2_d;
    if ((c2_i1 < 1) || (c2_i1 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i = c2_i1 - 1;
  }

  c2_bname_size[1] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_bname_data[c2_i2] = c2_d_obj.Vector[c2_i2];
  }

  c2_bool = false;
  c2_x_size[1] = c2_bname_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 4) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 4) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_bname_data[c2_b_kstr] != c2_b_cv[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_bool) {
    c2_bid = 0.0;
  } else {
    c2_d1 = c2_b_obj->NumBodies;
    c2_i3 = (int32_T)c2_d1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d1, mxDOUBLE_CLASS, c2_i3,
      &c2_ne_emlrtRTEI, &c2_st);
    c2_b_i = 0;
    c2_exitg2 = false;
    while ((!c2_exitg2) && (c2_b_i <= c2_i3 - 1)) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_b_st.site = &c2_we_emlrtRSI;
      c2_i4 = (int32_T)c2_c_i - 1;
      if ((c2_i4 < 0) || (c2_i4 > 1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 0, 1, &c2_u_emlrtBCI, &c2_b_st);
      }

      c2_e_obj = c2_b_obj->Bodies[c2_i4];
      c2_c_st.site = &c2_te_emlrtRSI;
      c2_d_obj = c2_e_obj->NameInternal;
      c2_d2 = c2_d_obj.Length;
      c2_b1 = (c2_d2 < 1.0);
      if (c2_b1) {
        c2_i5 = -1;
      } else {
        if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
          emlrtIntegerCheckR2012b(c2_d2, &c2_c_emlrtDCI, &c2_c_st);
        }

        c2_i6 = (int32_T)c2_d2;
        if ((c2_i6 < 1) || (c2_i6 > 200)) {
          emlrtDynamicBoundsCheckR2012b(c2_i6, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
        }

        c2_i5 = c2_i6 - 1;
      }

      c2_bname_size[1] = c2_i5 + 1;
      c2_b_loop_ub = c2_i5;
      for (c2_i7 = 0; c2_i7 <= c2_b_loop_ub; c2_i7++) {
        c2_bname_data[c2_i7] = c2_d_obj.Vector[c2_i7];
      }

      c2_b_bool = false;
      c2_x_size[1] = c2_bname_size[1];
      c2_b_remainingDimsA = c2_x_size[1];
      if (c2_b_remainingDimsA != 4) {
      } else {
        c2_c_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_c_kstr - 1 < 4) {
            c2_d_kstr = c2_c_kstr - 1;
            if (c2_bname_data[c2_d_kstr] != c2_b_cv[c2_d_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_c_kstr++;
            }
          } else {
            c2_b_bool = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_b_bool) {
        c2_bid = c2_c_i;
        c2_exitg2 = true;
      } else {
        c2_b_i++;
      }
    }
  }

  if (c2_bid == -1.0) {
    c2_st.site = &c2_ye_emlrtRSI;
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv19, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv19, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c2_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  return c2_bid;
}

static real_T c2_RigidBodyTree_findBodyIndexByJointName
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj, char_T c2_jointname_data[],
   int32_T c2_jointname_size[2])
{
  static char_T c2_b_cv[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'J', 'o', 'i',
    'n', 't', 'N', 'a', 'm', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c2_b_cv1[9] = { 'j', 'o', 'i', 'n', 't', 'n', 'a', 'm', 'e' };

  static char_T c2_b_cv2[5] = { 'J', 'o', 'i', 'n', 't' };

  c2_rigidBodyJoint *c2_c_obj;
  c2_rigidBodyJoint *c2_jnt;
  c2_robotics_manip_internal_CharacterVector c2_d_obj;
  c2_robotics_manip_internal_RigidBody *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_bid;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  int32_T c2_nm_size[2];
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_loop_ub;
  char_T c2_nm_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_exitg1;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_bid = -1.0;
  c2_st.site = &c2_bf_emlrtRSI;
  c2_b_st.site = &c2_oc_emlrtRSI;
  c2_b = (c2_jointname_size[1] == 0);
  if (c2_b) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv13, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  c2_d = c2_obj->NumBodies;
  c2_i = (int32_T)c2_d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d, mxDOUBLE_CLASS, c2_i,
    &c2_oe_emlrtRTEI, (emlrtConstCTX)c2_sp);
  c2_b_i = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_b_i <= c2_i - 1)) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    c2_st.site = &c2_cf_emlrtRSI;
    c2_i1 = (int32_T)c2_c_i - 1;
    if ((c2_i1 < 0) || (c2_i1 > 1)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 0, 1, &c2_x_emlrtBCI, &c2_st);
    }

    c2_b_obj = c2_obj->Bodies[c2_i1];
    if (c2_b_obj->Index == 0.0) {
      c2_b_st.site = &c2_af_emlrtRSI;
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c2_b_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14, c2_f_y)));
    }

    c2_jnt = c2_b_obj->JointInternal;
    c2_st.site = &c2_cf_emlrtRSI;
    c2_c_obj = c2_jnt;
    c2_b_st.site = &c2_jd_emlrtRSI;
    c2_d_obj = c2_c_obj->NameInternal;
    c2_d1 = c2_d_obj.Length;
    c2_b1 = (c2_d1 < 1.0);
    if (c2_b1) {
      c2_i2 = -1;
    } else {
      if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
        emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_b_st);
      }

      c2_i3 = (int32_T)c2_d1;
      if ((c2_i3 < 1) || (c2_i3 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i3, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
      }

      c2_i2 = c2_i3 - 1;
    }

    c2_nm_size[0] = 1;
    c2_nm_size[1] = c2_i2 + 1;
    c2_loop_ub = c2_i2;
    for (c2_i4 = 0; c2_i4 <= c2_loop_ub; c2_i4++) {
      c2_nm_data[c2_i4] = c2_d_obj.Vector[c2_i4];
    }

    if (c2_b_strcmp(chartInstance, c2_nm_data, c2_nm_size, c2_jointname_data,
                    c2_jointname_size)) {
      c2_bid = c2_c_i;
      c2_exitg1 = true;
    } else {
      c2_b_i++;
    }
  }

  return c2_bid;
}

static c2_robotics_manip_internal_RigidBody *c2_RigidBody_copy
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBody *c2_obj,
   c2_robotics_manip_internal_CollisionSet *c2_iobj_0, c2_rigidBodyJoint
   *c2_iobj_1, c2_robotics_manip_internal_RigidBody *c2_iobj_2)
{
  static char_T c2_b_cv[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c2_b_cv5[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv6[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv1[5] = { 'b', 'n', 'a', 'm', 'e' };

  static char_T c2_b_cv3[5] = { 'j', 'n', 'a', 'm', 'e' };

  static char_T c2_b_cv4[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv7[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv2[4] = { '_', 'j', 'n', 't' };

  void *c2_copyGeometryInternal;
  void *c2_geometryInternal;
  c2_rigidBodyJoint *c2_b_iobj_1;
  c2_rigidBodyJoint *c2_b_this;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_f_obj;
  c2_rigidBodyJoint *c2_g_obj;
  c2_rigidBodyJoint *c2_h_obj;
  c2_rigidBodyJoint *c2_i_obj;
  c2_rigidBodyJoint *c2_r1;
  c2_robotics_manip_internal_CharacterVector c2_b_obj;
  c2_robotics_manip_internal_CollisionGeometry c2_b_newObj;
  c2_robotics_manip_internal_CollisionGeometry c2_n_obj;
  c2_robotics_manip_internal_CollisionSet *c2_b_iobj_0;
  c2_robotics_manip_internal_CollisionSet *c2_c_iobj_0;
  c2_robotics_manip_internal_CollisionSet *c2_m_obj;
  c2_robotics_manip_internal_CollisionSet *c2_newObj;
  c2_robotics_manip_internal_RigidBody *c2_c_obj;
  c2_robotics_manip_internal_RigidBody *c2_d_obj;
  c2_robotics_manip_internal_RigidBody *c2_newbody;
  c2_robotics_manip_internal_RigidBody *c2_r;
  c2_robotics_manip_internal_RigidBody *c2_this;
  c2_sJfZvjZdYbIqz8zWAkASFBH c2_collisionPrimitive;
  c2_sJfZvjZdYbIqz8zWAkASFBH c2_primitive;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_I[36];
  real_T c2_l_obj[36];
  real_T c2_msubspace_data[36];
  real_T c2_localPose[16];
  real_T c2_poslim_data[14];
  real_T c2_b_I[9];
  real_T c2_k_obj[9];
  real_T c2_homepos_data[7];
  real_T c2_b_b[6];
  real_T c2_j_obj[3];
  real_T c2_meshScale[3];
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_index;
  int32_T c2_tmp_data[7];
  int32_T c2_b_jname_size[2];
  int32_T c2_b_vec_size[2];
  int32_T c2_homepos_size[2];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_iv2[2];
  int32_T c2_jname_size[2];
  int32_T c2_msubspace_size[2];
  int32_T c2_poslim_size[2];
  int32_T c2_vec_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_i;
  int32_T c2_b_itilerow;
  int32_T c2_b_jcol;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsB;
  int32_T c2_c_k;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_remainingDimsB;
  int32_T c2_d_k;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_e_k;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_k;
  int32_T c2_f_kstr;
  int32_T c2_f_loop_ub;
  int32_T c2_g_kstr;
  int32_T c2_g_loop_ub;
  int32_T c2_h_kstr;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i6;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i62;
  int32_T c2_i63;
  int32_T c2_i64;
  int32_T c2_i65;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_iacol;
  int32_T c2_ibcol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_jcol;
  int32_T c2_k;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  int32_T c2_remainingDimsB;
  char_T c2_b_vec_data[204];
  char_T c2_jname_data[204];
  char_T c2_vec_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_df_emlrtRSI;
  c2_b_obj = c2_obj->NameInternal;
  c2_d = c2_b_obj.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_st);
    }

    c2_i1 = (int32_T)c2_d;
    if ((c2_i1 < 1) || (c2_i1 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 200, &c2_e_emlrtBCI, &c2_st);
    }

    c2_i = c2_i1 - 1;
  }

  c2_vec_size[0] = 1;
  c2_vec_size[1] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_vec_data[c2_i2] = c2_b_obj.Vector[c2_i2];
  }

  c2_st.site = &c2_df_emlrtRSI;
  c2_c_obj = c2_iobj_2;
  c2_b_iobj_0 = &c2_iobj_0[0];
  c2_b_iobj_1 = &c2_iobj_1[0];
  c2_newbody = c2_c_obj;
  c2_b_st.site = &c2_w_emlrtRSI;
  c2_d_obj = c2_newbody;
  c2_newbody = c2_d_obj;
  c2_c_st.site = &c2_ab_emlrtRSI;
  c2_this = c2_newbody;
  c2_newbody = c2_this;
  c2_b_obj.Length = 200.0;
  for (c2_i3 = 0; c2_i3 < 200; c2_i3++) {
    c2_b_obj.Vector[c2_i3] = ' ';
  }

  c2_newbody->NameInternal = c2_b_obj;
  c2_b_st.site = &c2_gf_emlrtRSI;
  c2_c_st.site = &c2_oc_emlrtRSI;
  c2_b1 = (c2_vec_size[1] == 0);
  if (c2_b1) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 33),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv13, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_c_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  c2_r = c2_newbody;
  c2_b_obj = c2_newbody->NameInternal;
  c2_b_vec_size[0] = 1;
  c2_b_vec_size[1] = c2_vec_size[1];
  c2_b_loop_ub = c2_vec_size[0] * c2_vec_size[1] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_b_loop_ub; c2_i4++) {
    c2_b_vec_data[c2_i4] = c2_vec_data[c2_i4];
  }

  c2_b_st.site = &c2_hf_emlrtRSI;
  c2_b_CharacterVector_setVector(chartInstance, &c2_b_st, &c2_b_obj,
    c2_b_vec_data, c2_b_vec_size);
  c2_r->NameInternal = c2_b_obj;
  c2_jname_size[0] = 1;
  c2_jname_size[1] = c2_vec_size[1] + 4;
  c2_c_loop_ub = c2_vec_size[1] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_jname_data[c2_i5] = c2_vec_data[c2_i5];
  }

  for (c2_i6 = 0; c2_i6 < 4; c2_i6++) {
    c2_jname_data[c2_i6 + c2_vec_size[1]] = c2_b_cv2[c2_i6];
  }

  c2_b_st.site = &c2_x_emlrtRSI;
  c2_e_obj = c2_b_iobj_1;
  c2_f_obj = c2_e_obj;
  c2_f_obj->InTree = false;
  for (c2_i7 = 0; c2_i7 < 16; c2_i7++) {
    c2_f_obj->JointToParentTransform[c2_i7] = c2_dv[c2_i7];
  }

  for (c2_i8 = 0; c2_i8 < 16; c2_i8++) {
    c2_f_obj->ChildToJointTransform[c2_i8] = c2_dv[c2_i8];
  }

  for (c2_i9 = 0; c2_i9 < 14; c2_i9++) {
    c2_f_obj->PositionLimitsInternal[c2_i9] = 0.0;
  }

  for (c2_i10 = 0; c2_i10 < 7; c2_i10++) {
    c2_f_obj->HomePositionInternal[c2_i10] = 0.0;
  }

  for (c2_i11 = 0; c2_i11 < 36; c2_i11++) {
    c2_f_obj->MotionSubspaceInternal[c2_i11] = 0.0;
  }

  c2_c_st.site = &c2_kd_emlrtRSI;
  c2_d_st.site = &c2_oc_emlrtRSI;
  c2_b2 = (c2_jname_size[1] == 0);
  if (c2_b2) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv12, 10, 0U, 1, 0U, 2, 1, 38),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv13, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_d_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_d_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14, c2_f_y)));
  }

  c2_c_st.site = &c2_bb_emlrtRSI;
  c2_b_this = c2_f_obj;
  c2_f_obj = c2_b_this;
  c2_b_obj.Length = 200.0;
  for (c2_i12 = 0; c2_i12 < 200; c2_i12++) {
    c2_b_obj.Vector[c2_i12] = ' ';
  }

  c2_f_obj->NameInternal = c2_b_obj;
  c2_b_obj.Length = 200.0;
  for (c2_i13 = 0; c2_i13 < 200; c2_i13++) {
    c2_b_obj.Vector[c2_i13] = ' ';
  }

  c2_f_obj->TypeInternal = c2_b_obj;
  c2_r1 = c2_f_obj;
  c2_b_obj = c2_f_obj->NameInternal;
  c2_c_st.site = &c2_ld_emlrtRSI;
  for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
    c2_b_jname_size[c2_i14] = c2_jname_size[c2_i14];
  }

  c2_b_CharacterVector_setVector(chartInstance, &c2_c_st, &c2_b_obj,
    c2_jname_data, c2_b_jname_size);
  c2_r1->NameInternal = c2_b_obj;
  c2_c_st.site = &c2_cb_emlrtRSI;
  c2_g_obj = c2_f_obj;
  c2_b_obj = c2_g_obj->TypeInternal;
  c2_b_obj.Length = 5.0;
  for (c2_i15 = 0; c2_i15 < 5; c2_i15++) {
    c2_b_obj.Vector[c2_i15] = c2_b_cv4[c2_i15];
  }

  c2_g_obj->TypeInternal = c2_b_obj;
  c2_c_st.site = &c2_db_emlrtRSI;
  c2_h_obj = c2_f_obj;
  c2_d_st.site = &c2_gb_emlrtRSI;
  c2_b_obj = c2_h_obj->TypeInternal;
  c2_d1 = c2_b_obj.Length;
  c2_b3 = (c2_d1 < 1.0);
  if (c2_b3) {
    c2_i16 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_d_st);
    }

    c2_i17 = (int32_T)c2_d1;
    if ((c2_i17 < 1) || (c2_i17 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i17, 1, 200, &c2_e_emlrtBCI, &c2_d_st);
    }

    c2_i16 = c2_i17 - 1;
  }

  c2_vec_size[1] = c2_i16 + 1;
  c2_d_loop_ub = c2_i16;
  for (c2_i18 = 0; c2_i18 <= c2_d_loop_ub; c2_i18++) {
    c2_vec_data[c2_i18] = c2_b_obj.Vector[c2_i18];
  }

  c2_result = false;
  c2_jname_size[1] = c2_vec_size[1];
  c2_remainingDimsB = c2_jname_size[1];
  if (c2_remainingDimsB != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_b_cv5[c2_b_kstr] != c2_vec_data[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_result = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_result) {
    c2_index = 0.0;
  } else {
    c2_b_result = false;
    c2_jname_size[1] = c2_vec_size[1];
    c2_b_remainingDimsB = c2_jname_size[1];
    if (c2_b_remainingDimsB != 9) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 9) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_cv1[c2_d_kstr] != c2_vec_data[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_result = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_result) {
      c2_index = 1.0;
    } else {
      c2_c_result = false;
      c2_jname_size[1] = c2_vec_size[1];
      c2_c_remainingDimsB = c2_jname_size[1];
      if (c2_c_remainingDimsB != 8) {
      } else {
        c2_e_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_e_kstr - 1 < 8) {
            c2_f_kstr = c2_e_kstr - 1;
            if (c2_b_cv6[c2_f_kstr] != c2_vec_data[c2_f_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_e_kstr++;
            }
          } else {
            c2_c_result = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_result) {
        c2_index = 2.0;
      } else {
        c2_index = -1.0;
      }
    }
  }

  switch ((int32_T)c2_index) {
   case 0:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i19 = 0; c2_i19 < 6; c2_i19++) {
      c2_msubspace_data[c2_i19] = c2_dv5[c2_i19];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i22 = 0; c2_i22 < 2; c2_i22++) {
      c2_poslim_data[c2_i22] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c2_i22;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_f_obj->VelocityNumber = 1.0;
    c2_f_obj->PositionNumber = 1.0;
    for (c2_i26 = 0; c2_i26 < 3; c2_i26++) {
      c2_f_obj->JointAxisInternal[c2_i26] = c2_dv4[c2_i26];
    }
    break;

   case 1:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    for (c2_i20 = 0; c2_i20 < 6; c2_i20++) {
      c2_msubspace_data[c2_i20] = c2_dv3[c2_i20];
    }

    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
      c2_poslim_data[c2_i23] = -0.5 + (real_T)c2_i23;
    }

    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_f_obj->VelocityNumber = 1.0;
    c2_f_obj->PositionNumber = 1.0;
    for (c2_i27 = 0; c2_i27 < 3; c2_i27++) {
      c2_f_obj->JointAxisInternal[c2_i27] = c2_dv4[c2_i27];
    }
    break;

   case 2:
    memset(&c2_I[0], 0, 36U * sizeof(real_T));
    for (c2_k = 0; c2_k < 6; c2_k++) {
      c2_b_k = c2_k;
      c2_I[c2_b_k + 6 * c2_b_k] = 1.0;
    }

    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 6;
    for (c2_i21 = 0; c2_i21 < 36; c2_i21++) {
      c2_msubspace_data[c2_i21] = c2_I[c2_i21];
    }

    for (c2_jcol = 0; c2_jcol < 2; c2_jcol++) {
      c2_b_jcol = c2_jcol;
      c2_iacol = c2_b_jcol;
      c2_ibmat = c2_b_jcol * 3 - 1;
      for (c2_itilerow = 0; c2_itilerow < 3; c2_itilerow++) {
        c2_b_itilerow = c2_itilerow;
        c2_ibcol = c2_ibmat + c2_b_itilerow;
        c2_b_b[c2_ibcol + 1] = -5.0 + 10.0 * (real_T)c2_iacol;
      }
    }

    c2_poslim_size[0] = 7;
    c2_poslim_size[1] = 2;
    for (c2_i25 = 0; c2_i25 < 2; c2_i25++) {
      for (c2_i29 = 0; c2_i29 < 4; c2_i29++) {
        c2_poslim_data[c2_i29 + c2_poslim_size[0] * c2_i25] = rtNaN;
      }
    }

    for (c2_i28 = 0; c2_i28 < 2; c2_i28++) {
      for (c2_i30 = 0; c2_i30 < 3; c2_i30++) {
        c2_poslim_data[(c2_i30 + c2_poslim_size[0] * c2_i28) + 4] =
          c2_b_b[c2_i30 + 3 * c2_i28];
      }
    }

    c2_homepos_size[1] = 7;
    for (c2_i31 = 0; c2_i31 < 7; c2_i31++) {
      c2_homepos_data[c2_i31] = c2_dv2[c2_i31];
    }

    c2_f_obj->VelocityNumber = 6.0;
    c2_f_obj->PositionNumber = 7.0;
    for (c2_i32 = 0; c2_i32 < 3; c2_i32++) {
      c2_f_obj->JointAxisInternal[c2_i32] = rtNaN;
    }
    break;

   default:
    c2_msubspace_size[0] = 6;
    c2_msubspace_size[1] = 1;
    memset(&c2_msubspace_data[0], 0, 6U * sizeof(real_T));
    c2_poslim_size[0] = 1;
    c2_poslim_size[1] = 2;
    memset(&c2_poslim_data[0], 0, sizeof(real_T) << 1);
    c2_homepos_size[1] = 1;
    c2_homepos_data[0] = 0.0;
    c2_f_obj->VelocityNumber = 0.0;
    c2_f_obj->PositionNumber = 0.0;
    for (c2_i24 = 0; c2_i24 < 3; c2_i24++) {
      c2_f_obj->JointAxisInternal[c2_i24] = 0.0;
    }
    break;
  }

  c2_c_st.site = &c2_eb_emlrtRSI;
  c2_rigidBodyJoint_set_MotionSubspace(chartInstance, &c2_c_st, c2_f_obj,
    c2_msubspace_data, c2_msubspace_size);
  c2_c_st.site = &c2_fb_emlrtRSI;
  c2_i_obj = c2_f_obj;
  c2_d_st.site = &c2_gb_emlrtRSI;
  c2_b_obj = c2_i_obj->TypeInternal;
  c2_d2 = c2_b_obj.Length;
  c2_b4 = (c2_d2 < 1.0);
  if (c2_b4) {
    c2_i33 = -1;
  } else {
    if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
      emlrtIntegerCheckR2012b(c2_d2, &c2_c_emlrtDCI, &c2_d_st);
    }

    c2_i34 = (int32_T)c2_d2;
    if ((c2_i34 < 1) || (c2_i34 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i34, 1, 200, &c2_e_emlrtBCI, &c2_d_st);
    }

    c2_i33 = c2_i34 - 1;
  }

  c2_vec_size[1] = c2_i33 + 1;
  c2_e_loop_ub = c2_i33;
  for (c2_i35 = 0; c2_i35 <= c2_e_loop_ub; c2_i35++) {
    c2_vec_data[c2_i35] = c2_b_obj.Vector[c2_i35];
  }

  c2_bool = false;
  c2_jname_size[1] = c2_vec_size[1];
  c2_remainingDimsA = c2_jname_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_g_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_g_kstr - 1 < 5) {
        c2_h_kstr = c2_g_kstr - 1;
        if (c2_vec_data[c2_h_kstr] != c2_b_cv7[c2_h_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_g_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (!c2_bool) {
    c2_d3 = c2_f_obj->PositionNumber;
    c2_b5 = (c2_d3 < 1.0);
    if (c2_b5) {
      c2_i38 = -1;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_emlrtDCI, &c2_b_st);
      }

      c2_i40 = (int32_T)c2_d3;
      if ((c2_i40 < 1) || (c2_i40 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i40, 1, 7, &c2_c_emlrtBCI, &c2_b_st);
      }

      c2_i38 = c2_i40 - 1;
    }

    c2_tmp_size[0] = c2_i38 + 1;
    c2_f_loop_ub = c2_i38;
    for (c2_i41 = 0; c2_i41 <= c2_f_loop_ub; c2_i41++) {
      c2_tmp_data[c2_i41] = c2_i41;
    }

    c2_iv1[0] = c2_tmp_size[0];
    c2_iv1[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c2_iv1[0], 2, &c2_poslim_size[0], 2,
      &c2_emlrtECI, &c2_b_st);
    c2_iv2[0] = c2_tmp_size[0];
    for (c2_i42 = 0; c2_i42 < 2; c2_i42++) {
      c2_g_loop_ub = c2_iv2[0] - 1;
      for (c2_i44 = 0; c2_i44 <= c2_g_loop_ub; c2_i44++) {
        c2_f_obj->PositionLimitsInternal[c2_tmp_data[c2_i44] + 7 * c2_i42] =
          c2_poslim_data[c2_i44 + c2_poslim_size[0] * c2_i42];
      }
    }

    c2_d4 = c2_f_obj->PositionNumber;
    c2_b6 = (c2_d4 < 1.0);
    if (c2_b6) {
      c2_i45 = 0;
    } else {
      if (c2_d4 != (real_T)(int32_T)muDoubleScalarFloor(c2_d4)) {
        emlrtIntegerCheckR2012b(c2_d4, &c2_b_emlrtDCI, &c2_b_st);
      }

      c2_i47 = (int32_T)c2_d4;
      if ((c2_i47 < 1) || (c2_i47 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i47, 1, 7, &c2_d_emlrtBCI, &c2_b_st);
      }

      c2_i45 = c2_i47;
    }

    if (c2_i45 != c2_homepos_size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i45, c2_homepos_size[1], &c2_b_emlrtECI,
        &c2_b_st);
    }

    c2_h_loop_ub = c2_homepos_size[1] - 1;
    for (c2_i48 = 0; c2_i48 <= c2_h_loop_ub; c2_i48++) {
      c2_f_obj->HomePositionInternal[c2_i48] = c2_homepos_data[c2_i48];
    }
  } else {
    for (c2_i36 = 0; c2_i36 < 2; c2_i36++) {
      c2_iv[c2_i36] = 1 + c2_i36;
    }

    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_poslim_size[0], 2,
      &c2_c_emlrtECI, &c2_b_st);
    c2_i37 = 0;
    for (c2_i39 = 0; c2_i39 < 2; c2_i39++) {
      c2_f_obj->PositionLimitsInternal[c2_i37] = c2_poslim_data[c2_i39];
      c2_i37 += 7;
    }

    if (c2_homepos_size[1] != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, c2_homepos_size[1], &c2_d_emlrtECI,
        &c2_b_st);
    }

    c2_f_obj->HomePositionInternal[0] = c2_homepos_data[0];
  }

  c2_newbody->JointInternal = c2_f_obj;
  c2_newbody->Index = -1.0;
  c2_newbody->ParentIndex = -1.0;
  c2_newbody->MassInternal = 1.0;
  for (c2_i43 = 0; c2_i43 < 3; c2_i43++) {
    c2_newbody->CenterOfMassInternal[c2_i43] = 0.0;
  }

  memset(&c2_b_I[0], 0, 9U * sizeof(real_T));
  for (c2_c_k = 0; c2_c_k < 3; c2_c_k++) {
    c2_d_k = c2_c_k;
    c2_b_I[c2_d_k + 3 * c2_d_k] = 1.0;
  }

  for (c2_i46 = 0; c2_i46 < 9; c2_i46++) {
    c2_newbody->InertiaInternal[c2_i46] = c2_b_I[c2_i46];
  }

  memset(&c2_I[0], 0, 36U * sizeof(real_T));
  for (c2_e_k = 0; c2_e_k < 6; c2_e_k++) {
    c2_f_k = c2_e_k;
    c2_I[c2_f_k + 6 * c2_f_k] = 1.0;
  }

  for (c2_i49 = 0; c2_i49 < 36; c2_i49++) {
    c2_newbody->SpatialInertia[c2_i49] = c2_I[c2_i49];
  }

  c2_b_st.site = &c2_y_emlrtRSI;
  c2_newbody->CollisionsInternal = c2_CollisionSet_CollisionSet(chartInstance,
    &c2_b_st, c2_b_iobj_0, 0.0);
  c2_newbody->matlabCodegenIsDeleted = false;
  c2_st.site = &c2_ef_emlrtRSI;
  c2_newbody->JointInternal = c2_rigidBodyJoint_copy(chartInstance, &c2_st,
    c2_obj->JointInternal, &c2_iobj_1[1]);
  c2_newbody->MassInternal = c2_obj->MassInternal;
  for (c2_i50 = 0; c2_i50 < 3; c2_i50++) {
    c2_j_obj[c2_i50] = c2_obj->CenterOfMassInternal[c2_i50];
  }

  for (c2_i51 = 0; c2_i51 < 3; c2_i51++) {
    c2_newbody->CenterOfMassInternal[c2_i51] = c2_j_obj[c2_i51];
  }

  for (c2_i52 = 0; c2_i52 < 9; c2_i52++) {
    c2_k_obj[c2_i52] = c2_obj->InertiaInternal[c2_i52];
  }

  for (c2_i53 = 0; c2_i53 < 9; c2_i53++) {
    c2_newbody->InertiaInternal[c2_i53] = c2_k_obj[c2_i53];
  }

  for (c2_i54 = 0; c2_i54 < 36; c2_i54++) {
    c2_l_obj[c2_i54] = c2_obj->SpatialInertia[c2_i54];
  }

  for (c2_i55 = 0; c2_i55 < 36; c2_i55++) {
    c2_newbody->SpatialInertia[c2_i55] = c2_l_obj[c2_i55];
  }

  c2_st.site = &c2_ff_emlrtRSI;
  c2_m_obj = c2_obj->CollisionsInternal;
  c2_c_iobj_0 = &c2_iobj_0[1];
  c2_b_st.site = &c2_if_emlrtRSI;
  c2_newObj = c2_CollisionSet_CollisionSet(chartInstance, &c2_b_st, c2_c_iobj_0,
    c2_m_obj->MaxElements);
  c2_newObj->Size = c2_m_obj->Size;
  c2_d5 = c2_m_obj->Size;
  c2_i56 = (int32_T)c2_d5;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d5, mxDOUBLE_CLASS, c2_i56,
    &c2_pe_emlrtRTEI, &c2_st);
  for (c2_b_i = 0; c2_b_i < c2_i56; c2_b_i++) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    c2_b_st.site = &c2_jf_emlrtRSI;
    c2_i57 = c2_m_obj->CollisionGeometries.size[1] - 1;
    c2_i58 = (int32_T)c2_c_i - 1;
    if ((c2_i58 < 0) || (c2_i58 > c2_i57)) {
      emlrtDynamicBoundsCheckR2012b(c2_i58, 0, c2_i57, &c2_y_emlrtBCI, &c2_b_st);
    }

    c2_n_obj = c2_m_obj->CollisionGeometries.vector.data[c2_i58];
    c2_c_st.site = &c2_kf_emlrtRSI;
    c2_geometryInternal = c2_n_obj.CollisionPrimitive;
    c2_copyGeometryInternal = collisioncodegen_copyGeometry(c2_geometryInternal);
    c2_primitive.GeometryInternal = c2_copyGeometryInternal;
    for (c2_i59 = 0; c2_i59 < 16; c2_i59++) {
      c2_localPose[c2_i59] = c2_n_obj.LocalPose[c2_i59];
    }

    for (c2_i60 = 0; c2_i60 < 3; c2_i60++) {
      c2_meshScale[c2_i60] = c2_n_obj.MeshScale[c2_i60];
    }

    c2_c_st.site = &c2_lf_emlrtRSI;
    c2_collisionPrimitive = c2_primitive;
    c2_b_newObj.CollisionPrimitive = c2_collisionPrimitive.GeometryInternal;
    for (c2_i61 = 0; c2_i61 < 16; c2_i61++) {
      c2_b_newObj.LocalPose[c2_i61] = c2_localPose[c2_i61];
    }

    for (c2_i62 = 0; c2_i62 < 3; c2_i62++) {
      c2_b_newObj.MeshScale[c2_i62] = c2_meshScale[c2_i62];
    }

    for (c2_i63 = 0; c2_i63 < 16; c2_i63++) {
      c2_b_newObj.WorldPose[c2_i63] = c2_n_obj.WorldPose[c2_i63];
    }

    c2_i64 = c2_newObj->CollisionGeometries.size[1] - 1;
    c2_i65 = (int32_T)c2_c_i - 1;
    if ((c2_i65 < 0) || (c2_i65 > c2_i64)) {
      emlrtDynamicBoundsCheckR2012b(c2_i65, 0, c2_i64, &c2_ab_emlrtBCI, &c2_st);
    }

    c2_newObj->CollisionGeometries.vector.data[c2_i65] = c2_b_newObj;
  }

  c2_newbody->CollisionsInternal = c2_newObj;
  return c2_newbody;
}

static void c2_b_rigidBodyTree_addBody(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj,
  c2_rigidBody *c2_bodyin, c2_robotics_manip_internal_CollisionSet *c2_iobj_0,
  c2_rigidBodyJoint *c2_iobj_1, c2_robotics_manip_internal_RigidBody *c2_iobj_2)
{
  static char_T c2_b_cv[8] = { 'b', 'o', 'd', 'y', 'n', 'a', 'm', 'e' };

  static char_T c2_b_cv1[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv2[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv3[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv4[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv5[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv6[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv7[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv8[5] = { 'J', 'o', 'i', 'n', 't' };

  c2_rigidBodyJoint *c2_b_iobj_1;
  c2_rigidBodyJoint *c2_b_jnt;
  c2_rigidBodyJoint *c2_c_jnt;
  c2_rigidBodyJoint *c2_d_jnt;
  c2_rigidBodyJoint *c2_e_jnt;
  c2_rigidBodyJoint *c2_f_jnt;
  c2_rigidBodyJoint *c2_g_jnt;
  c2_rigidBodyJoint *c2_j_obj;
  c2_rigidBodyJoint *c2_jnt;
  c2_rigidBodyJoint *c2_l_obj;
  c2_rigidBodyJoint *c2_n_obj;
  c2_robotics_manip_internal_CharacterVector c2_d_obj;
  c2_robotics_manip_internal_CollisionSet *c2_b_iobj_0;
  c2_robotics_manip_internal_RigidBody *c2_b_bodyin;
  c2_robotics_manip_internal_RigidBody *c2_b_iobj_2;
  c2_robotics_manip_internal_RigidBody *c2_body;
  c2_robotics_manip_internal_RigidBody *c2_c_obj;
  c2_robotics_manip_internal_RigidBody *c2_f_obj;
  c2_robotics_manip_internal_RigidBody *c2_g_obj;
  c2_robotics_manip_internal_RigidBody *c2_h_obj;
  c2_robotics_manip_internal_RigidBody *c2_i_obj;
  c2_robotics_manip_internal_RigidBody *c2_k_obj;
  c2_robotics_manip_internal_RigidBody *c2_m_obj;
  c2_robotics_manip_internal_RigidBody *c2_o_obj;
  c2_robotics_manip_internal_RigidBody *c2_p_obj;
  c2_robotics_manip_internal_RigidBody *c2_parent;
  c2_robotics_manip_internal_RigidBody *c2_q_obj;
  c2_robotics_manip_internal_RigidBody *c2_r_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_b_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_e_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_s_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_ab_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_bb_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_cb_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_db_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_eb_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_v_y = NULL;
  const mxArray *c2_w_y = NULL;
  const mxArray *c2_x_y = NULL;
  const mxArray *c2_y = NULL;
  const mxArray *c2_y_y = NULL;
  real_T c2_bid;
  real_T c2_bid2;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_index;
  real_T c2_pid;
  int32_T c2_b_bname_size[2];
  int32_T c2_bname_size[2];
  int32_T c2_bodyname_size[2];
  int32_T c2_b_body;
  int32_T c2_b_i;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_c_body;
  int32_T c2_c_loop_ub;
  int32_T c2_d_body;
  int32_T c2_d_loop_ub;
  int32_T c2_e_body;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg2;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_bodyname_data[204];
  char_T c2_bname_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_bool;
  boolean_T c2_exitg1;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_ge_emlrtRSI;
  c2_b_obj = &c2_obj->TreeInternal;
  c2_b_bodyin = c2_bodyin->BodyInternal;
  c2_b_iobj_0 = &c2_iobj_0[0];
  c2_b_iobj_1 = &c2_iobj_1[0];
  c2_b_iobj_2 = c2_iobj_2;
  c2_b_st.site = &c2_he_emlrtRSI;
  c2_c_obj = c2_b_bodyin;
  c2_c_st.site = &c2_te_emlrtRSI;
  c2_d_obj = c2_c_obj->NameInternal;
  c2_d = c2_d_obj.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i1 = (int32_T)c2_d;
    if ((c2_i1 < 1) || (c2_i1 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i = c2_i1 - 1;
  }

  c2_bname_size[1] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_bname_data[c2_i2] = c2_d_obj.Vector[c2_i2];
  }

  c2_b_st.site = &c2_he_emlrtRSI;
  c2_e_obj = c2_b_obj;
  c2_bodyname_size[0] = 1;
  c2_bodyname_size[1] = c2_bname_size[1];
  c2_b_loop_ub = c2_bname_size[1] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_bodyname_data[c2_i3] = c2_bname_data[c2_i3];
  }

  c2_bid = -1.0;
  c2_c_st.site = &c2_ue_emlrtRSI;
  c2_d_st.site = &c2_oc_emlrtRSI;
  c2_b1 = (c2_bodyname_size[1] == 0);
  if (c2_b1) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv18, 10, 0U, 1, 0U, 2, 1, 43),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv13, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 8),
                  false);
    sf_mex_call(&c2_d_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_d_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  c2_c_st.site = &c2_ve_emlrtRSI;
  c2_f_obj = &c2_e_obj->Base;
  c2_d_st.site = &c2_te_emlrtRSI;
  c2_d_obj = c2_f_obj->NameInternal;
  c2_d1 = c2_d_obj.Length;
  c2_b2 = (c2_d1 < 1.0);
  if (c2_b2) {
    c2_i4 = -1;
  } else {
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_d_st);
    }

    c2_i5 = (int32_T)c2_d1;
    if ((c2_i5 < 1) || (c2_i5 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 200, &c2_e_emlrtBCI, &c2_d_st);
    }

    c2_i4 = c2_i5 - 1;
  }

  c2_bname_size[0] = 1;
  c2_bname_size[1] = c2_i4 + 1;
  c2_c_loop_ub = c2_i4;
  for (c2_i6 = 0; c2_i6 <= c2_c_loop_ub; c2_i6++) {
    c2_bname_data[c2_i6] = c2_d_obj.Vector[c2_i6];
  }

  if (c2_b_strcmp(chartInstance, c2_bname_data, c2_bname_size, c2_bodyname_data,
                  c2_bodyname_size)) {
    c2_bid = 0.0;
  } else {
    c2_d2 = c2_e_obj->NumBodies;
    c2_i7 = (int32_T)c2_d2;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d2, mxDOUBLE_CLASS, c2_i7,
      &c2_ne_emlrtRTEI, &c2_b_st);
    c2_b_i = 0;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_i <= c2_i7 - 1)) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_c_st.site = &c2_we_emlrtRSI;
      c2_i8 = (int32_T)c2_c_i - 1;
      if ((c2_i8 < 0) || (c2_i8 > 1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 0, 1, &c2_u_emlrtBCI, &c2_c_st);
      }

      c2_i_obj = c2_e_obj->Bodies[c2_i8];
      c2_d_st.site = &c2_te_emlrtRSI;
      c2_d_obj = c2_i_obj->NameInternal;
      c2_d4 = c2_d_obj.Length;
      c2_b4 = (c2_d4 < 1.0);
      if (c2_b4) {
        c2_i12 = -1;
      } else {
        if (c2_d4 != (real_T)(int32_T)muDoubleScalarFloor(c2_d4)) {
          emlrtIntegerCheckR2012b(c2_d4, &c2_c_emlrtDCI, &c2_d_st);
        }

        c2_i14 = (int32_T)c2_d4;
        if ((c2_i14 < 1) || (c2_i14 > 200)) {
          emlrtDynamicBoundsCheckR2012b(c2_i14, 1, 200, &c2_e_emlrtBCI, &c2_d_st);
        }

        c2_i12 = c2_i14 - 1;
      }

      c2_bname_size[0] = 1;
      c2_bname_size[1] = c2_i12 + 1;
      c2_e_loop_ub = c2_i12;
      for (c2_i16 = 0; c2_i16 <= c2_e_loop_ub; c2_i16++) {
        c2_bname_data[c2_i16] = c2_d_obj.Vector[c2_i16];
      }

      if (c2_b_strcmp(chartInstance, c2_bname_data, c2_bname_size,
                      c2_bodyname_data, c2_bodyname_size)) {
        c2_bid = c2_c_i;
        c2_exitg1 = true;
      } else {
        c2_b_i++;
      }
    }
  }

  if (c2_bid > -1.0) {
    c2_b_st.site = &c2_ie_emlrtRSI;
    c2_g_obj = c2_b_bodyin;
    c2_c_st.site = &c2_te_emlrtRSI;
    c2_d_obj = c2_g_obj->NameInternal;
    c2_d3 = c2_d_obj.Length;
    c2_b3 = (c2_d3 < 1.0);
    if (c2_b3) {
      c2_i9 = -1;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_c_emlrtDCI, &c2_c_st);
      }

      c2_i10 = (int32_T)c2_d3;
      if ((c2_i10 < 1) || (c2_i10 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
      }

      c2_i9 = c2_i10 - 1;
    }

    c2_bname_size[1] = c2_i9 + 1;
    c2_d_loop_ub = c2_i9;
    for (c2_i11 = 0; c2_i11 <= c2_d_loop_ub; c2_i11++) {
      c2_bname_data[c2_i11] = c2_d_obj.Vector[c2_i11];
    }

    c2_b_st.site = &c2_ie_emlrtRSI;
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv16, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv16, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_i_y = NULL;
    sf_mex_assign(&c2_i_y, sf_mex_create("y", &c2_bname_data, 10, 0U, 1, 0U, 2,
      1, c2_bname_size[1]), false);
    sf_mex_call(&c2_b_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_h_y, 14, c2_i_y)));
  }

  c2_b_st.site = &c2_je_emlrtRSI;
  c2_pid = c2_b_RigidBodyTree_validateInputBodyName(chartInstance, &c2_b_st,
    c2_b_obj);
  c2_b_st.site = &c2_ke_emlrtRSI;
  c2_h_obj = c2_b_bodyin;
  if (c2_h_obj->Index == 0.0) {
    c2_c_st.site = &c2_af_emlrtRSI;
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14, c2_f_y)));
  }

  c2_jnt = c2_h_obj->JointInternal;
  c2_b_st.site = &c2_ke_emlrtRSI;
  c2_j_obj = c2_jnt;
  c2_c_st.site = &c2_jd_emlrtRSI;
  c2_d_obj = c2_j_obj->NameInternal;
  c2_d5 = c2_d_obj.Length;
  c2_b5 = (c2_d5 < 1.0);
  if (c2_b5) {
    c2_i13 = -1;
  } else {
    if (c2_d5 != (real_T)(int32_T)muDoubleScalarFloor(c2_d5)) {
      emlrtIntegerCheckR2012b(c2_d5, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i15 = (int32_T)c2_d5;
    if ((c2_i15 < 1) || (c2_i15 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i13 = c2_i15 - 1;
  }

  c2_bname_size[0] = 1;
  c2_bname_size[1] = c2_i13 + 1;
  c2_f_loop_ub = c2_i13;
  for (c2_i17 = 0; c2_i17 <= c2_f_loop_ub; c2_i17++) {
    c2_bname_data[c2_i17] = c2_d_obj.Vector[c2_i17];
  }

  c2_b_st.site = &c2_ke_emlrtRSI;
  for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
    c2_b_bname_size[c2_i18] = c2_bname_size[c2_i18];
  }

  c2_bid2 = c2_RigidBodyTree_findBodyIndexByJointName(chartInstance, &c2_b_st,
    c2_b_obj, c2_bname_data, c2_b_bname_size);
  if (c2_bid2 > 0.0) {
    c2_b_st.site = &c2_le_emlrtRSI;
    c2_k_obj = c2_b_bodyin;
    if (c2_k_obj->Index == 0.0) {
      c2_c_st.site = &c2_af_emlrtRSI;
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_k_y = NULL;
      sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_l_y = NULL;
      sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_k_y, 14, c2_l_y)));
    }

    c2_b_jnt = c2_k_obj->JointInternal;
    c2_b_st.site = &c2_le_emlrtRSI;
    c2_l_obj = c2_b_jnt;
    c2_c_st.site = &c2_jd_emlrtRSI;
    c2_d_obj = c2_l_obj->NameInternal;
    c2_d6 = c2_d_obj.Length;
    c2_b6 = (c2_d6 < 1.0);
    if (c2_b6) {
      c2_i21 = -1;
    } else {
      if (c2_d6 != (real_T)(int32_T)muDoubleScalarFloor(c2_d6)) {
        emlrtIntegerCheckR2012b(c2_d6, &c2_c_emlrtDCI, &c2_c_st);
      }

      c2_i22 = (int32_T)c2_d6;
      if ((c2_i22 < 1) || (c2_i22 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i22, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
      }

      c2_i21 = c2_i22 - 1;
    }

    c2_bname_size[1] = c2_i21 + 1;
    c2_g_loop_ub = c2_i21;
    for (c2_i24 = 0; c2_i24 <= c2_g_loop_ub; c2_i24++) {
      c2_bname_data[c2_i24] = c2_d_obj.Vector[c2_i24];
    }

    c2_b_st.site = &c2_le_emlrtRSI;
    c2_m_y = NULL;
    sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv17, 10, 0U, 1, 0U, 2, 1, 52),
                  false);
    c2_n_y = NULL;
    sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv17, 10, 0U, 1, 0U, 2, 1, 52),
                  false);
    c2_o_y = NULL;
    sf_mex_assign(&c2_o_y, sf_mex_create("y", &c2_bname_data, 10, 0U, 1, 0U, 2,
      1, c2_bname_size[1]), false);
    sf_mex_call(&c2_b_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_m_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_n_y, 14, c2_o_y)));
  }

  c2_index = c2_b_obj->NumBodies + 1.0;
  c2_b_st.site = &c2_se_emlrtRSI;
  c2_body = c2_RigidBody_copy(chartInstance, &c2_b_st, c2_b_bodyin,
    &c2_b_iobj_0[0], &c2_b_iobj_1[0], c2_b_iobj_2);
  for (c2_i19 = 0; c2_i19 < 2; c2_i19++) {
    c2_body->ChildrenIndices[c2_i19] = 0.0;
  }

  if (c2_index != (real_T)(int32_T)muDoubleScalarFloor(c2_index)) {
    emlrtIntegerCheckR2012b(c2_index, &c2_o_emlrtDCI, &c2_st);
  }

  c2_i20 = (int32_T)c2_index - 1;
  if ((c2_i20 < 0) || (c2_i20 > 1)) {
    emlrtDynamicBoundsCheckR2012b(c2_i20, 0, 1, &c2_t_emlrtBCI, &c2_st);
  }

  c2_b_obj->Bodies[c2_i20] = c2_body;
  c2_body->Index = c2_index;
  c2_body->ParentIndex = c2_pid;
  if (c2_pid > 0.0) {
    c2_i23 = (int32_T)c2_pid - 1;
    if ((c2_i23 < 0) || (c2_i23 > 1)) {
      emlrtDynamicBoundsCheckR2012b(c2_i23, 0, 1, &c2_v_emlrtBCI, &c2_st);
    }

    c2_parent = c2_b_obj->Bodies[c2_i23];
  } else {
    c2_parent = &c2_b_obj->Base;
  }

  if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index)) {
    emlrtIntegerCheckR2012b(c2_body->Index, &c2_t_emlrtDCI, &c2_st);
  }

  c2_i25 = (int32_T)c2_body->Index;
  if ((c2_i25 < 1) || (c2_i25 > 2)) {
    emlrtDynamicBoundsCheckR2012b(c2_i25, 1, 2, &c2_w_emlrtBCI, &c2_st);
  }

  c2_parent->ChildrenIndices[c2_i25 - 1] = 1.0;
  c2_body->JointInternal->InTree = true;
  c2_b_obj->NumBodies++;
  c2_b_st.site = &c2_me_emlrtRSI;
  c2_m_obj = c2_body;
  if (c2_m_obj->Index == 0.0) {
    c2_c_st.site = &c2_af_emlrtRSI;
    c2_p_y = NULL;
    sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_q_y = NULL;
    sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_r_y = NULL;
    sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_p_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_q_y, 14, c2_r_y)));
  }

  c2_c_jnt = c2_m_obj->JointInternal;
  c2_b_st.site = &c2_me_emlrtRSI;
  c2_n_obj = c2_c_jnt;
  c2_c_st.site = &c2_gb_emlrtRSI;
  c2_d_obj = c2_n_obj->TypeInternal;
  c2_d7 = c2_d_obj.Length;
  c2_b7 = (c2_d7 < 1.0);
  if (c2_b7) {
    c2_i26 = -1;
  } else {
    if (c2_d7 != (real_T)(int32_T)muDoubleScalarFloor(c2_d7)) {
      emlrtIntegerCheckR2012b(c2_d7, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i27 = (int32_T)c2_d7;
    if ((c2_i27 < 1) || (c2_i27 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i26 = c2_i27 - 1;
  }

  c2_bname_size[1] = c2_i26 + 1;
  c2_h_loop_ub = c2_i26;
  for (c2_i28 = 0; c2_i28 <= c2_h_loop_ub; c2_i28++) {
    c2_bname_data[c2_i28] = c2_d_obj.Vector[c2_i28];
  }

  c2_bool = false;
  c2_bodyname_size[1] = c2_bname_size[1];
  c2_remainingDimsA = c2_bodyname_size[1];
  if (c2_remainingDimsA != 5) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg2 = 0;
      if (c2_kstr - 1 < 5) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_bname_data[c2_b_kstr] != c2_b_cv4[c2_b_kstr]) {
          c2_exitg2 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg2 = 1;
      }
    } while (c2_exitg2 == 0);
  }

  if (!c2_bool) {
    c2_b_obj->NumNonFixedBodies++;
    c2_b_st.site = &c2_ne_emlrtRSI;
    c2_o_obj = c2_body;
    if (c2_o_obj->Index == 0.0) {
      c2_c_st.site = &c2_af_emlrtRSI;
      c2_s_y = NULL;
      sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_t_y = NULL;
      sf_mex_assign(&c2_t_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_u_y = NULL;
      sf_mex_assign(&c2_u_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_s_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_t_y, 14, c2_u_y)));
    }

    c2_d_jnt = c2_o_obj->JointInternal;
    if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index))
    {
      emlrtIntegerCheckR2012b(c2_body->Index, &c2_p_emlrtDCI, &c2_st);
    }

    c2_i31 = (int32_T)c2_body->Index;
    if ((c2_i31 < 1) || (c2_i31 > 2)) {
      emlrtDynamicBoundsCheckR2012b(c2_i31, 1, 2, &c2_p_emlrtBCI, &c2_st);
    }

    c2_c_body = c2_i31 - 1;
    c2_b_obj->PositionDoFMap[c2_c_body] = c2_b_obj->PositionNumber + 1.0;
    c2_b_obj->PositionDoFMap[2 + c2_c_body] = c2_b_obj->PositionNumber +
      c2_d_jnt->PositionNumber;
    c2_b_st.site = &c2_oe_emlrtRSI;
    c2_p_obj = c2_body;
    if (c2_p_obj->Index == 0.0) {
      c2_c_st.site = &c2_af_emlrtRSI;
      c2_v_y = NULL;
      sf_mex_assign(&c2_v_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_w_y = NULL;
      sf_mex_assign(&c2_w_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                    false);
      c2_y_y = NULL;
      sf_mex_assign(&c2_y_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_v_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_w_y, 14, c2_y_y)));
    }

    c2_e_jnt = c2_p_obj->JointInternal;
    if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index))
    {
      emlrtIntegerCheckR2012b(c2_body->Index, &c2_q_emlrtDCI, &c2_st);
    }

    c2_i34 = (int32_T)c2_body->Index;
    if ((c2_i34 < 1) || (c2_i34 > 2)) {
      emlrtDynamicBoundsCheckR2012b(c2_i34, 1, 2, &c2_q_emlrtBCI, &c2_st);
    }

    c2_e_body = c2_i34 - 1;
    c2_b_obj->VelocityDoFMap[c2_e_body] = c2_b_obj->VelocityNumber + 1.0;
    c2_b_obj->VelocityDoFMap[2 + c2_e_body] = c2_b_obj->VelocityNumber +
      c2_e_jnt->VelocityNumber;
  } else {
    if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index))
    {
      emlrtIntegerCheckR2012b(c2_body->Index, &c2_r_emlrtDCI, &c2_st);
    }

    c2_i29 = (int32_T)c2_body->Index;
    if ((c2_i29 < 1) || (c2_i29 > 2)) {
      emlrtDynamicBoundsCheckR2012b(c2_i29, 1, 2, &c2_r_emlrtBCI, &c2_st);
    }

    c2_b_body = c2_i29 - 1;
    for (c2_i30 = 0; c2_i30 < 2; c2_i30++) {
      c2_b_obj->PositionDoFMap[c2_b_body + (c2_i30 << 1)] = 0.0 - (real_T)c2_i30;
    }

    if (c2_body->Index != (real_T)(int32_T)muDoubleScalarFloor(c2_body->Index))
    {
      emlrtIntegerCheckR2012b(c2_body->Index, &c2_s_emlrtDCI, &c2_st);
    }

    c2_i32 = (int32_T)c2_body->Index;
    if ((c2_i32 < 1) || (c2_i32 > 2)) {
      emlrtDynamicBoundsCheckR2012b(c2_i32, 1, 2, &c2_s_emlrtBCI, &c2_st);
    }

    c2_d_body = c2_i32 - 1;
    for (c2_i33 = 0; c2_i33 < 2; c2_i33++) {
      c2_b_obj->VelocityDoFMap[c2_d_body + (c2_i33 << 1)] = 0.0 - (real_T)c2_i33;
    }
  }

  c2_b_st.site = &c2_pe_emlrtRSI;
  c2_q_obj = c2_body;
  if (c2_q_obj->Index == 0.0) {
    c2_c_st.site = &c2_af_emlrtRSI;
    c2_x_y = NULL;
    sf_mex_assign(&c2_x_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_ab_y = NULL;
    sf_mex_assign(&c2_ab_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_bb_y = NULL;
    sf_mex_assign(&c2_bb_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_x_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_ab_y, 14, c2_bb_y)));
  }

  c2_f_jnt = c2_q_obj->JointInternal;
  c2_b_obj->PositionNumber += c2_f_jnt->PositionNumber;
  c2_b_st.site = &c2_qe_emlrtRSI;
  c2_r_obj = c2_body;
  if (c2_r_obj->Index == 0.0) {
    c2_c_st.site = &c2_af_emlrtRSI;
    c2_cb_y = NULL;
    sf_mex_assign(&c2_cb_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_db_y = NULL;
    sf_mex_assign(&c2_db_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c2_eb_y = NULL;
    sf_mex_assign(&c2_eb_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_cb_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_db_y, 14, c2_eb_y)));
  }

  c2_g_jnt = c2_r_obj->JointInternal;
  c2_b_obj->VelocityNumber += c2_g_jnt->VelocityNumber;
  c2_b_st.site = &c2_re_emlrtRSI;
  c2_s_obj = c2_b_obj;
  c2_s_obj->VisualizationInfo.IsMaxReachUpToDate = false;
}

static real_T c2_b_RigidBodyTree_validateInputBodyName
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj)
{
  static char_T c2_b_cv[8] = { 'C', 'A', 'r', 'm', 'T', 'i', 'l', 't' };

  static char_T c2_b_cv1[8] = { 'C', 'A', 'r', 'm', 'T', 'i', 'l', 't' };

  c2_robotics_manip_internal_CharacterVector c2_d_obj;
  c2_robotics_manip_internal_RigidBody *c2_c_obj;
  c2_robotics_manip_internal_RigidBody *c2_e_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_bid;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  int32_T c2_bname_size[2];
  int32_T c2_x_size[2];
  int32_T c2_b_i;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsA;
  int32_T c2_c_kstr;
  int32_T c2_d_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_bname_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b_bool;
  boolean_T c2_bool;
  boolean_T c2_exitg2;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_xe_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_bid = -1.0;
  c2_b_st.site = &c2_ve_emlrtRSI;
  c2_c_obj = &c2_b_obj->Base;
  c2_c_st.site = &c2_te_emlrtRSI;
  c2_d_obj = c2_c_obj->NameInternal;
  c2_d = c2_d_obj.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_c_st);
    }

    c2_i1 = (int32_T)c2_d;
    if ((c2_i1 < 1) || (c2_i1 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
    }

    c2_i = c2_i1 - 1;
  }

  c2_bname_size[1] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_bname_data[c2_i2] = c2_d_obj.Vector[c2_i2];
  }

  c2_bool = false;
  c2_x_size[1] = c2_bname_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_bname_data[c2_b_kstr] != c2_b_cv[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_bool) {
    c2_bid = 0.0;
  } else {
    c2_d1 = c2_b_obj->NumBodies;
    c2_i3 = (int32_T)c2_d1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d1, mxDOUBLE_CLASS, c2_i3,
      &c2_ne_emlrtRTEI, &c2_st);
    c2_b_i = 0;
    c2_exitg2 = false;
    while ((!c2_exitg2) && (c2_b_i <= c2_i3 - 1)) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_b_st.site = &c2_we_emlrtRSI;
      c2_i4 = (int32_T)c2_c_i - 1;
      if ((c2_i4 < 0) || (c2_i4 > 1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 0, 1, &c2_u_emlrtBCI, &c2_b_st);
      }

      c2_e_obj = c2_b_obj->Bodies[c2_i4];
      c2_c_st.site = &c2_te_emlrtRSI;
      c2_d_obj = c2_e_obj->NameInternal;
      c2_d2 = c2_d_obj.Length;
      c2_b1 = (c2_d2 < 1.0);
      if (c2_b1) {
        c2_i5 = -1;
      } else {
        if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
          emlrtIntegerCheckR2012b(c2_d2, &c2_c_emlrtDCI, &c2_c_st);
        }

        c2_i6 = (int32_T)c2_d2;
        if ((c2_i6 < 1) || (c2_i6 > 200)) {
          emlrtDynamicBoundsCheckR2012b(c2_i6, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
        }

        c2_i5 = c2_i6 - 1;
      }

      c2_bname_size[1] = c2_i5 + 1;
      c2_b_loop_ub = c2_i5;
      for (c2_i7 = 0; c2_i7 <= c2_b_loop_ub; c2_i7++) {
        c2_bname_data[c2_i7] = c2_d_obj.Vector[c2_i7];
      }

      c2_b_bool = false;
      c2_x_size[1] = c2_bname_size[1];
      c2_b_remainingDimsA = c2_x_size[1];
      if (c2_b_remainingDimsA != 8) {
      } else {
        c2_c_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_c_kstr - 1 < 8) {
            c2_d_kstr = c2_c_kstr - 1;
            if (c2_bname_data[c2_d_kstr] != c2_b_cv[c2_d_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_c_kstr++;
            }
          } else {
            c2_b_bool = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_b_bool) {
        c2_bid = c2_c_i;
        c2_exitg2 = true;
      } else {
        c2_b_i++;
      }
    }
  }

  if (c2_bid == -1.0) {
    c2_st.site = &c2_ye_emlrtRSI;
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv19, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv19, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 8),
                  false);
    sf_mex_call(&c2_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  return c2_bid;
}

static void c2_rigidBodyTree_homeConfiguration(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj,
  c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_Q)
{
  static c2_sb0EDBCsZRrtH46t9p8H3X c2_r = { 0.0/* JointPosition */
  };

  static char_T c2_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  c2_coder_array_boolean_T_2D c2_tile;
  c2_coder_array_sb0EDBCsZRrtH46t9p8 c2_b;
  c2_rigidBodyJoint *c2_c_obj;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_f_obj;
  c2_rigidBodyJoint *c2_g_obj;
  c2_robotics_manip_internal_CharacterVector c2_d_obj;
  c2_robotics_manip_internal_RigidBody *c2_body;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_b_obj;
  c2_sb0EDBCsZRrtH46t9p8H3X c2_x;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_y = NULL;
  real_T c2_tmp_data[7];
  real_T c2_b_x;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_k;
  real_T c2_varargin_2;
  int32_T c2_outsize[2];
  int32_T c2_tmp_size[2];
  int32_T c2_type_size[2];
  int32_T c2_x_size[2];
  int32_T c2_b_i;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsA;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_j;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_n;
  int32_T c2_remainingDimsA;
  char_T c2_type_data[200];
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_b;
  boolean_T c2_b_bool;
  boolean_T c2_bool;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_mf_emlrtRSI;
  c2_b_obj = &c2_obj->TreeInternal;
  c2_b_array_sb0EDBCsZRrtH46t9p8H3X_2D(chartInstance, &c2_b);
  c2_b_st.site = &c2_nf_emlrtRSI;
  c2_varargin_2 = c2_b_obj->NumNonFixedBodies;
  c2_c_st.site = &c2_rf_emlrtRSI;
  c2_assertValidSizeArg(chartInstance, &c2_c_st, c2_varargin_2);
  if (!(c2_varargin_2 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_varargin_2, &c2_u_emlrtDCI, &c2_b_st);
  }

  c2_d = c2_varargin_2;
  c2_array_boolean_T_2D_Constructor(chartInstance, &c2_tile);
  c2_array_boolean_T_2D_SetSize(chartInstance, &c2_b_st, &c2_tile,
    &c2_rc_emlrtRTEI, 1, (int32_T)c2_d);
  c2_loop_ub = (int32_T)c2_d - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_tile.vector.data[c2_i] = false;
  }

  c2_outsize[1] = c2_tile.size[1];
  if (c2_outsize[1] != c2_tile.size[1]) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv20, 10, 0U, 1, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c2_b_st, &c2_q_emlrtMCI, "error", 0U, 1U, 14, c2_y);
  }

  c2_array_boolean_T_2D_Destructor(chartInstance, &c2_tile);
  c2_array_sb0EDBCsZRrtH46t9p8H3X_2D(chartInstance, &c2_b_st, &c2_b,
    &c2_sc_emlrtRTEI, 1, c2_outsize[1]);
  c2_b_loop_ub = c2_outsize[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    c2_b.vector.data[c2_i1] = c2_r;
  }

  c2_array_s_dcxMVnjsLRtcxNw5c8LFlF_(chartInstance, &c2_st, c2_Q,
    &c2_tc_emlrtRTEI, 1, c2_b.size[1]);
  c2_n = c2_b.size[1];
  for (c2_j = 0; c2_j < c2_n; c2_j++) {
    c2_x = c2_b.vector.data[c2_j];
    c2_Q->vector.data[c2_j].JointName.size[0] = 1;
    c2_Q->vector.data[c2_j].JointName.size[1] = 0;
    c2_b_x = c2_x.JointPosition;
    c2_Q->vector.data[c2_j].JointPosition.size[0] = 1;
    c2_Q->vector.data[c2_j].JointPosition.size[1] = 1;
    c2_Q->vector.data[c2_j].JointPosition.data[0] = c2_b_x;
  }

  c2_c_array_sb0EDBCsZRrtH46t9p8H3X_2D(chartInstance, &c2_b);
  c2_k = 1.0;
  c2_d1 = c2_b_obj->NumBodies;
  c2_i2 = (int32_T)c2_d1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d1, mxDOUBLE_CLASS, c2_i2,
    &c2_qe_emlrtRTEI, &c2_st);
  for (c2_b_i = 0; c2_b_i < c2_i2; c2_b_i++) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    c2_i3 = (int32_T)c2_c_i - 1;
    if ((c2_i3 < 0) || (c2_i3 > 1)) {
      emlrtDynamicBoundsCheckR2012b(c2_i3, 0, 1, &c2_eb_emlrtBCI, &c2_st);
    }

    c2_body = c2_b_obj->Bodies[c2_i3];
    c2_b_st.site = &c2_of_emlrtRSI;
    c2_c_obj = c2_body->JointInternal;
    c2_c_st.site = &c2_gb_emlrtRSI;
    c2_d_obj = c2_c_obj->TypeInternal;
    c2_d2 = c2_d_obj.Length;
    c2_b_b = (c2_d2 < 1.0);
    if (c2_b_b) {
      c2_i4 = -1;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_c_emlrtDCI, &c2_c_st);
      }

      c2_i5 = (int32_T)c2_d2;
      if ((c2_i5 < 1) || (c2_i5 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
      }

      c2_i4 = c2_i5 - 1;
    }

    c2_type_size[1] = c2_i4 + 1;
    c2_c_loop_ub = c2_i4;
    for (c2_i6 = 0; c2_i6 <= c2_c_loop_ub; c2_i6++) {
      c2_type_data[c2_i6] = c2_d_obj.Vector[c2_i6];
    }

    c2_bool = false;
    c2_x_size[1] = c2_type_size[1];
    c2_remainingDimsA = c2_x_size[1];
    if (c2_remainingDimsA != 5) {
    } else {
      c2_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_kstr - 1 < 5) {
          c2_b_kstr = c2_kstr - 1;
          if (c2_type_data[c2_b_kstr] != c2_b_cv[c2_b_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_kstr++;
          }
        } else {
          c2_bool = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (!c2_bool) {
      c2_b_st.site = &c2_pf_emlrtRSI;
      c2_e_obj = c2_body->JointInternal;
      c2_c_st.site = &c2_jd_emlrtRSI;
      c2_d_obj = c2_e_obj->NameInternal;
      c2_d3 = c2_d_obj.Length;
      c2_b1 = (c2_d3 < 1.0);
      if (c2_b1) {
        c2_i7 = -1;
      } else {
        if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
          emlrtIntegerCheckR2012b(c2_d3, &c2_c_emlrtDCI, &c2_c_st);
        }

        c2_i8 = (int32_T)c2_d3;
        if ((c2_i8 < 1) || (c2_i8 > 200)) {
          emlrtDynamicBoundsCheckR2012b(c2_i8, 1, 200, &c2_e_emlrtBCI, &c2_c_st);
        }

        c2_i7 = c2_i8 - 1;
      }

      c2_type_size[1] = c2_i7 + 1;
      c2_d_loop_ub = c2_i7;
      for (c2_i9 = 0; c2_i9 <= c2_d_loop_ub; c2_i9++) {
        c2_type_data[c2_i9] = c2_d_obj.Vector[c2_i9];
      }

      if (c2_type_size[1] > 200) {
        emlrtDimSizeGeqCheckR2012b(200, c2_type_size[1], &c2_i_emlrtECI, &c2_st);
      }

      c2_i10 = c2_Q->size[1];
      c2_i11 = (int32_T)c2_k;
      if ((c2_i11 < 1) || (c2_i11 > c2_i10)) {
        emlrtDynamicBoundsCheckR2012b(c2_i11, 1, c2_i10, &c2_bb_emlrtBCI, &c2_st);
      }

      c2_d4 = (real_T)c2_i11;
      c2_Q->vector.data[(int32_T)c2_d4 - 1].JointName.size[0] = 1;
      c2_Q->vector.data[(int32_T)c2_d4 - 1].JointName.size[1] = c2_type_size[1];
      c2_e_loop_ub = c2_type_size[1] - 1;
      for (c2_i12 = 0; c2_i12 <= c2_e_loop_ub; c2_i12++) {
        c2_Q->vector.data[(int32_T)c2_d4 - 1].JointName.data[c2_i12] =
          c2_type_data[c2_i12];
      }

      c2_b_st.site = &c2_qf_emlrtRSI;
      c2_f_obj = c2_body->JointInternal;
      c2_c_st.site = &c2_sf_emlrtRSI;
      c2_g_obj = c2_f_obj;
      c2_d_st.site = &c2_gb_emlrtRSI;
      c2_d_obj = c2_g_obj->TypeInternal;
      c2_d5 = c2_d_obj.Length;
      c2_b2 = (c2_d5 < 1.0);
      if (c2_b2) {
        c2_i13 = -1;
      } else {
        if (c2_d5 != (real_T)(int32_T)muDoubleScalarFloor(c2_d5)) {
          emlrtIntegerCheckR2012b(c2_d5, &c2_c_emlrtDCI, &c2_d_st);
        }

        c2_i14 = (int32_T)c2_d5;
        if ((c2_i14 < 1) || (c2_i14 > 200)) {
          emlrtDynamicBoundsCheckR2012b(c2_i14, 1, 200, &c2_e_emlrtBCI, &c2_d_st);
        }

        c2_i13 = c2_i14 - 1;
      }

      c2_type_size[1] = c2_i13 + 1;
      c2_f_loop_ub = c2_i13;
      for (c2_i15 = 0; c2_i15 <= c2_f_loop_ub; c2_i15++) {
        c2_type_data[c2_i15] = c2_d_obj.Vector[c2_i15];
      }

      c2_b_bool = false;
      c2_x_size[1] = c2_type_size[1];
      c2_b_remainingDimsA = c2_x_size[1];
      if (c2_b_remainingDimsA != 5) {
      } else {
        c2_c_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_c_kstr - 1 < 5) {
            c2_d_kstr = c2_c_kstr - 1;
            if (c2_type_data[c2_d_kstr] != c2_b_cv[c2_d_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_c_kstr++;
            }
          } else {
            c2_b_bool = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (!c2_b_bool) {
        c2_d6 = c2_f_obj->PositionNumber;
        c2_b3 = (c2_d6 < 1.0);
        if (c2_b3) {
          c2_i16 = -1;
        } else {
          if (c2_d6 != (real_T)(int32_T)muDoubleScalarFloor(c2_d6)) {
            emlrtIntegerCheckR2012b(c2_d6, &c2_v_emlrtDCI, &c2_b_st);
          }

          c2_i18 = (int32_T)c2_d6;
          if ((c2_i18 < 1) || (c2_i18 > 7)) {
            emlrtDynamicBoundsCheckR2012b(c2_i18, 1, 7, &c2_db_emlrtBCI,
              &c2_b_st);
          }

          c2_i16 = c2_i18 - 1;
        }

        c2_tmp_size[1] = c2_i16 + 1;
        c2_g_loop_ub = c2_i16;
        for (c2_i20 = 0; c2_i20 <= c2_g_loop_ub; c2_i20++) {
          c2_tmp_data[c2_i20] = c2_f_obj->HomePositionInternal[c2_i20];
        }
      } else {
        c2_tmp_size[1] = 1;
        c2_tmp_data[0] = 0.0;
      }

      if (c2_tmp_size[1] > 7) {
        emlrtDimSizeGeqCheckR2012b(7, c2_tmp_size[1], &c2_j_emlrtECI, &c2_st);
      }

      c2_i17 = c2_Q->size[1];
      c2_i19 = (int32_T)c2_k;
      if ((c2_i19 < 1) || (c2_i19 > c2_i17)) {
        emlrtDynamicBoundsCheckR2012b(c2_i19, 1, c2_i17, &c2_cb_emlrtBCI, &c2_st);
      }

      c2_d7 = (real_T)c2_i19;
      c2_Q->vector.data[(int32_T)c2_d7 - 1].JointPosition.size[0] = 1;
      c2_Q->vector.data[(int32_T)c2_d7 - 1].JointPosition.size[1] = c2_tmp_size
        [1];
      c2_h_loop_ub = c2_tmp_size[1] - 1;
      for (c2_i21 = 0; c2_i21 <= c2_h_loop_ub; c2_i21++) {
        c2_Q->vector.data[(int32_T)c2_d7 - 1].JointPosition.data[c2_i21] =
          c2_tmp_data[c2_i21];
      }

      c2_k++;
    }
  }
}

static void c2_assertValidSizeArg(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_varargin_2)
{
  static char_T c2_b_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T c2_b_cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_arg;
  real_T c2_b_arg;
  real_T c2_b_varargin_2;
  real_T c2_n;
  real_T c2_x;
  int32_T c2_b_u;
  int32_T c2_u;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_arg = c2_varargin_2;
  if (c2_arg != muDoubleScalarFloor(c2_arg)) {
    c2_p = false;
  } else {
    c2_x = c2_arg;
    c2_b = muDoubleScalarIsInf(c2_x);
    if (c2_b) {
      c2_p = false;
    } else {
      c2_p = true;
    }
  }

  if (c2_p) {
    c2_b_arg = c2_varargin_2;
    if ((c2_b_arg < -2.147483648E+9) || (c2_b_arg > 2.147483647E+9)) {
      c2_b_p = false;
    } else {
      c2_b_p = true;
    }

    if (c2_b_p) {
      c2_b_b = true;
    } else {
      c2_b_b = false;
    }
  } else {
    c2_b_b = false;
  }

  if (!c2_b_b) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 28),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 28),
                  false);
    c2_u = MIN_int32_T;
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_u, 6, 0U, 0, 0U, 0), false);
    c2_b_u = MAX_int32_T;
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_b_u, 6, 0U, 0, 0U, 0), false);
    sf_mex_call(c2_sp, &c2_r_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 3U, 14, c2_b_y, 14, c2_c_y, 14, c2_f_y)));
  }

  c2_b_varargin_2 = c2_varargin_2;
  if (c2_b_varargin_2 <= 0.0) {
    c2_n = 0.0;
  } else {
    c2_n = c2_b_varargin_2;
  }

  if (!(c2_n <= 2.147483647E+9)) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 21),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 21),
                  false);
    sf_mex_call(c2_sp, &c2_s_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_e_y)));
  }
}

static void c2_rigidBodyTree_getTransform(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj,
  c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_varargin_1, real_T c2_T[16])
{
  c2_cell_wrap_19 c2_Ttree_data[2];
  c2_coder_array_real_T c2_qvec;
  c2_coder_array_s_dcxMVnjsLRtcxNw5c c2_b_varargin_1;
  c2_robotics_manip_internal_CharacterVector c2_f_obj;
  c2_robotics_manip_internal_RigidBody *c2_e_obj;
  c2_robotics_manip_internal_RigidBody *c2_g_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_b_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_c_obj;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_d_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_T1[16];
  real_T c2_T2[16];
  real_T c2_R[9];
  real_T c2_a[9];
  real_T c2_b_b[3];
  real_T c2_p[3];
  real_T c2_bid1;
  real_T c2_bid2;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  int32_T c2_Ttree_size[2];
  int32_T c2_bname_size[2];
  int32_T c2_x_size[2];
  int32_T c2_b_i;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsA;
  int32_T c2_c_k;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_d_k;
  int32_T c2_d_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_k;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_bname_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b_bool;
  boolean_T c2_bool;
  boolean_T c2_exitg2;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_tf_emlrtRSI;
  c2_b_obj = &c2_obj->TreeInternal;
  c2_c_array_s_dcxMVnjsLRtcxNw5c8LFlF_(chartInstance, &c2_b_varargin_1);
  c2_array_s_dcxMVnjsLRtcxNw5c8LFlF_(chartInstance, &c2_st, &c2_b_varargin_1,
    &c2_yc_emlrtRTEI, 1, c2_varargin_1->size[1]);
  c2_loop_ub = c2_varargin_1->size[0] * c2_varargin_1->size[1] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_b_varargin_1.vector.data[c2_i] = c2_varargin_1->vector.data[c2_i];
  }

  c2_array_real_T_Constructor(chartInstance, &c2_qvec);
  c2_b_st.site = &c2_uf_emlrtRSI;
  c2_RigidBodyTree_validateConfiguration(chartInstance, &c2_b_st, c2_b_obj,
    &c2_b_varargin_1, &c2_qvec);
  c2_d_array_s_dcxMVnjsLRtcxNw5c8LFlF_(chartInstance, &c2_b_varargin_1);
  c2_b_st.site = &c2_vf_emlrtRSI;
  c2_RigidBodyTree_forwardKinematics(chartInstance, &c2_b_st, c2_b_obj, &c2_qvec,
    c2_Ttree_data, c2_Ttree_size);
  c2_array_real_T_Destructor(chartInstance, &c2_qvec);
  c2_b_st.site = &c2_wf_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_c_st.site = &c2_xe_emlrtRSI;
  c2_d_obj = c2_c_obj;
  c2_bid1 = -1.0;
  c2_d_st.site = &c2_ve_emlrtRSI;
  c2_e_obj = &c2_d_obj->Base;
  c2_e_st.site = &c2_te_emlrtRSI;
  c2_f_obj = c2_e_obj->NameInternal;
  c2_d = c2_f_obj.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i1 = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_e_st);
    }

    c2_i2 = (int32_T)c2_d;
    if ((c2_i2 < 1) || (c2_i2 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i2, 1, 200, &c2_e_emlrtBCI, &c2_e_st);
    }

    c2_i1 = c2_i2 - 1;
  }

  c2_bname_size[1] = c2_i1 + 1;
  c2_b_loop_ub = c2_i1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_bname_data[c2_i3] = c2_f_obj.Vector[c2_i3];
  }

  c2_bool = false;
  c2_x_size[1] = c2_bname_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 11) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 11) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_bname_data[c2_b_kstr] != c2_cv4[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_bool) {
    c2_bid1 = 0.0;
  } else {
    c2_d1 = c2_d_obj->NumBodies;
    c2_i4 = (int32_T)c2_d1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d1, mxDOUBLE_CLASS, c2_i4,
      &c2_ne_emlrtRTEI, &c2_c_st);
    c2_b_i = 0;
    c2_exitg2 = false;
    while ((!c2_exitg2) && (c2_b_i <= c2_i4 - 1)) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_d_st.site = &c2_we_emlrtRSI;
      c2_i7 = (int32_T)c2_c_i - 1;
      if ((c2_i7 < 0) || (c2_i7 > 1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i7, 0, 1, &c2_u_emlrtBCI, &c2_d_st);
      }

      c2_g_obj = c2_d_obj->Bodies[c2_i7];
      c2_e_st.site = &c2_te_emlrtRSI;
      c2_f_obj = c2_g_obj->NameInternal;
      c2_d2 = c2_f_obj.Length;
      c2_b1 = (c2_d2 < 1.0);
      if (c2_b1) {
        c2_i16 = -1;
      } else {
        if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
          emlrtIntegerCheckR2012b(c2_d2, &c2_c_emlrtDCI, &c2_e_st);
        }

        c2_i19 = (int32_T)c2_d2;
        if ((c2_i19 < 1) || (c2_i19 > 200)) {
          emlrtDynamicBoundsCheckR2012b(c2_i19, 1, 200, &c2_e_emlrtBCI, &c2_e_st);
        }

        c2_i16 = c2_i19 - 1;
      }

      c2_bname_size[1] = c2_i16 + 1;
      c2_c_loop_ub = c2_i16;
      for (c2_i22 = 0; c2_i22 <= c2_c_loop_ub; c2_i22++) {
        c2_bname_data[c2_i22] = c2_f_obj.Vector[c2_i22];
      }

      c2_b_bool = false;
      c2_x_size[1] = c2_bname_size[1];
      c2_b_remainingDimsA = c2_x_size[1];
      if (c2_b_remainingDimsA != 11) {
      } else {
        c2_c_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_c_kstr - 1 < 11) {
            c2_d_kstr = c2_c_kstr - 1;
            if (c2_bname_data[c2_d_kstr] != c2_cv4[c2_d_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_c_kstr++;
            }
          } else {
            c2_b_bool = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_b_bool) {
        c2_bid1 = c2_c_i;
        c2_exitg2 = true;
      } else {
        c2_b_i++;
      }
    }
  }

  if (c2_bid1 == -1.0) {
    c2_c_st.site = &c2_ye_emlrtRSI;
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv19, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv19, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv4, 10, 0U, 1, 0U, 2, 1, 11),
                  false);
    sf_mex_call(&c2_c_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  if (c2_bid1 == 0.0) {
    memset(&c2_T1[0], 0, sizeof(real_T) << 4);
    for (c2_k = 0; c2_k < 4; c2_k++) {
      c2_b_k = c2_k;
      c2_T1[c2_b_k + (c2_b_k << 2)] = 1.0;
    }
  } else {
    c2_i5 = c2_Ttree_size[1] - 1;
    c2_i6 = (int32_T)c2_bid1 - 1;
    if ((c2_i6 < 0) || (c2_i6 > c2_i5)) {
      emlrtDynamicBoundsCheckR2012b(c2_i6, 0, c2_i5, &c2_fb_emlrtBCI, &c2_st);
    }

    c2_i8 = c2_i6;
    for (c2_i9 = 0; c2_i9 < 16; c2_i9++) {
      c2_T1[c2_i9] = c2_Ttree_data[c2_i8].f1[c2_i9];
    }
  }

  c2_b_st.site = &c2_xf_emlrtRSI;
  c2_bid2 = c2_RigidBodyTree_validateInputBodyName(chartInstance, &c2_b_st,
    c2_b_obj);
  if (c2_bid2 == 0.0) {
    memset(&c2_T2[0], 0, sizeof(real_T) << 4);
    for (c2_c_k = 0; c2_c_k < 4; c2_c_k++) {
      c2_d_k = c2_c_k;
      c2_T2[c2_d_k + (c2_d_k << 2)] = 1.0;
    }
  } else {
    c2_i10 = c2_Ttree_size[1] - 1;
    c2_i11 = (int32_T)c2_bid2 - 1;
    if ((c2_i11 < 0) || (c2_i11 > c2_i10)) {
      emlrtDynamicBoundsCheckR2012b(c2_i11, 0, c2_i10, &c2_gb_emlrtBCI, &c2_st);
    }

    c2_i12 = c2_i11;
    for (c2_i14 = 0; c2_i14 < 16; c2_i14++) {
      c2_T2[c2_i14] = c2_Ttree_data[c2_i12].f1[c2_i14];
    }
  }

  c2_i13 = 0;
  for (c2_i15 = 0; c2_i15 < 3; c2_i15++) {
    c2_i18 = 0;
    for (c2_i20 = 0; c2_i20 < 3; c2_i20++) {
      c2_R[c2_i20 + c2_i13] = c2_T2[c2_i18 + c2_i15];
      c2_i18 += 4;
    }

    c2_i13 += 3;
  }

  for (c2_i17 = 0; c2_i17 < 9; c2_i17++) {
    c2_a[c2_i17] = -c2_R[c2_i17];
  }

  for (c2_i21 = 0; c2_i21 < 3; c2_i21++) {
    c2_b_b[c2_i21] = c2_T2[c2_i21 + 12];
  }

  for (c2_i23 = 0; c2_i23 < 3; c2_i23++) {
    c2_p[c2_i23] = 0.0;
    c2_i26 = 0;
    for (c2_i28 = 0; c2_i28 < 3; c2_i28++) {
      c2_p[c2_i23] += c2_a[c2_i26 + c2_i23] * c2_b_b[c2_i28];
      c2_i26 += 3;
    }
  }

  c2_i24 = 0;
  c2_i25 = 0;
  for (c2_i27 = 0; c2_i27 < 3; c2_i27++) {
    for (c2_i30 = 0; c2_i30 < 3; c2_i30++) {
      c2_T2[c2_i30 + c2_i24] = c2_R[c2_i30 + c2_i25];
    }

    c2_i24 += 4;
    c2_i25 += 3;
  }

  for (c2_i29 = 0; c2_i29 < 3; c2_i29++) {
    c2_T2[c2_i29 + 12] = c2_p[c2_i29];
  }

  c2_i31 = 0;
  for (c2_i32 = 0; c2_i32 < 4; c2_i32++) {
    c2_T2[c2_i31 + 3] = c2_dv6[c2_i32];
    c2_i31 += 4;
  }

  for (c2_i33 = 0; c2_i33 < 4; c2_i33++) {
    c2_i34 = 0;
    for (c2_i35 = 0; c2_i35 < 4; c2_i35++) {
      c2_T[c2_i34 + c2_i33] = 0.0;
      c2_i36 = 0;
      for (c2_i37 = 0; c2_i37 < 4; c2_i37++) {
        c2_T[c2_i34 + c2_i33] += c2_T2[c2_i36 + c2_i33] * c2_T1[c2_i37 + c2_i34];
        c2_i36 += 4;
      }

      c2_i34 += 4;
    }
  }
}

static void c2_RigidBodyTree_validateConfiguration(SFc2_Modele_3DInstanceStruct *
  chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj,
  c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_Q, c2_coder_array_real_T *c2_qvec)
{
  static char_T c2_b_cv7[68] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
    'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i',
    'd', 'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'C', 'o', 'n', 'f', 'i',
    'g', 'S', 't', 'r', 'u', 'c', 't', 'A', 'r', 'r', 'a', 'y', 'I', 'n', 'v',
    'a', 'l', 'i', 'd', 'J', 'o', 'i', 'n', 't', 'N', 'a', 'm', 'e', 's' };

  static char_T c2_b_cv11[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c2_b_cv14[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c2_b_cv19[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'N', 'u', 'm', 'e', 'l' };

  static char_T c2_b_cv3[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'N', 'u', 'm', 'e', 'l' };

  static char_T c2_b_cv8[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a',
    't', 'i', 'o', 'n', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
    'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c2_b_cv1[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a',
    't', 'i', 'o', 'n', ':', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'N',
    'u', 'm', 'e', 'l' };

  static char_T c2_b_cv10[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a',
    't', 'i', 'o', 'n', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
    'n', 'N', 'a', 'N' };

  static char_T c2_b_cv13[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a',
    't', 'i', 'o', 'n', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i',
    'n', 'i', 't', 'e' };

  static char_T c2_b_cv17[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a',
    't', 'i', 'o', 'n', ':', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'N',
    'u', 'm', 'e', 'l' };

  static char_T c2_b_cv18[40] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'B', 'a', 'd', 'N', 'u', 'm', 'e',
    'l' };

  static char_T c2_b_cv2[40] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'B', 'a', 'd', 'N', 'u', 'm', 'e',
    'l' };

  static char_T c2_b_cv[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'n', 'u', 'm', 'e', 'l' };

  static char_T c2_b_cv16[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e',
    's', ':', 'b', 'a', 'd', 'n', 'u', 'm', 'e', 'l' };

  static char_T c2_b_cv12[5] = { 'i', 'n', 'p', 'u', 't' };

  static char_T c2_b_cv15[5] = { 'i', 'n', 'p', 'u', 't' };

  static char_T c2_b_cv20[5] = { 'i', 'n', 'p', 'u', 't' };

  static char_T c2_b_cv4[5] = { 'i', 'n', 'p', 'u', 't' };

  static char_T c2_b_cv5[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c2_b_cv6[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c2_b_cv9[5] = { 'i', 'n', 'p', 'u', 't' };

  c2_cell_20 c2_attributesMixed;
  c2_cell_21 c2_b_attributesMixed;
  c2_coder_array_int32_T_2D c2_r;
  c2_rigidBodyJoint *c2_b_obj;
  c2_rigidBodyJoint *c2_e_obj;
  c2_rigidBodyJoint *c2_jnt;
  c2_robotics_manip_internal_CharacterVector c2_c_obj;
  c2_robotics_manip_internal_RigidBody *c2_body;
  c2_robotics_manip_internal_RigidBody *c2_d_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_ab_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_bb_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_cb_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_w_y = NULL;
  const mxArray *c2_x_y = NULL;
  const mxArray *c2_y_y = NULL;
  real_T c2_qi_data[7];
  real_T c2_tmp_data[7];
  real_T c2_b_idx[2];
  real_T c2_b_j;
  real_T c2_b_k;
  real_T c2_b_v;
  real_T c2_b_x;
  real_T c2_c_i;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d10;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_d8;
  real_T c2_d9;
  real_T c2_d_k;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_idx;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_o_x;
  real_T c2_v;
  real_T c2_v_y;
  real_T c2_x;
  real_T c2_y;
  int32_T c2_qi_size[2];
  int32_T c2_type_size[2];
  int32_T c2_x_size[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_i;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_c_k;
  int32_T c2_c_loop_ub;
  int32_T c2_d_i;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_j;
  int32_T c2_k;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_type_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_bool;
  boolean_T c2_c_b;
  boolean_T c2_c_p;
  boolean_T c2_d_b;
  boolean_T c2_d_p;
  boolean_T c2_e_b;
  boolean_T c2_e_p;
  boolean_T c2_exitg2;
  boolean_T c2_f_b;
  boolean_T c2_f_p;
  boolean_T c2_g_b;
  boolean_T c2_g_p;
  boolean_T c2_h_p;
  boolean_T c2_i_p;
  boolean_T c2_j_p;
  boolean_T c2_k_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_attributesMixed.f3 = c2_obj->NumNonFixedBodies;
  c2_st.site = &c2_yf_emlrtRSI;
  c2_b_st.site = &c2_oc_emlrtRSI;
  c2_v = c2_attributesMixed.f3;
  c2_x = c2_v;
  c2_b_x = c2_x;
  c2_c_x = c2_b_x;
  c2_d_x = c2_c_x;
  c2_y = c2_d_x;
  c2_y = muDoubleScalarFloor(c2_y);
  if (c2_y == c2_b_x) {
    c2_e_x = c2_b_x;
    c2_b = muDoubleScalarIsInf(c2_e_x);
    if (!c2_b) {
      c2_p = true;
    } else {
      c2_p = false;
    }
  } else {
    c2_p = false;
  }

  c2_b_p = c2_p;
  if (c2_b_p && (c2_x >= 0.0)) {
    c2_c_p = true;
  } else {
    c2_c_p = false;
  }

  c2_d_p = c2_c_p;
  if (!c2_d_p) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 34),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1, 40),
                  false);
    sf_mex_call(&c2_b_st, &c2_t_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_d_y)));
  }

  if (!((real_T)c2_Q->size[1] == c2_v)) {
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 43),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_v, 0, 0U, 0, 0U, 0), false);
    sf_mex_call(&c2_b_st, &c2_u_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 3U, 14, c2_e_y, 14, c2_f_y, 14, c2_g_y)));
  }

  if (!(c2_obj->PositionNumber >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_obj->PositionNumber, &c2_ab_emlrtDCI,
      (emlrtConstCTX)c2_sp);
  }

  c2_d = c2_obj->PositionNumber;
  if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
    emlrtIntegerCheckR2012b(c2_d, &c2_y_emlrtDCI, (emlrtConstCTX)c2_sp);
  }

  c2_st.site = &c2_vh_emlrtRSI;
  c2_array_real_T_SetSize(chartInstance, &c2_st, c2_qvec, &c2_ad_emlrtRTEI,
    (int32_T)c2_d);
  if (!(c2_obj->PositionNumber >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_obj->PositionNumber, &c2_ab_emlrtDCI,
      (emlrtConstCTX)c2_sp);
  }

  c2_d1 = c2_obj->PositionNumber;
  if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
    emlrtIntegerCheckR2012b(c2_d1, &c2_y_emlrtDCI, (emlrtConstCTX)c2_sp);
  }

  c2_loop_ub = (int32_T)c2_d1 - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_qvec->vector.data[c2_i] = 0.0;
  }

  c2_d2 = c2_obj->NumBodies;
  c2_i1 = (int32_T)c2_d2;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d2, mxDOUBLE_CLASS, c2_i1,
    &c2_re_emlrtRTEI, (emlrtConstCTX)c2_sp);
  c2_array_int32_T_2D_Constructor(chartInstance, &c2_r);
  for (c2_b_i = 0; c2_b_i < c2_i1; c2_b_i++) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    c2_i2 = (int32_T)c2_c_i - 1;
    if ((c2_i2 < 0) || (c2_i2 > 1)) {
      emlrtDynamicBoundsCheckR2012b(c2_i2, 0, 1, &c2_lb_emlrtBCI, (emlrtConstCTX)
        c2_sp);
    }

    c2_body = c2_obj->Bodies[c2_i2];
    c2_st.site = &c2_ag_emlrtRSI;
    c2_b_obj = c2_body->JointInternal;
    c2_b_st.site = &c2_gb_emlrtRSI;
    c2_c_obj = c2_b_obj->TypeInternal;
    c2_d3 = c2_c_obj.Length;
    c2_b_b = (c2_d3 < 1.0);
    if (c2_b_b) {
      c2_i3 = -1;
    } else {
      if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
        emlrtIntegerCheckR2012b(c2_d3, &c2_c_emlrtDCI, &c2_b_st);
      }

      c2_i4 = (int32_T)c2_d3;
      if ((c2_i4 < 1) || (c2_i4 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
      }

      c2_i3 = c2_i4 - 1;
    }

    c2_type_size[1] = c2_i3 + 1;
    c2_b_loop_ub = c2_i3;
    for (c2_i5 = 0; c2_i5 <= c2_b_loop_ub; c2_i5++) {
      c2_type_data[c2_i5] = c2_c_obj.Vector[c2_i5];
    }

    c2_bool = false;
    c2_x_size[1] = c2_type_size[1];
    c2_remainingDimsA = c2_x_size[1];
    if (c2_remainingDimsA != 5) {
    } else {
      c2_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_kstr - 1 < 5) {
          c2_b_kstr = c2_kstr - 1;
          if (c2_type_data[c2_b_kstr] != c2_b_cv5[c2_b_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_kstr++;
          }
        } else {
          c2_bool = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (!c2_bool) {
      c2_st.site = &c2_bg_emlrtRSI;
      c2_d_obj = c2_body;
      if (c2_d_obj->Index == 0.0) {
        c2_b_st.site = &c2_af_emlrtRSI;
        c2_h_y = NULL;
        sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1,
          51), false);
        c2_i_y = NULL;
        sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv11, 10, 0U, 1, 0U, 2, 1,
          51), false);
        c2_j_y = NULL;
        sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1, 0U, 2, 1,
          5), false);
        sf_mex_call(&c2_b_st, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 2U, 14, c2_i_y, 14, c2_j_y)));
      }

      c2_jnt = c2_d_obj->JointInternal;
      c2_idx = -1.0;
      c2_d4 = (real_T)c2_Q->size[1];
      c2_i6 = (int32_T)c2_d4 - 1;
      c2_j = 0;
      c2_exitg2 = false;
      while ((!c2_exitg2) && (c2_j <= c2_i6)) {
        c2_b_j = (real_T)c2_j + 1.0;
        c2_st.site = &c2_cg_emlrtRSI;
        c2_e_obj = c2_jnt;
        c2_b_st.site = &c2_jd_emlrtRSI;
        c2_c_obj = c2_e_obj->NameInternal;
        c2_d5 = c2_c_obj.Length;
        c2_b1 = (c2_d5 < 1.0);
        if (c2_b1) {
          c2_i9 = -1;
        } else {
          if (c2_d5 != (real_T)(int32_T)muDoubleScalarFloor(c2_d5)) {
            emlrtIntegerCheckR2012b(c2_d5, &c2_c_emlrtDCI, &c2_b_st);
          }

          c2_i11 = (int32_T)c2_d5;
          if ((c2_i11 < 1) || (c2_i11 > 200)) {
            emlrtDynamicBoundsCheckR2012b(c2_i11, 1, 200, &c2_e_emlrtBCI,
              &c2_b_st);
          }

          c2_i9 = c2_i11 - 1;
        }

        c2_type_size[0] = 1;
        c2_type_size[1] = c2_i9 + 1;
        c2_d_loop_ub = c2_i9;
        for (c2_i12 = 0; c2_i12 <= c2_d_loop_ub; c2_i12++) {
          c2_type_data[c2_i12] = c2_c_obj.Vector[c2_i12];
        }

        c2_i13 = c2_Q->size[1];
        c2_i14 = (int32_T)c2_b_j;
        if ((c2_i14 < 1) || (c2_i14 > c2_i13)) {
          emlrtDynamicBoundsCheckR2012b(c2_i14, 1, c2_i13, &c2_mb_emlrtBCI,
            (emlrtConstCTX)c2_sp);
        }

        c2_i15 = c2_Q->size[1];
        c2_i17 = (int32_T)c2_b_j;
        if ((c2_i17 < 1) || (c2_i17 > c2_i15)) {
          emlrtDynamicBoundsCheckR2012b(c2_i17, 1, c2_i15, &c2_mb_emlrtBCI,
            (emlrtConstCTX)c2_sp);
        }

        if (c2_b_strcmp(chartInstance, c2_Q->vector.data[c2_i14 - 1].
                        JointName.data, c2_Q->vector.data[c2_i17 - 1].
                        JointName.size, c2_type_data, c2_type_size)) {
          c2_idx = c2_b_j;
          c2_exitg2 = true;
        } else {
          c2_j++;
        }
      }

      if (c2_idx == -1.0) {
        c2_st.site = &c2_dg_emlrtRSI;
        c2_k_y = NULL;
        sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1, 0U, 2, 1,
          68), false);
        c2_l_y = NULL;
        sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1, 0U, 2, 1,
          68), false);
        sf_mex_call(&c2_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                    sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_st, NULL, "message", 1U, 1U, 14, c2_l_y)));
      }

      c2_i7 = c2_Q->size[1];
      c2_i8 = (int32_T)c2_idx;
      if ((c2_i8 < 1) || (c2_i8 > c2_i7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 1, c2_i7, &c2_hb_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_d6 = (real_T)c2_i8;
      c2_qi_size[1] = c2_Q->vector.data[(int32_T)c2_d6 - 1].JointPosition.size[1];
      c2_c_loop_ub = c2_Q->vector.data[(int32_T)c2_d6 - 1].JointPosition.size[1]
        - 1;
      for (c2_i10 = 0; c2_i10 <= c2_c_loop_ub; c2_i10++) {
        c2_qi_data[c2_i10] = c2_Q->vector.data[(int32_T)c2_d6 - 1].
          JointPosition.data[c2_i10];
      }

      c2_b_attributesMixed.f7 = c2_jnt->PositionNumber;
      c2_st.site = &c2_eg_emlrtRSI;
      c2_b_st.site = &c2_oc_emlrtRSI;
      c2_b2 = (c2_qi_size[1] == 0);
      if (c2_b2) {
        c2_m_y = NULL;
        sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1, 0U, 2, 1,
          45), false);
        c2_n_y = NULL;
        sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv13, 10, 0U, 1, 0U, 2, 1,
          48), false);
        c2_o_y = NULL;
        sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_b_cv9, 10, 0U, 1, 0U, 2, 1,
          5), false);
        sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_m_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 2U, 14, c2_n_y, 14, c2_o_y)));
      }

      c2_b_st.site = &c2_oc_emlrtRSI;
      c2_e_p = true;
      c2_d7 = (real_T)c2_qi_size[1];
      c2_i16 = (int32_T)c2_d7 - 1;
      c2_k = 0;
      c2_exitg2 = false;
      while ((!c2_exitg2) && (c2_k <= c2_i16)) {
        c2_b_k = (real_T)c2_k + 1.0;
        c2_f_x = c2_qi_data[(int32_T)c2_b_k - 1];
        c2_g_x = c2_f_x;
        c2_c_b = muDoubleScalarIsNaN(c2_g_x);
        c2_f_p = !c2_c_b;
        if (c2_f_p) {
          c2_k++;
        } else {
          c2_e_p = false;
          c2_exitg2 = true;
        }
      }

      if (c2_e_p) {
        c2_b3 = true;
      } else {
        c2_b3 = false;
      }

      if (!c2_b3) {
        c2_p_y = NULL;
        sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_b_cv10, 10, 0U, 1, 0U, 2, 1,
          43), false);
        c2_q_y = NULL;
        sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_b_cv11, 10, 0U, 1, 0U, 2, 1,
          46), false);
        c2_r_y = NULL;
        sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_b_cv12, 10, 0U, 1, 0U, 2, 1,
          5), false);
        sf_mex_call(&c2_b_st, &c2_v_emlrtMCI, "error", 0U, 2U, 14, c2_p_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 2U, 14, c2_q_y, 14, c2_r_y)));
      }

      c2_b_st.site = &c2_oc_emlrtRSI;
      c2_g_p = true;
      c2_d8 = (real_T)c2_qi_size[1];
      c2_i18 = (int32_T)c2_d8 - 1;
      c2_c_k = 0;
      c2_exitg2 = false;
      while ((!c2_exitg2) && (c2_c_k <= c2_i18)) {
        c2_d_k = (real_T)c2_c_k + 1.0;
        c2_h_x = c2_qi_data[(int32_T)c2_d_k - 1];
        c2_i_x = c2_h_x;
        c2_d_b = muDoubleScalarIsInf(c2_i_x);
        c2_b5 = !c2_d_b;
        c2_j_x = c2_h_x;
        c2_e_b = muDoubleScalarIsNaN(c2_j_x);
        c2_b6 = !c2_e_b;
        c2_f_b = (c2_b5 && c2_b6);
        if (c2_f_b) {
          c2_c_k++;
        } else {
          c2_g_p = false;
          c2_exitg2 = true;
        }
      }

      if (c2_g_p) {
        c2_b4 = true;
      } else {
        c2_b4 = false;
      }

      if (!c2_b4) {
        c2_s_y = NULL;
        sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_b_cv13, 10, 0U, 1, 0U, 2, 1,
          43), false);
        c2_t_y = NULL;
        sf_mex_assign(&c2_t_y, sf_mex_create("y", c2_b_cv14, 10, 0U, 1, 0U, 2, 1,
          46), false);
        c2_u_y = NULL;
        sf_mex_assign(&c2_u_y, sf_mex_create("y", c2_b_cv15, 10, 0U, 1, 0U, 2, 1,
          5), false);
        sf_mex_call(&c2_b_st, &c2_w_emlrtMCI, "error", 0U, 2U, 14, c2_s_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 2U, 14, c2_t_y, 14, c2_u_y)));
      }

      c2_b_st.site = &c2_oc_emlrtRSI;
      c2_b_v = c2_b_attributesMixed.f7;
      c2_k_x = c2_b_v;
      c2_l_x = c2_k_x;
      c2_m_x = c2_l_x;
      c2_n_x = c2_m_x;
      c2_v_y = c2_n_x;
      c2_v_y = muDoubleScalarFloor(c2_v_y);
      if (c2_v_y == c2_l_x) {
        c2_o_x = c2_l_x;
        c2_g_b = muDoubleScalarIsInf(c2_o_x);
        if (!c2_g_b) {
          c2_h_p = true;
        } else {
          c2_h_p = false;
        }
      } else {
        c2_h_p = false;
      }

      c2_i_p = c2_h_p;
      if (c2_i_p && (c2_k_x >= 0.0)) {
        c2_j_p = true;
      } else {
        c2_j_p = false;
      }

      c2_k_p = c2_j_p;
      if (!c2_k_p) {
        c2_w_y = NULL;
        sf_mex_assign(&c2_w_y, sf_mex_create("y", c2_b_cv16, 10, 0U, 1, 0U, 2, 1,
          34), false);
        c2_y_y = NULL;
        sf_mex_assign(&c2_y_y, sf_mex_create("y", c2_b_cv18, 10, 0U, 1, 0U, 2, 1,
          40), false);
        sf_mex_call(&c2_b_st, &c2_t_emlrtMCI, "error", 0U, 2U, 14, c2_w_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_y_y)));
      }

      if (!((real_T)c2_qi_size[1] == c2_b_v)) {
        c2_x_y = NULL;
        sf_mex_assign(&c2_x_y, sf_mex_create("y", c2_b_cv17, 10, 0U, 1, 0U, 2, 1,
          43), false);
        c2_ab_y = NULL;
        sf_mex_assign(&c2_ab_y, sf_mex_create("y", c2_b_cv19, 10, 0U, 1, 0U, 2,
          1, 46), false);
        c2_bb_y = NULL;
        sf_mex_assign(&c2_bb_y, sf_mex_create("y", c2_b_cv20, 10, 0U, 1, 0U, 2,
          1, 5), false);
        c2_cb_y = NULL;
        sf_mex_assign(&c2_cb_y, sf_mex_create("y", &c2_b_v, 0, 0U, 0, 0U, 0),
                      false);
        sf_mex_call(&c2_b_st, &c2_u_emlrtMCI, "error", 0U, 2U, 14, c2_x_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 3U, 14, c2_ab_y, 14,
                      c2_bb_y, 14, c2_cb_y)));
      }

      c2_i19 = (int32_T)c2_c_i;
      if ((c2_i19 < 1) || (c2_i19 > 2)) {
        emlrtDynamicBoundsCheckR2012b(c2_i19, 1, 2, &c2_ib_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_d_i = c2_i19 - 1;
      for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
        c2_b_idx[c2_i20] = c2_obj->PositionDoFMap[c2_d_i + (c2_i20 << 1)];
      }

      c2_d9 = c2_b_idx[0];
      c2_d10 = c2_b_idx[1];
      c2_b7 = (c2_d9 > c2_d10);
      if (c2_b7) {
        c2_i21 = 0;
        c2_i22 = 0;
      } else {
        if (c2_d9 != (real_T)(int32_T)muDoubleScalarFloor(c2_d9)) {
          emlrtIntegerCheckR2012b(c2_d9, &c2_w_emlrtDCI, (emlrtConstCTX)c2_sp);
        }

        c2_i23 = c2_qvec->size[0];
        c2_i24 = (int32_T)c2_d9;
        if ((c2_i24 < 1) || (c2_i24 > c2_i23)) {
          emlrtDynamicBoundsCheckR2012b(c2_i24, 1, c2_i23, &c2_jb_emlrtBCI,
            (emlrtConstCTX)c2_sp);
        }

        c2_i21 = c2_i24 - 1;
        if (c2_d10 != (real_T)(int32_T)muDoubleScalarFloor(c2_d10)) {
          emlrtIntegerCheckR2012b(c2_d10, &c2_x_emlrtDCI, (emlrtConstCTX)c2_sp);
        }

        c2_i27 = c2_qvec->size[0];
        c2_i28 = (int32_T)c2_d10;
        if ((c2_i28 < 1) || (c2_i28 > c2_i27)) {
          emlrtDynamicBoundsCheckR2012b(c2_i28, 1, c2_i27, &c2_kb_emlrtBCI,
            (emlrtConstCTX)c2_sp);
        }

        c2_i22 = c2_i28;
      }

      c2_tmp_size[0] = c2_qi_size[1];
      c2_e_loop_ub = c2_qi_size[1] - 1;
      for (c2_i25 = 0; c2_i25 <= c2_e_loop_ub; c2_i25++) {
        c2_tmp_data[c2_i25] = c2_qi_data[c2_i25];
      }

      c2_i26 = c2_i22 - c2_i21;
      if (c2_i26 != c2_tmp_size[0]) {
        emlrtSubAssignSizeCheck1dR2017a(c2_i26, c2_tmp_size[0], &c2_m_emlrtECI,
          (emlrtConstCTX)c2_sp);
      }

      c2_st.site = &c2_wh_emlrtRSI;
      c2_array_int32_T_2D_SetSize(chartInstance, &c2_st, &c2_r, &c2_dd_emlrtRTEI,
        1, c2_i22 - c2_i21);
      c2_f_loop_ub = (c2_i22 - c2_i21) - 1;
      for (c2_i29 = 0; c2_i29 <= c2_f_loop_ub; c2_i29++) {
        c2_r.vector.data[c2_i29] = c2_i21 + c2_i29;
      }

      c2_g_loop_ub = c2_r.size[1] - 1;
      for (c2_i30 = 0; c2_i30 <= c2_g_loop_ub; c2_i30++) {
        c2_qvec->vector.data[c2_r.vector.data[c2_i30]] = c2_tmp_data[c2_i30];
      }
    }
  }

  c2_array_int32_T_2D_Destructor(chartInstance, &c2_r);
}

static void c2_RigidBodyTree_forwardKinematics(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj, c2_coder_array_real_T
  *c2_qvec, c2_cell_wrap_19 c2_Ttree_data[], int32_T c2_Ttree_size[2])
{
  static char_T c2_b_cv5[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T c2_b_cv2[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  static char_T c2_b_cv4[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x',
    'a', 'n', 'g', '2', 't', 'f', 'o', 'r', 'm', ':', 'i', 'n', 'c', 'o', 'r',
    'r', 'e', 'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T c2_b_cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n',
    'n', 'e', 'r', 'd', 'i', 'm' };

  static char_T c2_b_cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c2_b_cv3[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T c2_b_cv6[5] = { 'a', 'x', 'a', 'n', 'g' };

  static char_T c2_b_cv7[4] = { 's', 'q', 'r', 't' };

  c2_cell_22 c2_reshapes;
  c2_cell_wrap_19 c2_a[1];
  c2_cell_wrap_19 c2_r;
  c2_coder_array_real_T c2_qi;
  c2_coder_array_real_T_2D c2_q_;
  c2_rigidBodyJoint *c2_c_obj;
  c2_rigidBodyJoint *c2_d_obj;
  c2_rigidBodyJoint *c2_e_obj;
  c2_robotics_manip_internal_CharacterVector c2_f_obj;
  c2_robotics_manip_internal_RigidBody *c2_body;
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_T[16];
  real_T c2_b_a[16];
  real_T c2_b_b[16];
  real_T c2_d_y[16];
  real_T c2_d_a[9];
  real_T c2_g_b[9];
  real_T c2_tempR[9];
  real_T c2_d_q_[4];
  real_T c2_result_data[4];
  real_T c2_matrix[3];
  real_T c2_v[3];
  real_T c2_varargin_2_data[1];
  real_T c2_b_qi;
  real_T c2_b_x;
  real_T c2_c_a;
  real_T c2_c_b;
  real_T c2_c_i;
  real_T c2_c_x;
  real_T c2_cth;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d_b;
  real_T c2_d_x;
  real_T c2_e_b;
  real_T c2_e_x;
  real_T c2_f_b;
  real_T c2_index;
  real_T c2_k;
  real_T c2_n;
  real_T c2_o_y;
  real_T c2_p_y;
  real_T c2_pnum;
  real_T c2_sth;
  real_T c2_theta;
  real_T c2_u;
  real_T c2_varargin_2;
  real_T c2_vth;
  real_T c2_vx;
  real_T c2_vy;
  real_T c2_vz;
  real_T c2_x;
  int32_T c2_subsa[3];
  int32_T c2_subsb[3];
  int32_T c2_input_sizes[2];
  int32_T c2_iv[2];
  int32_T c2_outsize[2];
  int32_T c2_result_size[2];
  int32_T c2_switch_expression_size[2];
  int32_T c2_tile_size[2];
  int32_T c2_tmp_size[2];
  int32_T c2_varargin_2_size[2];
  int32_T c2_x_size[2];
  int32_T c2_b_i;
  int32_T c2_b_innerDimB;
  int32_T c2_b_jtilecol;
  int32_T c2_b_k;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_q_;
  int32_T c2_b_remainingDimsB;
  int32_T c2_b_varargin_1;
  int32_T c2_b_varargin_2;
  int32_T c2_c_k;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_q_;
  int32_T c2_c_remainingDimsB;
  int32_T c2_c_varargin_1;
  int32_T c2_c_varargin_2;
  int32_T c2_d_k;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_d_varargin_2;
  int32_T c2_e_k;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_k;
  int32_T c2_f_kstr;
  int32_T c2_f_loop_ub;
  int32_T c2_f_result;
  int32_T c2_g_k;
  int32_T c2_h_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i6;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i62;
  int32_T c2_i63;
  int32_T c2_i64;
  int32_T c2_i65;
  int32_T c2_i66;
  int32_T c2_i67;
  int32_T c2_i68;
  int32_T c2_i69;
  int32_T c2_i7;
  int32_T c2_i70;
  int32_T c2_i71;
  int32_T c2_i72;
  int32_T c2_i73;
  int32_T c2_i74;
  int32_T c2_i75;
  int32_T c2_i76;
  int32_T c2_i77;
  int32_T c2_i78;
  int32_T c2_i79;
  int32_T c2_i8;
  int32_T c2_i80;
  int32_T c2_i9;
  int32_T c2_i_k;
  int32_T c2_ia;
  int32_T c2_ibtile;
  int32_T c2_ic;
  int32_T c2_innerDimB;
  int32_T c2_j_k;
  int32_T c2_jtilecol;
  int32_T c2_k_k;
  int32_T c2_kstr;
  int32_T c2_l_k;
  int32_T c2_loop_ub;
  int32_T c2_m_k;
  int32_T c2_n_k;
  int32_T c2_ntilecols;
  int32_T c2_remainingDimsB;
  int32_T c2_varargin_1;
  int32_T c2_varargin_4;
  char_T c2_switch_expression_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b_p;
  boolean_T c2_b_result;
  boolean_T c2_c_p;
  boolean_T c2_c_result;
  boolean_T c2_d_result;
  boolean_T c2_e_result;
  boolean_T c2_innerDimOk;
  boolean_T c2_p;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_st.site = &c2_fg_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_n = c2_b_obj->NumBodies;
  if (!(c2_n <= 2.0)) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv9, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv9, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, &c2_x_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_st.site = &c2_gg_emlrtRSI;
  c2_varargin_2 = c2_n;
  for (c2_i = 0; c2_i < 16; c2_i++) {
    c2_r.f1[c2_i] = c2_dv[c2_i];
  }

  c2_a[0] = c2_r;
  c2_b_st.site = &c2_rf_emlrtRSI;
  c2_assertValidSizeArg(chartInstance, &c2_b_st, c2_varargin_2);
  if (!(c2_varargin_2 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_varargin_2, &c2_u_emlrtDCI, &c2_st);
  }

  c2_d = c2_varargin_2;
  c2_tile_size[1] = (int32_T)c2_d;
  c2_outsize[1] = c2_tile_size[1];
  if (c2_outsize[1] != c2_tile_size[1]) {
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv20, 10, 0U, 1, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c2_st, &c2_q_emlrtMCI, "error", 0U, 1U, 14, c2_c_y);
  }

  c2_tmp_size[1] = c2_outsize[1];
  c2_Ttree_size[0] = 1;
  c2_Ttree_size[1] = c2_tmp_size[1];
  if (c2_outsize[1] == 0) {
    c2_p = true;
  } else {
    c2_p = false;
  }

  if (!c2_p) {
    c2_ntilecols = c2_tile_size[1];
    c2_i1 = (uint8_T)c2_ntilecols;
    for (c2_jtilecol = 0; c2_jtilecol < c2_i1; c2_jtilecol++) {
      c2_b_jtilecol = c2_jtilecol;
      c2_ibtile = c2_b_jtilecol;
      for (c2_i3 = 0; c2_i3 < 16; c2_i3++) {
        c2_Ttree_data[c2_ibtile].f1[c2_i3] = c2_a[0].f1[c2_i3];
      }
    }
  }

  c2_k = 1.0;
  c2_i2 = (int32_T)c2_n;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_n, mxDOUBLE_CLASS, c2_i2,
    &c2_se_emlrtRTEI, (emlrtConstCTX)c2_sp);
  c2_array_real_T_Constructor(chartInstance, &c2_qi);
  c2_array_real_T_2D_Constructor(chartInstance, &c2_q_);
  for (c2_b_i = 0; c2_b_i < c2_i2; c2_b_i++) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    c2_body = c2_obj->Bodies[(int32_T)c2_c_i - 1];
    c2_pnum = c2_body->JointInternal->PositionNumber;
    c2_d1 = (c2_k + c2_pnum) - 1.0;
    c2_b = (c2_k > c2_d1);
    if (c2_b) {
      c2_i4 = 0;
      c2_i5 = 0;
    } else {
      if (c2_k != (real_T)(int32_T)muDoubleScalarFloor(c2_k)) {
        emlrtIntegerCheckR2012b(c2_k, &c2_bb_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i6 = c2_qvec->size[0];
      c2_i7 = (int32_T)c2_k;
      if ((c2_i7 < 1) || (c2_i7 > c2_i6)) {
        emlrtDynamicBoundsCheckR2012b(c2_i7, 1, c2_i6, &c2_nb_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i4 = c2_i7 - 1;
      if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
        emlrtIntegerCheckR2012b(c2_d1, &c2_cb_emlrtDCI, (emlrtConstCTX)c2_sp);
      }

      c2_i8 = c2_qvec->size[0];
      c2_i9 = (int32_T)c2_d1;
      if ((c2_i9 < 1) || (c2_i9 > c2_i8)) {
        emlrtDynamicBoundsCheckR2012b(c2_i9, 1, c2_i8, &c2_ob_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i5 = c2_i9;
    }

    c2_iv[0] = 1;
    c2_iv[1] = c2_i5 - c2_i4;
    c2_st.site = &c2_hg_emlrtRSI;
    c2_indexShapeCheck(chartInstance, &c2_st, c2_qvec->size[0], c2_iv);
    c2_st.site = &c2_hg_emlrtRSI;
    c2_array_real_T_SetSize(chartInstance, &c2_st, &c2_qi, &c2_gd_emlrtRTEI,
      c2_i5 - c2_i4);
    c2_loop_ub = (c2_i5 - c2_i4) - 1;
    for (c2_i10 = 0; c2_i10 <= c2_loop_ub; c2_i10++) {
      c2_qi.vector.data[c2_i10] = c2_qvec->vector.data[c2_i4 + c2_i10];
    }

    c2_st.site = &c2_ig_emlrtRSI;
    c2_c_obj = c2_body->JointInternal;
    for (c2_i11 = 0; c2_i11 < 16; c2_i11++) {
      c2_b_a[c2_i11] = c2_c_obj->JointToParentTransform[c2_i11];
    }

    c2_b_st.site = &c2_kg_emlrtRSI;
    c2_d_obj = c2_c_obj;
    c2_c_st.site = &c2_lg_emlrtRSI;
    c2_e_obj = c2_d_obj;
    c2_d_st.site = &c2_gb_emlrtRSI;
    c2_f_obj = c2_e_obj->TypeInternal;
    c2_d2 = c2_f_obj.Length;
    c2_b1 = (c2_d2 < 1.0);
    if (c2_b1) {
      c2_i12 = -1;
    } else {
      if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
        emlrtIntegerCheckR2012b(c2_d2, &c2_c_emlrtDCI, &c2_d_st);
      }

      c2_i13 = (int32_T)c2_d2;
      if ((c2_i13 < 1) || (c2_i13 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i13, 1, 200, &c2_e_emlrtBCI, &c2_d_st);
      }

      c2_i12 = c2_i13 - 1;
    }

    c2_switch_expression_size[1] = c2_i12 + 1;
    c2_b_loop_ub = c2_i12;
    for (c2_i14 = 0; c2_i14 <= c2_b_loop_ub; c2_i14++) {
      c2_switch_expression_data[c2_i14] = c2_f_obj.Vector[c2_i14];
    }

    c2_result = false;
    c2_x_size[1] = c2_switch_expression_size[1];
    c2_remainingDimsB = c2_x_size[1];
    if (c2_remainingDimsB != 8) {
    } else {
      c2_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_kstr - 1 < 8) {
          c2_b_kstr = c2_kstr - 1;
          if (c2_b_cv[c2_b_kstr] != c2_switch_expression_data[c2_b_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_kstr++;
          }
        } else {
          c2_result = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_result) {
      c2_index = 0.0;
    } else {
      c2_b_result = false;
      c2_x_size[1] = c2_switch_expression_size[1];
      c2_b_remainingDimsB = c2_x_size[1];
      if (c2_b_remainingDimsB != 9) {
      } else {
        c2_c_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_c_kstr - 1 < 9) {
            c2_d_kstr = c2_c_kstr - 1;
            if (c2_cv1[c2_d_kstr] != c2_switch_expression_data[c2_d_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_c_kstr++;
            }
          } else {
            c2_b_result = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_b_result) {
        c2_index = 1.0;
      } else {
        c2_c_result = false;
        c2_x_size[1] = c2_switch_expression_size[1];
        c2_c_remainingDimsB = c2_x_size[1];
        if (c2_c_remainingDimsB != 8) {
        } else {
          c2_e_kstr = 1;
          do {
            c2_exitg1 = 0;
            if (c2_e_kstr - 1 < 8) {
              c2_f_kstr = c2_e_kstr - 1;
              if (c2_b_cv3[c2_f_kstr] != c2_switch_expression_data[c2_f_kstr]) {
                c2_exitg1 = 1;
              } else {
                c2_e_kstr++;
              }
            } else {
              c2_c_result = true;
              c2_exitg1 = 1;
            }
          } while (c2_exitg1 == 0);
        }

        if (c2_c_result) {
          c2_index = 2.0;
        } else {
          c2_index = -1.0;
        }
      }
    }

    switch ((int32_T)c2_index) {
     case 0:
      c2_c_st.site = &c2_mg_emlrtRSI;
      c2_rigidBodyJoint_get_JointAxis(chartInstance, &c2_c_st, c2_d_obj, c2_v);
      c2_c_st.site = &c2_ng_emlrtRSI;
      c2_d_st.site = &c2_sg_emlrtRSI;
      c2_e_st.site = &c2_tg_emlrtRSI;
      if (c2_qi.size[0] == 1) {
        c2_b2 = true;
      } else {
        c2_d_result = (c2_qi.size[0] == 0);
        if (c2_d_result) {
          c2_b2 = true;
        } else {
          c2_b2 = false;
        }
      }

      if (!c2_b2) {
        c2_e_y = NULL;
        sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv22, 10, 0U, 1, 0U, 2, 1,
          39), false);
        c2_h_y = NULL;
        sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv22, 10, 0U, 1, 0U, 2, 1,
          39), false);
        sf_mex_call(&c2_e_st, &c2_ab_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                    sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_e_st, NULL, "message", 1U, 1U, 14, c2_h_y)));
      }

      for (c2_i26 = 0; c2_i26 < 3; c2_i26++) {
        c2_reshapes.f1[c2_i26] = c2_v[c2_i26];
      }

      c2_e_result = (c2_qi.size[0] == 0);
      if (!c2_e_result) {
        c2_f_result = 1;
      } else {
        c2_f_result = 0;
      }

      c2_input_sizes[1] = c2_f_result;
      c2_reshapes.f2.size[1] = c2_input_sizes[1];
      c2_d_loop_ub = c2_input_sizes[1] - 1;
      for (c2_i42 = 0; c2_i42 <= c2_d_loop_ub; c2_i42++) {
        c2_reshapes.f2.data[0] = c2_qi.vector.data[0];
      }

      for (c2_i48 = 0; c2_i48 < 3; c2_i48++) {
        c2_v[c2_i48] = c2_reshapes.f1[c2_i48];
      }

      c2_varargin_2_size[1] = c2_reshapes.f2.size[1];
      c2_e_loop_ub = c2_reshapes.f2.size[1] - 1;
      for (c2_i55 = 0; c2_i55 <= c2_e_loop_ub; c2_i55++) {
        c2_varargin_2_data[0] = c2_reshapes.f2.data[0];
      }

      c2_result_size[1] = 3 + c2_varargin_2_size[1];
      for (c2_i58 = 0; c2_i58 < 3; c2_i58++) {
        c2_result_data[c2_i58] = c2_v[c2_i58];
      }

      c2_f_loop_ub = c2_varargin_2_size[1] - 1;
      for (c2_i60 = 0; c2_i60 <= c2_f_loop_ub; c2_i60++) {
        c2_result_data[c2_i60 + 3] = c2_varargin_2_data[c2_i60];
      }

      c2_c_st.site = &c2_ng_emlrtRSI;
      c2_d_st.site = &c2_ug_emlrtRSI;
      c2_e_st.site = &c2_wg_emlrtRSI;
      c2_f_st.site = &c2_oc_emlrtRSI;
      if (c2_result_size[1] != 4) {
        c2_k_y = NULL;
        sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1, 0U, 2, 1,
          35), false);
        c2_l_y = NULL;
        sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1, 0U, 2, 1,
          48), false);
        c2_m_y = NULL;
        sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1, 0U, 2, 1,
          5), false);
        c2_u = 4.0;
        c2_n_y = NULL;
        sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_u, 0, 0U, 0, 0U, 0), false);
        sf_mex_call(&c2_f_st, &c2_bb_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                    sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_f_st, NULL, "message", 1U, 3U, 14, c2_l_y, 14, c2_m_y,
                      14, c2_n_y)));
      }

      c2_d_st.site = &c2_vg_emlrtRSI;
      c2_e_st.site = &c2_xg_emlrtRSI;
      c2_f_st.site = &c2_yg_emlrtRSI;
      for (c2_i72 = 0; c2_i72 < 3; c2_i72++) {
        c2_matrix[c2_i72] = c2_result_data[c2_i72];
      }

      for (c2_h_k = 0; c2_h_k < 3; c2_h_k++) {
        c2_i_k = c2_h_k;
        c2_c_a = c2_matrix[c2_i_k];
        c2_p_y = c2_c_a * c2_c_a;
        c2_v[c2_i_k] = c2_p_y;
      }

      c2_o_y = c2_sumColumnB(chartInstance, c2_v);
      c2_g_st.site = &c2_ah_emlrtRSI;
      c2_x = c2_o_y;
      c2_b_x = c2_x;
      c2_c_x = c2_b_x;
      if (c2_c_x < 0.0) {
        c2_b_p = true;
      } else {
        c2_b_p = false;
      }

      c2_c_p = c2_b_p;
      if (c2_c_p) {
        c2_q_y = NULL;
        sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_cv21, 10, 0U, 1, 0U, 2, 1,
          30), false);
        c2_r_y = NULL;
        sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_cv21, 10, 0U, 1, 0U, 2, 1,
          30), false);
        c2_s_y = NULL;
        sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1, 0U, 2, 1,
          4), false);
        sf_mex_call(&c2_g_st, &c2_cb_emlrtMCI, "error", 0U, 2U, 14, c2_q_y, 14,
                    sf_mex_call(&c2_g_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_g_st, NULL, "message", 1U, 2U, 14, c2_r_y, 14, c2_s_y)));
      }

      c2_b_x = muDoubleScalarSqrt(c2_b_x);
      c2_c_b = 1.0 / c2_b_x;
      c2_d_b = c2_c_b;
      for (c2_j_k = 0; c2_j_k < 3; c2_j_k++) {
        c2_ia = c2_j_k;
        c2_ic = c2_j_k;
        c2_e_b = c2_d_b;
        c2_varargin_1 = c2_ic + 1;
        c2_b_varargin_2 = c2_ia + 1;
        c2_f_b = c2_e_b;
        c2_c_varargin_2 = c2_varargin_1 - 1;
        c2_varargin_4 = c2_b_varargin_2 - 1;
        c2_v[c2_c_varargin_2] = c2_matrix[c2_varargin_4] * c2_f_b;
      }

      c2_i73 = 4;
      if ((c2_i73 < 1) || (c2_i73 > c2_result_size[1])) {
        emlrtDynamicBoundsCheckR2012b(c2_i73, 1, c2_result_size[1],
          &c2_tb_emlrtBCI, &c2_e_st);
      }

      c2_theta = c2_result_data[3];
      c2_d_x = c2_theta;
      c2_cth = c2_d_x;
      c2_cth = muDoubleScalarCos(c2_cth);
      c2_e_x = c2_theta;
      c2_sth = c2_e_x;
      c2_sth = muDoubleScalarSin(c2_sth);
      c2_vth = 1.0 - c2_cth;
      c2_vx = c2_v[0];
      c2_vy = c2_v[1];
      c2_vz = c2_v[2];
      c2_cat(chartInstance, c2_vx * c2_vx * c2_vth + c2_cth, c2_vy * c2_vx *
             c2_vth - c2_vz * c2_sth, c2_vz * c2_vx * c2_vth + c2_vy * c2_sth,
             c2_vx * c2_vy * c2_vth + c2_vz * c2_sth, c2_vy * c2_vy * c2_vth +
             c2_cth, c2_vz * c2_vy * c2_vth - c2_vx * c2_sth, c2_vx * c2_vz *
             c2_vth - c2_vy * c2_sth, c2_vy * c2_vz * c2_vth + c2_vx * c2_sth,
             c2_vz * c2_vz * c2_vth + c2_cth, c2_tempR);
      for (c2_i74 = 0; c2_i74 < 9; c2_i74++) {
        c2_g_b[c2_i74] = c2_tempR[c2_i74];
      }

      for (c2_i75 = 0; c2_i75 < 9; c2_i75++) {
        c2_d_a[c2_i75] = c2_tempR[c2_i75];
      }

      for (c2_i76 = 0; c2_i76 < 9; c2_i76++) {
        c2_tempR[c2_i76] = c2_g_b[c2_i76];
      }

      for (c2_k_k = 0; c2_k_k < 3; c2_k_k++) {
        c2_l_k = c2_k_k;
        c2_b_varargin_1 = c2_l_k + 1;
        for (c2_m_k = 0; c2_m_k < 3; c2_m_k++) {
          c2_n_k = c2_m_k;
          c2_c_varargin_1 = c2_n_k + 1;
          c2_d_varargin_2 = c2_b_varargin_1;
          c2_subsa[0] = c2_c_varargin_1;
          c2_subsa[1] = c2_d_varargin_2;
          c2_subsb[0] = c2_subsa[1];
          c2_subsb[1] = c2_subsa[0];
          c2_tempR[(c2_subsb[0] + 3 * (c2_subsb[1] - 1)) - 1] = c2_d_a
            [(c2_subsa[0] + 3 * (c2_subsa[1] - 1)) - 1];
        }
      }

      memset(&c2_b_b[0], 0, sizeof(real_T) << 4);
      c2_i77 = 0;
      c2_i78 = 0;
      for (c2_i79 = 0; c2_i79 < 3; c2_i79++) {
        for (c2_i80 = 0; c2_i80 < 3; c2_i80++) {
          c2_b_b[c2_i80 + c2_i77] = c2_tempR[c2_i80 + c2_i78];
        }

        c2_i77 += 4;
        c2_i78 += 3;
      }

      c2_b_b[15] = 1.0;
      break;

     case 1:
      c2_c_st.site = &c2_og_emlrtRSI;
      c2_rigidBodyJoint_get_JointAxis(chartInstance, &c2_c_st, c2_d_obj, c2_v);
      c2_c_st.site = &c2_pg_emlrtRSI;
      c2_innerDimB = c2_qi.size[0];
      c2_d_st.site = &c2_bh_emlrtRSI;
      c2_b_innerDimB = c2_innerDimB;
      c2_innerDimOk = (c2_b_innerDimB == 1);
      if (!c2_innerDimOk) {
        if (c2_qi.size[0] == 1) {
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2,
            1, 45), false);
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2,
            1, 45), false);
          sf_mex_call(&c2_d_st, &c2_db_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                      sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_d_st, NULL, "message", 1U, 1U, 14, c2_j_y)));
        } else {
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2,
            1, 15), false);
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2,
            1, 15), false);
          sf_mex_call(&c2_d_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                      sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_d_st, NULL, "message", 1U, 1U, 14, c2_i_y)));
        }
      }

      c2_b_qi = c2_qi.vector.data[0];
      for (c2_i27 = 0; c2_i27 < 3; c2_i27++) {
        c2_v[c2_i27] *= c2_b_qi;
      }

      memset(&c2_tempR[0], 0, 9U * sizeof(real_T));
      for (c2_f_k = 0; c2_f_k < 3; c2_f_k++) {
        c2_g_k = c2_f_k;
        c2_tempR[c2_g_k + 3 * c2_g_k] = 1.0;
      }

      c2_i37 = 0;
      c2_i39 = 0;
      for (c2_i40 = 0; c2_i40 < 3; c2_i40++) {
        for (c2_i44 = 0; c2_i44 < 3; c2_i44++) {
          c2_b_b[c2_i44 + c2_i37] = c2_tempR[c2_i44 + c2_i39];
        }

        c2_i37 += 4;
        c2_i39 += 3;
      }

      for (c2_i43 = 0; c2_i43 < 3; c2_i43++) {
        c2_b_b[c2_i43 + 12] = c2_v[c2_i43];
      }

      c2_i49 = 0;
      for (c2_i51 = 0; c2_i51 < 4; c2_i51++) {
        c2_b_b[c2_i49 + 3] = c2_dv6[c2_i51];
        c2_i49 += 4;
      }
      break;

     case 2:
      c2_array_real_T_2D_SetSize(chartInstance, &c2_b_st, &c2_q_,
        &c2_kd_emlrtRTEI, 1, c2_qi.size[0]);
      c2_c_loop_ub = c2_qi.size[0] - 1;
      for (c2_i15 = 0; c2_i15 <= c2_c_loop_ub; c2_i15++) {
        c2_q_.vector.data[c2_i15] = c2_qi.vector.data[c2_i15];
      }

      c2_b_q_ = c2_q_.size[1];
      for (c2_i17 = 0; c2_i17 < 3; c2_i17++) {
        c2_i21 = (int32_T)(5.0 + (real_T)c2_i17);
        if ((c2_i21 < 1) || (c2_i21 > c2_b_q_)) {
          emlrtDynamicBoundsCheckR2012b(c2_i21, 1, c2_b_q_, &c2_ub_emlrtBCI,
            &c2_b_st);
        }

        c2_v[c2_i17] = c2_q_.vector.data[c2_i21 - 1];
      }

      memset(&c2_T[0], 0, sizeof(real_T) << 4);
      for (c2_d_k = 0; c2_d_k < 4; c2_d_k++) {
        c2_e_k = c2_d_k;
        c2_T[c2_e_k + (c2_e_k << 2)] = 1.0;
      }

      for (c2_i28 = 0; c2_i28 < 3; c2_i28++) {
        c2_T[c2_i28 + 12] = c2_v[c2_i28];
      }

      c2_c_q_ = c2_q_.size[1];
      for (c2_i32 = 0; c2_i32 < 4; c2_i32++) {
        c2_i38 = c2_i32 + 1;
        if ((c2_i38 < 1) || (c2_i38 > c2_c_q_)) {
          emlrtDynamicBoundsCheckR2012b(c2_i38, 1, c2_c_q_, &c2_vb_emlrtBCI,
            &c2_b_st);
        }

        c2_d_q_[c2_i32] = c2_q_.vector.data[c2_i38 - 1];
      }

      c2_c_st.site = &c2_qg_emlrtRSI;
      c2_quat2tform(chartInstance, &c2_c_st, c2_d_q_, c2_d_y);
      for (c2_i41 = 0; c2_i41 < 4; c2_i41++) {
        c2_i45 = 0;
        for (c2_i46 = 0; c2_i46 < 4; c2_i46++) {
          c2_b_b[c2_i45 + c2_i41] = 0.0;
          c2_i52 = 0;
          for (c2_i53 = 0; c2_i53 < 4; c2_i53++) {
            c2_b_b[c2_i45 + c2_i41] += c2_T[c2_i52 + c2_i41] * c2_d_y[c2_i53 +
              c2_i45];
            c2_i52 += 4;
          }

          c2_i45 += 4;
        }
      }
      break;

     default:
      memset(&c2_b_b[0], 0, sizeof(real_T) << 4);
      for (c2_b_k = 0; c2_b_k < 4; c2_b_k++) {
        c2_c_k = c2_b_k;
        c2_b_b[c2_c_k + (c2_c_k << 2)] = 1.0;
      }
      break;
    }

    for (c2_i16 = 0; c2_i16 < 4; c2_i16++) {
      c2_i19 = 0;
      for (c2_i20 = 0; c2_i20 < 4; c2_i20++) {
        c2_d_y[c2_i19 + c2_i16] = 0.0;
        c2_i25 = 0;
        for (c2_i31 = 0; c2_i31 < 4; c2_i31++) {
          c2_d_y[c2_i19 + c2_i16] += c2_b_a[c2_i25 + c2_i16] * c2_b_b[c2_i31 +
            c2_i19];
          c2_i25 += 4;
        }

        c2_i19 += 4;
      }
    }

    for (c2_i18 = 0; c2_i18 < 16; c2_i18++) {
      c2_b_b[c2_i18] = c2_c_obj->ChildToJointTransform[c2_i18];
    }

    for (c2_i22 = 0; c2_i22 < 4; c2_i22++) {
      c2_i24 = 0;
      for (c2_i30 = 0; c2_i30 < 4; c2_i30++) {
        c2_T[c2_i24 + c2_i22] = 0.0;
        c2_i34 = 0;
        for (c2_i36 = 0; c2_i36 < 4; c2_i36++) {
          c2_T[c2_i24 + c2_i22] += c2_d_y[c2_i34 + c2_i22] * c2_b_b[c2_i36 +
            c2_i24];
          c2_i34 += 4;
        }

        c2_i24 += 4;
      }
    }

    c2_i23 = c2_Ttree_size[1] - 1;
    c2_i29 = (int32_T)c2_c_i - 1;
    if ((c2_i29 < 0) || (c2_i29 > c2_i23)) {
      emlrtDynamicBoundsCheckR2012b(c2_i29, 0, c2_i23, &c2_pb_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i33 = c2_i29;
    for (c2_i35 = 0; c2_i35 < 16; c2_i35++) {
      c2_Ttree_data[c2_i33].f1[c2_i35] = c2_T[c2_i35];
    }

    c2_k += c2_pnum;
    if (c2_body->ParentIndex > 0.0) {
      if (c2_body->ParentIndex != (real_T)(int32_T)muDoubleScalarFloor
          (c2_body->ParentIndex)) {
        emlrtIntegerCheckR2012b(c2_body->ParentIndex, &c2_db_emlrtDCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i47 = c2_Ttree_size[1] - 1;
      c2_i50 = (int32_T)c2_body->ParentIndex - 1;
      if ((c2_i50 < 0) || (c2_i50 > c2_i47)) {
        emlrtDynamicBoundsCheckR2012b(c2_i50, 0, c2_i47, &c2_rb_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i54 = c2_i50;
      for (c2_i56 = 0; c2_i56 < 16; c2_i56++) {
        c2_b_a[c2_i56] = c2_Ttree_data[c2_i54].f1[c2_i56];
      }

      c2_i57 = c2_Ttree_size[1] - 1;
      c2_i59 = (int32_T)c2_c_i - 1;
      if ((c2_i59 < 0) || (c2_i59 > c2_i57)) {
        emlrtDynamicBoundsCheckR2012b(c2_i59, 0, c2_i57, &c2_sb_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i61 = c2_i59;
      for (c2_i62 = 0; c2_i62 < 16; c2_i62++) {
        c2_b_b[c2_i62] = c2_Ttree_data[c2_i61].f1[c2_i62];
      }

      for (c2_i63 = 0; c2_i63 < 4; c2_i63++) {
        c2_i65 = 0;
        for (c2_i67 = 0; c2_i67 < 4; c2_i67++) {
          c2_d_y[c2_i65 + c2_i63] = 0.0;
          c2_i69 = 0;
          for (c2_i71 = 0; c2_i71 < 4; c2_i71++) {
            c2_d_y[c2_i65 + c2_i63] += c2_b_a[c2_i69 + c2_i63] * c2_b_b[c2_i71 +
              c2_i65];
            c2_i69 += 4;
          }

          c2_i65 += 4;
        }
      }

      c2_i64 = c2_Ttree_size[1] - 1;
      c2_i66 = (int32_T)c2_c_i - 1;
      if ((c2_i66 < 0) || (c2_i66 > c2_i64)) {
        emlrtDynamicBoundsCheckR2012b(c2_i66, 0, c2_i64, &c2_qb_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i68 = c2_i66;
      for (c2_i70 = 0; c2_i70 < 16; c2_i70++) {
        c2_Ttree_data[c2_i68].f1[c2_i70] = c2_d_y[c2_i70];
      }
    }
  }

  c2_array_real_T_2D_Destructor(chartInstance, &c2_q_);
  c2_array_real_T_Destructor(chartInstance, &c2_qi);
}

static void c2_indexShapeCheck(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_matrixSize, int32_T c2_indexSize[2])
{
  static char_T c2_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_size1;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_b_c;
  boolean_T c2_c;
  boolean_T c2_nonSingletonDimFound;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_size1 = c2_matrixSize;
  if (c2_size1 != 1) {
    c2_b = false;
  } else {
    c2_b = true;
  }

  if (c2_b) {
    c2_nonSingletonDimFound = false;
    if (c2_indexSize[1] != 1) {
      c2_nonSingletonDimFound = true;
    }

    c2_b_b = c2_nonSingletonDimFound;
    if (c2_b_b) {
      c2_c = true;
    } else {
      c2_c = false;
    }
  } else {
    c2_c = false;
  }

  c2_st.site = &c2_jg_emlrtRSI;
  c2_b_c = c2_c;
  if (c2_b_c) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, &c2_y_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }
}

static void c2_rigidBodyJoint_get_JointAxis(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyJoint *c2_obj, real_T
  c2_ax[3])
{
  static char_T c2_b_cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  c2_rigidBodyJoint *c2_b_obj;
  c2_rigidBodyJoint *c2_d_obj;
  c2_robotics_manip_internal_CharacterVector c2_c_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  real_T c2_d;
  real_T c2_d1;
  int32_T c2_type_size[2];
  int32_T c2_x_size[2];
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsA;
  int32_T c2_c_kstr;
  int32_T c2_d_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_type_data[200];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b_bool;
  boolean_T c2_bool;
  boolean_T c2_guard1;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_rg_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_c_obj = c2_b_obj->TypeInternal;
  c2_d = c2_c_obj.Length;
  c2_b = (c2_d < 1.0);
  if (c2_b) {
    c2_i = -1;
  } else {
    if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
      emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_b_st);
    }

    c2_i1 = (int32_T)c2_d;
    if ((c2_i1 < 1) || (c2_i1 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
    }

    c2_i = c2_i1 - 1;
  }

  c2_type_size[1] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_type_data[c2_i2] = c2_c_obj.Vector[c2_i2];
  }

  c2_bool = false;
  c2_x_size[1] = c2_type_size[1];
  c2_remainingDimsA = c2_x_size[1];
  if (c2_remainingDimsA != 8) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 8) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_type_data[c2_b_kstr] != c2_b_cv[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  c2_guard1 = false;
  if (c2_bool) {
    c2_guard1 = true;
  } else {
    c2_st.site = &c2_rg_emlrtRSI;
    c2_d_obj = c2_obj;
    c2_b_st.site = &c2_gb_emlrtRSI;
    c2_c_obj = c2_d_obj->TypeInternal;
    c2_d1 = c2_c_obj.Length;
    c2_b1 = (c2_d1 < 1.0);
    if (c2_b1) {
      c2_i4 = -1;
    } else {
      if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
        emlrtIntegerCheckR2012b(c2_d1, &c2_c_emlrtDCI, &c2_b_st);
      }

      c2_i5 = (int32_T)c2_d1;
      if ((c2_i5 < 1) || (c2_i5 > 200)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 200, &c2_e_emlrtBCI, &c2_b_st);
      }

      c2_i4 = c2_i5 - 1;
    }

    c2_type_size[1] = c2_i4 + 1;
    c2_b_loop_ub = c2_i4;
    for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
      c2_type_data[c2_i6] = c2_c_obj.Vector[c2_i6];
    }

    c2_b_bool = false;
    c2_x_size[1] = c2_type_size[1];
    c2_b_remainingDimsA = c2_x_size[1];
    if (c2_b_remainingDimsA != 9) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 9) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_type_data[c2_d_kstr] != c2_cv1[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_bool = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_bool) {
      c2_guard1 = true;
    } else {
      for (c2_i7 = 0; c2_i7 < 3; c2_i7++) {
        c2_ax[c2_i7] = rtNaN;
      }
    }
  }

  if (c2_guard1) {
    for (c2_i3 = 0; c2_i3 < 3; c2_i3++) {
      c2_ax[c2_i3] = c2_obj->JointAxisInternal[c2_i3];
    }
  }
}

static real_T c2_sumColumnB(SFc2_Modele_3DInstanceStruct *chartInstance, real_T
  c2_x[3])
{
  real_T c2_y;
  int32_T c2_b_k;
  int32_T c2_k;
  (void)chartInstance;
  c2_y = c2_x[0];
  for (c2_k = 0; c2_k < 2; c2_k++) {
    c2_b_k = c2_k;
    c2_y += c2_x[c2_b_k + 1];
  }

  return c2_y;
}

static void c2_cat(SFc2_Modele_3DInstanceStruct *chartInstance, real_T
                   c2_varargin_1, real_T c2_varargin_2, real_T c2_varargin_3,
                   real_T c2_varargin_4, real_T c2_varargin_5, real_T
                   c2_varargin_6, real_T c2_varargin_7, real_T c2_varargin_8,
                   real_T c2_varargin_9, real_T c2_y[9])
{
  real_T c2_catArgs[9];
  real_T c2_arg;
  real_T c2_b_arg;
  real_T c2_c_arg;
  real_T c2_d_arg;
  real_T c2_e_arg;
  real_T c2_f_arg;
  real_T c2_g_arg;
  real_T c2_h_arg;
  real_T c2_i_arg;
  (void)chartInstance;
  c2_catArgs[0] = c2_varargin_1;
  c2_catArgs[1] = c2_varargin_2;
  c2_catArgs[2] = c2_varargin_3;
  c2_catArgs[3] = c2_varargin_4;
  c2_catArgs[4] = c2_varargin_5;
  c2_catArgs[5] = c2_varargin_6;
  c2_catArgs[6] = c2_varargin_7;
  c2_catArgs[7] = c2_varargin_8;
  c2_catArgs[8] = c2_varargin_9;
  c2_arg = c2_catArgs[0];
  c2_y[0] = c2_arg;
  c2_b_arg = c2_catArgs[1];
  c2_y[1] = c2_b_arg;
  c2_c_arg = c2_catArgs[2];
  c2_y[2] = c2_c_arg;
  c2_d_arg = c2_catArgs[3];
  c2_y[3] = c2_d_arg;
  c2_e_arg = c2_catArgs[4];
  c2_y[4] = c2_e_arg;
  c2_f_arg = c2_catArgs[5];
  c2_y[5] = c2_f_arg;
  c2_g_arg = c2_catArgs[6];
  c2_y[6] = c2_g_arg;
  c2_h_arg = c2_catArgs[7];
  c2_y[7] = c2_h_arg;
  c2_i_arg = c2_catArgs[8];
  c2_y[8] = c2_i_arg;
}

static void c2_quat2tform(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_q[4], real_T c2_H[16])
{
  static char_T c2_b_cv[4] = { 's', 'q', 'r', 't' };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  real_T c2_ab_a[9];
  real_T c2_e_b[9];
  real_T c2_tempR[9];
  real_T c2_b_q[4];
  real_T c2_a;
  real_T c2_b;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c_a;
  real_T c2_c_b;
  real_T c2_c_x;
  real_T c2_d_a;
  real_T c2_d_b;
  real_T c2_d_x;
  real_T c2_e_a;
  real_T c2_f_a;
  real_T c2_f_y;
  real_T c2_g_a;
  real_T c2_g_y;
  real_T c2_h_a;
  real_T c2_h_y;
  real_T c2_i_a;
  real_T c2_i_y;
  real_T c2_j_a;
  real_T c2_j_y;
  real_T c2_k_a;
  real_T c2_k_y;
  real_T c2_l_a;
  real_T c2_l_y;
  real_T c2_m_a;
  real_T c2_n_a;
  real_T c2_o_a;
  real_T c2_p_a;
  real_T c2_q_a;
  real_T c2_r_a;
  real_T c2_s;
  real_T c2_s_a;
  real_T c2_t_a;
  real_T c2_u_a;
  real_T c2_v_a;
  real_T c2_w_a;
  real_T c2_x;
  real_T c2_x_a;
  real_T c2_y;
  real_T c2_y_a;
  real_T c2_z;
  int32_T c2_subsa[3];
  int32_T c2_subsb[3];
  int32_T c2_b_k;
  int32_T c2_b_varargin_1;
  int32_T c2_b_varargin_2;
  int32_T c2_c_k;
  int32_T c2_c_varargin_1;
  int32_T c2_c_varargin_2;
  int32_T c2_d_k;
  int32_T c2_e_k;
  int32_T c2_f_k;
  int32_T c2_g_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_ia;
  int32_T c2_ic;
  int32_T c2_k;
  int32_T c2_varargin_1;
  int32_T c2_varargin_2;
  int32_T c2_varargin_4;
  boolean_T c2_b_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_ch_emlrtRSI;
  c2_b_st.site = &c2_dh_emlrtRSI;
  for (c2_k = 0; c2_k < 4; c2_k++) {
    c2_b_k = c2_k;
    c2_a = c2_q[c2_b_k];
    c2_b_y = c2_a * c2_a;
    c2_b_q[c2_b_k] = c2_b_y;
  }

  c2_y = c2_b_sumColumnB(chartInstance, c2_b_q);
  c2_c_st.site = &c2_ah_emlrtRSI;
  c2_x = c2_y;
  c2_b_x = c2_x;
  c2_c_x = c2_b_x;
  if (c2_c_x < 0.0) {
    c2_p = true;
  } else {
    c2_p = false;
  }

  c2_b_p = c2_p;
  if (c2_b_p) {
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv21, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv21, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c2_c_st, &c2_cb_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_d_y, 14, c2_e_y)));
  }

  c2_b_x = muDoubleScalarSqrt(c2_b_x);
  c2_b = 1.0 / c2_b_x;
  c2_b_b = c2_b;
  for (c2_c_k = 0; c2_c_k < 4; c2_c_k++) {
    c2_ia = c2_c_k;
    c2_ic = c2_c_k;
    c2_c_b = c2_b_b;
    c2_varargin_1 = c2_ic + 1;
    c2_varargin_2 = c2_ia + 1;
    c2_d_b = c2_c_b;
    c2_b_varargin_2 = c2_varargin_1 - 1;
    c2_varargin_4 = c2_varargin_2 - 1;
    c2_b_q[c2_b_varargin_2] = c2_q[c2_varargin_4] * c2_d_b;
  }

  c2_s = c2_b_q[0];
  c2_d_x = c2_b_q[1];
  c2_f_y = c2_b_q[2];
  c2_z = c2_b_q[3];
  c2_b_st.site = &c2_eh_emlrtRSI;
  c2_b_a = c2_f_y;
  c2_c_st.site = &c2_hh_emlrtRSI;
  c2_c_a = c2_b_a;
  c2_d_a = c2_c_a;
  c2_e_a = c2_d_a;
  c2_g_y = c2_e_a * c2_e_a;
  c2_b_st.site = &c2_eh_emlrtRSI;
  c2_f_a = c2_z;
  c2_c_st.site = &c2_hh_emlrtRSI;
  c2_g_a = c2_f_a;
  c2_h_a = c2_g_a;
  c2_i_a = c2_h_a;
  c2_h_y = c2_i_a * c2_i_a;
  c2_b_st.site = &c2_fh_emlrtRSI;
  c2_j_a = c2_d_x;
  c2_c_st.site = &c2_hh_emlrtRSI;
  c2_k_a = c2_j_a;
  c2_l_a = c2_k_a;
  c2_m_a = c2_l_a;
  c2_i_y = c2_m_a * c2_m_a;
  c2_b_st.site = &c2_fh_emlrtRSI;
  c2_n_a = c2_z;
  c2_c_st.site = &c2_hh_emlrtRSI;
  c2_o_a = c2_n_a;
  c2_p_a = c2_o_a;
  c2_q_a = c2_p_a;
  c2_j_y = c2_q_a * c2_q_a;
  c2_b_st.site = &c2_gh_emlrtRSI;
  c2_r_a = c2_d_x;
  c2_c_st.site = &c2_hh_emlrtRSI;
  c2_s_a = c2_r_a;
  c2_t_a = c2_s_a;
  c2_u_a = c2_t_a;
  c2_k_y = c2_u_a * c2_u_a;
  c2_b_st.site = &c2_gh_emlrtRSI;
  c2_v_a = c2_f_y;
  c2_c_st.site = &c2_hh_emlrtRSI;
  c2_w_a = c2_v_a;
  c2_x_a = c2_w_a;
  c2_y_a = c2_x_a;
  c2_l_y = c2_y_a * c2_y_a;
  c2_cat(chartInstance, 1.0 - 2.0 * (c2_g_y + c2_h_y), 2.0 * (c2_d_x * c2_f_y -
          c2_s * c2_z), 2.0 * (c2_d_x * c2_z + c2_s * c2_f_y), 2.0 * (c2_d_x *
          c2_f_y + c2_s * c2_z), 1.0 - 2.0 * (c2_i_y + c2_j_y), 2.0 * (c2_f_y *
          c2_z - c2_s * c2_d_x), 2.0 * (c2_d_x * c2_z - c2_s * c2_f_y), 2.0 *
         (c2_f_y * c2_z + c2_s * c2_d_x), 1.0 - 2.0 * (c2_k_y + c2_l_y),
         c2_tempR);
  for (c2_i = 0; c2_i < 9; c2_i++) {
    c2_e_b[c2_i] = c2_tempR[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 9; c2_i1++) {
    c2_ab_a[c2_i1] = c2_tempR[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 9; c2_i2++) {
    c2_tempR[c2_i2] = c2_e_b[c2_i2];
  }

  for (c2_d_k = 0; c2_d_k < 3; c2_d_k++) {
    c2_e_k = c2_d_k;
    c2_b_varargin_1 = c2_e_k + 1;
    for (c2_f_k = 0; c2_f_k < 3; c2_f_k++) {
      c2_g_k = c2_f_k;
      c2_c_varargin_1 = c2_g_k + 1;
      c2_c_varargin_2 = c2_b_varargin_1;
      c2_subsa[0] = c2_c_varargin_1;
      c2_subsa[1] = c2_c_varargin_2;
      c2_subsb[0] = c2_subsa[1];
      c2_subsb[1] = c2_subsa[0];
      c2_tempR[(c2_subsb[0] + 3 * (c2_subsb[1] - 1)) - 1] = c2_ab_a[(c2_subsa[0]
        + 3 * (c2_subsa[1] - 1)) - 1];
    }
  }

  memset(&c2_H[0], 0, sizeof(real_T) << 4);
  c2_i3 = 0;
  c2_i4 = 0;
  for (c2_i5 = 0; c2_i5 < 3; c2_i5++) {
    for (c2_i6 = 0; c2_i6 < 3; c2_i6++) {
      c2_H[c2_i6 + c2_i3] = c2_tempR[c2_i6 + c2_i4];
    }

    c2_i3 += 4;
    c2_i4 += 3;
  }

  c2_H[15] = 1.0;
}

static real_T c2_b_sumColumnB(SFc2_Modele_3DInstanceStruct *chartInstance,
  real_T c2_x[4])
{
  real_T c2_y;
  int32_T c2_b_k;
  int32_T c2_k;
  (void)chartInstance;
  c2_y = c2_x[0];
  for (c2_k = 0; c2_k < 3; c2_k++) {
    c2_b_k = c2_k;
    c2_y += c2_x[c2_b_k + 1];
  }

  return c2_y;
}

static void c2_rotm2eul(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_R[9], real_T c2_eul[3])
{
  static int32_T c2_iv1[3] = { 1, 3, 1 };

  static char_T c2_b_cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  static char_T c2_b_cv[4] = { 's', 'q', 'r', 't' };

  c2_cell_wrap_26 c2_reshapes[3];
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_st;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_tmp_data[3];
  real_T c2_b_eul[2];
  real_T c2_varargin_2_data[1];
  real_T c2_varargin_3_data[1];
  real_T c2_x_data[1];
  real_T c2_y_data[1];
  real_T c2_ztemp_data[1];
  real_T c2_a;
  real_T c2_b;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_r;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c_a;
  real_T c2_c_b;
  real_T c2_c_r;
  real_T c2_c_x;
  real_T c2_cy;
  real_T c2_cySq;
  real_T c2_d_r;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_e_y;
  real_T c2_f_x;
  real_T c2_f_y;
  real_T c2_g_x;
  real_T c2_g_y;
  real_T c2_h_x;
  real_T c2_h_y;
  real_T c2_i_y;
  real_T c2_l_x;
  real_T c2_l_y;
  real_T c2_numSingular;
  real_T c2_r;
  real_T c2_x;
  int32_T c2_b_csz[3];
  int32_T c2_csz[3];
  int32_T c2_iv[3];
  int32_T c2_iv2[3];
  int32_T c2_varargin_2_size[3];
  int32_T c2_x_size[3];
  int32_T c2_y_size[3];
  int32_T c2_ztemp_size[3];
  int32_T c2_b_tmp_size[2];
  int32_T c2_c_tmp_size[2];
  int32_T c2_d_tmp_size[2];
  int32_T c2_f_trueCount[1];
  int32_T c2_h_trueCount[1];
  int32_T c2_tmp_size[1];
  int32_T c2_b_c;
  int32_T c2_b_end;
  int32_T c2_b_i;
  int32_T c2_b_loop_ub;
  int32_T c2_b_sak;
  int32_T c2_b_sbk;
  int32_T c2_b_trueCount;
  int32_T c2_c;
  int32_T c2_c_end;
  int32_T c2_c_i;
  int32_T c2_c_loop_ub;
  int32_T c2_c_trueCount;
  int32_T c2_d_a;
  int32_T c2_d_b;
  int32_T c2_d_end;
  int32_T c2_d_i;
  int32_T c2_d_loop_ub;
  int32_T c2_d_trueCount;
  int32_T c2_e_a;
  int32_T c2_e_b;
  int32_T c2_e_end;
  int32_T c2_e_i;
  int32_T c2_e_loop_ub;
  int32_T c2_e_trueCount;
  int32_T c2_end;
  int32_T c2_expected;
  int32_T c2_f_end;
  int32_T c2_f_i;
  int32_T c2_f_loop_ub;
  int32_T c2_g_i;
  int32_T c2_g_loop_ub;
  int32_T c2_g_trueCount;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_j_loop_ub;
  int32_T c2_k;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_m_loop_ub;
  int32_T c2_n_loop_ub;
  int32_T c2_nx;
  int32_T c2_nz;
  int32_T c2_result;
  int32_T c2_sak;
  int32_T c2_sbk;
  int32_T c2_trueCount;
  boolean_T c2_b1;
  boolean_T c2_b_p;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_e_p;
  boolean_T c2_f_b;
  boolean_T c2_i_x;
  boolean_T c2_j_x;
  boolean_T c2_k_x;
  boolean_T c2_p;
  boolean_T c2_samesize;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  c2_st.site = &c2_ih_emlrtRSI;
  c2_b_st.site = &c2_jh_emlrtRSI;
  c2_cySq = c2_R[0] * c2_R[0] + c2_R[1] * c2_R[1];
  c2_c_st.site = &c2_lh_emlrtRSI;
  c2_x = c2_cySq;
  c2_cy = c2_x;
  c2_b_x = c2_cy;
  if (c2_b_x < 0.0) {
    c2_p = true;
  } else {
    c2_p = false;
  }

  c2_b_p = c2_p;
  if (c2_b_p) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv21, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv21, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c2_c_st, &c2_cb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
  }

  c2_cy = muDoubleScalarSqrt(c2_cy);
  c2_b_y = c2_R[5];
  c2_c_x = c2_R[8];
  c2_a = c2_b_y;
  c2_b = c2_c_x;
  c2_e_y = c2_a;
  c2_d_x = c2_b;
  c2_r = muDoubleScalarAtan2(c2_e_y, c2_d_x);
  c2_f_y = -c2_R[2];
  c2_e_x = c2_cy;
  c2_b_a = c2_f_y;
  c2_b_b = c2_e_x;
  c2_g_y = c2_b_a;
  c2_f_x = c2_b_b;
  c2_b_r = muDoubleScalarAtan2(c2_g_y, c2_f_x);
  c2_h_y = c2_R[1];
  c2_g_x = c2_R[0];
  c2_c_a = c2_h_y;
  c2_c_b = c2_g_x;
  c2_i_y = c2_c_a;
  c2_h_x = c2_c_b;
  c2_c_r = muDoubleScalarAtan2(c2_i_y, c2_h_x);
  c2_eul[0] = c2_r;
  c2_eul[1] = c2_b_r;
  c2_eul[2] = c2_c_r;
  c2_i_x = (c2_cySq < 2.2204460492503131E-15);
  c2_j_x = c2_i_x;
  c2_k_x = c2_j_x;
  c2_nz = (int32_T)c2_k_x;
  c2_numSingular = (real_T)c2_nz;
  if (c2_numSingular > 0.0) {
    c2_end = 1;
    c2_trueCount = 0;
    for (c2_b_i = 0; c2_b_i < c2_end; c2_b_i++) {
      if (c2_cySq < 2.2204460492503131E-15) {
        c2_trueCount++;
      }
    }

    c2_tmp_size[0] = c2_trueCount;
    c2_c_st.site = &c2_kh_emlrtRSI;
    c2_d_st.site = &c2_kh_emlrtRSI;
    c2_b_end = 1;
    c2_b_trueCount = 0;
    for (c2_c_i = 0; c2_c_i < c2_b_end; c2_c_i++) {
      if (c2_cySq < 2.2204460492503131E-15) {
        c2_b_trueCount++;
      }
    }

    c2_b_tmp_size[1] = c2_b_trueCount;
    c2_y_size[2] = c2_b_tmp_size[1];
    c2_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i4 = 0; c2_i4 <= c2_loop_ub; c2_i4++) {
      c2_y_data[c2_i4] = -c2_R[7];
    }

    c2_c_end = 1;
    c2_c_trueCount = 0;
    for (c2_d_i = 0; c2_d_i < c2_c_end; c2_d_i++) {
      if (c2_cySq < 2.2204460492503131E-15) {
        c2_c_trueCount++;
      }
    }

    c2_c_tmp_size[1] = c2_c_trueCount;
    c2_x_size[2] = c2_c_tmp_size[1];
    c2_b_loop_ub = c2_c_tmp_size[1] - 1;
    for (c2_i5 = 0; c2_i5 <= c2_b_loop_ub; c2_i5++) {
      c2_x_data[c2_i5] = c2_R[4];
    }

    c2_e_st.site = &c2_mh_emlrtRSI;
    c2_f_st.site = &c2_nh_emlrtRSI;
    c2_g_st.site = &c2_oh_emlrtRSI;
    c2_sak = c2_y_size[2];
    c2_sbk = c2_x_size[2];
    c2_d_a = c2_sak;
    c2_d_b = c2_sbk;
    if (c2_d_a <= c2_d_b) {
      c2_c = c2_d_a;
    } else {
      c2_c = 0;
    }

    c2_csz[2] = c2_c;
    c2_ztemp_size[0] = 1;
    c2_ztemp_size[1] = 1;
    c2_ztemp_size[2] = c2_csz[2];
    for (c2_i6 = 0; c2_i6 < 3; c2_i6++) {
      c2_csz[c2_i6] = c2_ztemp_size[c2_i6];
    }

    c2_ztemp_size[0] = c2_csz[0];
    c2_ztemp_size[1] = c2_csz[1];
    c2_ztemp_size[2] = c2_csz[2];
    for (c2_i7 = 0; c2_i7 < 3; c2_i7++) {
      c2_csz[c2_i7] = c2_ztemp_size[c2_i7];
    }

    c2_ztemp_size[2] = c2_csz[2];
    c2_h_st.site = &c2_ph_emlrtRSI;
    c2_c_p = true;
    c2_d_p = true;
    if (c2_ztemp_size[2] != c2_y_size[2]) {
      c2_d_p = false;
    }

    if (c2_d_p) {
      c2_e_p = true;
      if (c2_ztemp_size[2] != c2_x_size[2]) {
        c2_e_p = false;
      }

      if (c2_e_p) {
      } else {
        c2_c_p = false;
      }
    } else {
      c2_c_p = false;
    }

    if (!c2_c_p) {
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
        15), false);
      c2_k_y = NULL;
      sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
        15), false);
      sf_mex_call(&c2_h_st, &c2_gb_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                  sf_mex_call(&c2_h_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_h_st, NULL, "message", 1U, 1U, 14, c2_k_y)));
    }

    c2_b_sak = c2_y_size[2];
    c2_b_sbk = c2_x_size[2];
    c2_e_a = c2_b_sak;
    c2_e_b = c2_b_sbk;
    if (c2_e_a <= c2_e_b) {
      c2_b_c = c2_e_a;
    } else {
      c2_b_c = 0;
    }

    c2_b_csz[2] = c2_b_c;
    c2_ztemp_size[0] = 1;
    c2_ztemp_size[1] = 1;
    c2_ztemp_size[2] = c2_b_csz[2];
    for (c2_i8 = 0; c2_i8 < 3; c2_i8++) {
      c2_csz[c2_i8] = c2_ztemp_size[c2_i8];
    }

    c2_ztemp_size[0] = c2_csz[0];
    c2_ztemp_size[1] = c2_csz[1];
    c2_ztemp_size[2] = c2_csz[2];
    for (c2_i9 = 0; c2_i9 < 3; c2_i9++) {
      c2_csz[c2_i9] = c2_ztemp_size[c2_i9];
    }

    c2_ztemp_size[2] = c2_csz[2];
    c2_nx = c2_ztemp_size[2];
    c2_i10 = (uint8_T)c2_nx;
    for (c2_k = 0; c2_k < c2_i10; c2_k++) {
      c2_l_y = c2_y_data[0];
      c2_l_x = c2_x_data[0];
      c2_d_r = muDoubleScalarAtan2(c2_l_y, c2_l_x);
      c2_ztemp_data[0] = c2_d_r;
    }

    c2_d_end = 1;
    c2_d_trueCount = 0;
    for (c2_e_i = 0; c2_e_i < c2_d_end; c2_e_i++) {
      if (c2_cySq < 2.2204460492503131E-15) {
        c2_d_trueCount++;
      }
    }

    c2_d_tmp_size[1] = c2_d_trueCount;
    c2_y_size[0] = 1;
    c2_y_size[1] = 1;
    c2_y_size[2] = c2_d_tmp_size[1];
    c2_c_loop_ub = c2_d_tmp_size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_c_loop_ub; c2_i11++) {
      c2_y_data[c2_i11] = -c2_R[2];
    }

    c2_x_size[0] = 1;
    c2_x_size[1] = 1;
    c2_e_end = 1;
    c2_e_trueCount = 0;
    for (c2_f_i = 0; c2_f_i < c2_e_end; c2_f_i++) {
      if (c2_cySq < 2.2204460492503131E-15) {
        c2_e_trueCount++;
      }
    }

    c2_f_trueCount[0] = c2_e_trueCount;
    c2_x_size[2] = c2_f_trueCount[0];
    c2_f_end = 1;
    c2_g_trueCount = 0;
    for (c2_g_i = 0; c2_g_i < c2_f_end; c2_g_i++) {
      if (c2_cySq < 2.2204460492503131E-15) {
        c2_g_trueCount++;
      }
    }

    c2_h_trueCount[0] = c2_g_trueCount;
    c2_d_loop_ub = c2_h_trueCount[0] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_d_loop_ub; c2_i12++) {
      c2_x_data[0] = c2_cy;
    }

    c2_f_b = (c2_y_size[2] == c2_x_size[2]);
    c2_samesize = c2_f_b;
    if (c2_samesize) {
      c2_varargin_2_size[2] = c2_y_size[2];
      c2_e_loop_ub = c2_y_size[2] - 1;
      for (c2_i13 = 0; c2_i13 <= c2_e_loop_ub; c2_i13++) {
        c2_varargin_2_data[0] = c2_function_handle_parenReference(chartInstance,
          c2_y_data[0], c2_x_data[0]);
      }
    } else {
      c2_expand_atan2(chartInstance, c2_y_data, c2_y_size, c2_x_data, c2_x_size,
                      c2_varargin_2_data, c2_varargin_2_size);
    }

    c2_varargin_3_data[0] = 0.0;
    c2_d_st.site = &c2_qh_emlrtRSI;
    c2_result = c2_ztemp_size[2];
    c2_csz[2] = c2_result;
    c2_e_st.site = &c2_tg_emlrtRSI;
    c2_expected = c2_csz[2];
    if (c2_ztemp_size[2] == c2_expected) {
      c2_b1 = true;
    } else {
      c2_b1 = false;
    }

    if (!c2_b1) {
      c2_m_y = NULL;
      sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv22, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      c2_n_y = NULL;
      sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv22, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c2_e_st, &c2_ab_emlrtMCI, "error", 0U, 2U, 14, c2_m_y, 14,
                  sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_e_st, NULL, "message", 1U, 1U, 14, c2_n_y)));
    }

    if (c2_varargin_2_size[2] == c2_expected) {
      c2_b1 = true;
    } else {
      c2_b1 = false;
    }

    if (!c2_b1) {
      c2_o_y = NULL;
      sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_cv22, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      c2_p_y = NULL;
      sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_cv22, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c2_e_st, &c2_ab_emlrtMCI, "error", 0U, 2U, 14, c2_o_y, 14,
                  sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_e_st, NULL, "message", 1U, 1U, 14, c2_p_y)));
    }

    if (c2_expected == 1) {
      c2_b1 = true;
    } else {
      c2_b1 = false;
    }

    if (!c2_b1) {
      c2_q_y = NULL;
      sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_cv22, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      c2_r_y = NULL;
      sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_cv22, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c2_e_st, &c2_ab_emlrtMCI, "error", 0U, 2U, 14, c2_q_y, 14,
                  sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_e_st, NULL, "message", 1U, 1U, 14, c2_r_y)));
    }

    c2_reshapes[0].f1.size[2] = c2_ztemp_size[2];
    c2_f_loop_ub = c2_ztemp_size[2] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
      c2_reshapes[0].f1.data[0] = c2_ztemp_data[0];
    }

    c2_reshapes[1].f1.size[2] = c2_varargin_2_size[2];
    c2_g_loop_ub = c2_varargin_2_size[2] - 1;
    for (c2_i15 = 0; c2_i15 <= c2_g_loop_ub; c2_i15++) {
      c2_reshapes[1].f1.data[0] = c2_varargin_2_data[0];
    }

    c2_ztemp_size[2] = 1;
    c2_h_loop_ub = 0;
    for (c2_i16 = 0; c2_i16 <= c2_h_loop_ub; c2_i16++) {
      c2_ztemp_data[0] = c2_varargin_3_data[c2_i16];
    }

    c2_i_loop_ub = c2_ztemp_size[2] - 1;
    for (c2_i17 = 0; c2_i17 <= c2_i_loop_ub; c2_i17++) {
      c2_reshapes[2].f1.data[0] = c2_ztemp_data[0];
    }

    c2_ztemp_size[2] = c2_reshapes[0].f1.size[2];
    c2_j_loop_ub = c2_reshapes[0].f1.size[2] - 1;
    for (c2_i18 = 0; c2_i18 <= c2_j_loop_ub; c2_i18++) {
      c2_ztemp_data[0] = c2_reshapes[0].f1.data[0];
    }

    c2_varargin_2_size[2] = c2_reshapes[1].f1.size[2];
    c2_k_loop_ub = c2_reshapes[1].f1.size[2] - 1;
    for (c2_i19 = 0; c2_i19 <= c2_k_loop_ub; c2_i19++) {
      c2_varargin_2_data[0] = c2_reshapes[1].f1.data[0];
    }

    c2_varargin_3_data[0] = c2_reshapes[2].f1.data[0];
    c2_l_loop_ub = c2_ztemp_size[2] - 1;
    c2_i20 = 0;
    for (c2_i21 = 0; c2_i21 <= c2_l_loop_ub; c2_i21++) {
      c2_tmp_data[c2_i20] = c2_ztemp_data[c2_i21];
      c2_i20 += 3;
    }

    c2_m_loop_ub = c2_varargin_2_size[2] - 1;
    c2_i22 = 0;
    for (c2_i23 = 0; c2_i23 <= c2_m_loop_ub; c2_i23++) {
      c2_tmp_data[c2_i22 + 1] = c2_varargin_2_data[c2_i23];
      c2_i22 += 3;
    }

    c2_tmp_data[2] = c2_varargin_3_data[0];
    c2_iv[0] = 1;
    c2_iv[1] = 3;
    c2_iv[2] = c2_tmp_size[0];
    emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 3, &c2_iv1[0], 3, &c2_n_emlrtECI,
      &c2_b_st);
    c2_iv2[2] = c2_tmp_size[0];
    c2_n_loop_ub = c2_iv2[2] - 1;
    c2_i24 = 0;
    for (c2_i25 = 0; c2_i25 <= c2_n_loop_ub; c2_i25++) {
      for (c2_i26 = 0; c2_i26 < 3; c2_i26++) {
        c2_eul[c2_i26] = c2_tmp_data[c2_i26 + c2_i24];
      }

      c2_i24 += 3;
    }
  }

  c2_i = 0;
  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_b_eul[c2_i1] = c2_eul[2 - c2_i];
    c2_i += 2;
  }

  c2_i2 = 0;
  for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
    c2_eul[c2_i2] = c2_b_eul[c2_i3];
    c2_i2 += 2;
  }
}

static real_T c2_function_handle_parenReference(SFc2_Modele_3DInstanceStruct
  *chartInstance, real_T c2_varargin_1, real_T c2_varargin_2)
{
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_x;
  real_T c2_y;
  (void)chartInstance;
  c2_x = c2_varargin_1;
  c2_y = c2_varargin_2;
  c2_b_y = c2_x;
  c2_b_x = c2_y;
  return muDoubleScalarAtan2(c2_b_y, c2_b_x);
}

static void c2_expand_atan2(SFc2_Modele_3DInstanceStruct *chartInstance, real_T
  c2_a_data[], int32_T c2_a_size[3], real_T c2_b_data[], int32_T c2_b_size[3],
  real_T c2_c_data[], int32_T c2_c_size[3])
{
  real_T c2_r;
  real_T c2_x;
  real_T c2_y;
  int32_T c2_csz[3];
  int32_T c2_i;
  int32_T c2_k;
  int32_T c2_sak;
  int32_T c2_sbk;
  int32_T c2_sck;
  int32_T c2_szc;
  boolean_T c2_b;
  (void)chartInstance;
  c2_sak = c2_a_size[2];
  c2_sbk = c2_b_size[2];
  if (c2_sbk == 1) {
    c2_sck = c2_sak;
  } else {
    c2_sck = 0;
  }

  c2_csz[2] = c2_sck;
  c2_c_size[0] = 1;
  c2_c_size[1] = 1;
  c2_c_size[2] = c2_csz[2];
  c2_b = (c2_c_size[2] == 0);
  if (!c2_b) {
    c2_szc = c2_c_size[2] - 1;
    c2_i = c2_szc;
    for (c2_k = 0; c2_k <= c2_i; c2_k++) {
      c2_y = c2_a_data[0];
      c2_x = c2_b_data[0];
      c2_r = muDoubleScalarAtan2(c2_y, c2_x);
      c2_c_data[0] = c2_r;
    }
  }
}

static void c2_b_RigidBodyTree_initVisualizationInfo
  (SFc2_Modele_3DInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj)
{
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_c_obj;
  c2_robotics_manip_internal_VisualizationInfo c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_idx[5];
  real_T c2_b_k;
  real_T c2_b_x;
  real_T c2_x;
  real_T c2_y;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_k;
  char_T c2_s[5];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_mb_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_b_st.site = &c2_nb_emlrtRSI;
  c2_c_st.site = &c2_ob_emlrtRSI;
  c2_d_st.site = &c2_pb_emlrtRSI;
  c2_rand(chartInstance, &c2_d_st, c2_idx);
  for (c2_k = 0; c2_k < 5; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_x = c2_idx[(int32_T)c2_b_k - 1] * 62.0;
    c2_b_x = c2_x;
    c2_y = c2_b_x;
    c2_y = muDoubleScalarFloor(c2_y);
    c2_idx[(int32_T)c2_b_k - 1] = 1.0 + c2_y;
  }

  for (c2_i = 0; c2_i < 5; c2_i++) {
    if (c2_idx[c2_i] != (real_T)(int32_T)muDoubleScalarFloor(c2_idx[c2_i])) {
      emlrtIntegerCheckR2012b(c2_idx[c2_i], &c2_g_emlrtDCI, &c2_b_st);
    }

    c2_i3 = (int32_T)c2_idx[c2_i];
    if ((c2_i3 < 1) || (c2_i3 > 62)) {
      emlrtDynamicBoundsCheckR2012b(c2_i3, 1, 62, &c2_h_emlrtBCI, &c2_b_st);
    }

    c2_s[c2_i] = c2_cv2[c2_i3 - 1];
  }

  for (c2_i1 = 0; c2_i1 < 12; c2_i1++) {
    c2_b_obj.ShowTag[c2_i1] = c2_cv3[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 5; c2_i2++) {
    c2_b_obj.ShowTag[c2_i2 + 12] = c2_s[c2_i2];
  }

  c2_obj->VisualizationInfo = c2_b_obj;
  c2_st.site = &c2_lb_emlrtRSI;
  c2_c_obj = c2_obj;
  c2_c_obj->VisualizationInfo.IsMaxReachUpToDate = false;
}

static void c2_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBody *c2_obj)
{
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
  }
}

static void c2_b_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_robotics_manip_internal_RigidBody *
  c2_obj)
{
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
  }
}

static void c2_c_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree *c2_obj)
{
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
  }
}

static void c2_d_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBody_1 *c2_obj)
{
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
  }
}

static void c2_e_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_rigidBodyTree *c2_obj)
{
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
  }
}

static void c2_f_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_RigidBodyTree_1 *c2_obj)
{
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
  }
}

static void c2_g_handle_matlabCodegenDestructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_CollisionSet *c2_obj)
{
  void *c2_geometryInternal;
  c2_robotics_manip_internal_CollisionGeometry c2_c_obj;
  c2_robotics_manip_internal_CollisionSet *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  real_T c2_c_i;
  real_T c2_d;
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_st.site = &c2_rh_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_d = c2_b_obj->Size;
    c2_i = (int32_T)c2_d;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d, mxDOUBLE_CLASS, c2_i,
      &c2_te_emlrtRTEI, &c2_st);
    for (c2_b_i = 0; c2_b_i < c2_i; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_b_st.site = &c2_sh_emlrtRSI;
      c2_i1 = c2_b_obj->CollisionGeometries.size[1] - 1;
      c2_i2 = (int32_T)c2_c_i - 1;
      if ((c2_i2 < 0) || (c2_i2 > c2_i1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i2, 0, c2_i1, &c2_wb_emlrtBCI, &c2_b_st);
      }

      c2_c_obj = c2_b_obj->CollisionGeometries.vector.data[c2_i2];
      c2_geometryInternal = c2_c_obj.CollisionPrimitive;
      collisioncodegen_destructGeometry(&c2_geometryInternal);
      c2_i3 = c2_b_obj->CollisionGeometries.size[1] - 1;
      c2_i4 = (int32_T)c2_c_i - 1;
      if ((c2_i4 < 0) || (c2_i4 > c2_i3)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 0, c2_i3, &c2_xb_emlrtBCI, &c2_st);
      }

      c2_b_obj->CollisionGeometries.vector.data[c2_i4] = c2_c_obj;
    }
  }
}

const mxArray *sf_c2_Modele_3D_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static real_T c2_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_nullptr, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nullptr), &c2_thisId);
  sf_mex_destroy(&c2_nullptr);
  return c2_y;
}

static real_T c2_b_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_d;
  real_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static uint32_T c2_c_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct
  *chartInstance, const mxArray *c2_nullptr, const char_T *c2_identifier,
  boolean_T *c2_svPtr)
{
  emlrtMsgIdentifier c2_thisId;
  uint32_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nullptr), &c2_thisId,
    c2_svPtr);
  sf_mex_destroy(&c2_nullptr);
  return c2_y;
}

static uint32_T c2_d_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  boolean_T *c2_svPtr)
{
  uint32_T c2_b_u;
  uint32_T c2_y;
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 7, 0U, 0, 0U, 0);
    c2_y = c2_b_u;
  }

  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_e_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_nullptr, const char_T *c2_identifier, boolean_T *c2_svPtr,
  uint32_T c2_y[625])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nullptr), &c2_thisId,
                        c2_svPtr, c2_y);
  sf_mex_destroy(&c2_nullptr);
}

static void c2_f_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, uint32_T c2_y[625])
{
  int32_T c2_i;
  uint32_T c2_uv[625];
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_uv, 1, 7, 0U, 1, 0U, 1, 625);
    for (c2_i = 0; c2_i < 625; c2_i++) {
      c2_y[c2_i] = c2_uv[c2_i];
    }
  }

  sf_mex_destroy(&c2_u);
}

static void c2_g_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_nullptr, const char_T *c2_identifier, boolean_T *c2_svPtr,
  uint32_T c2_y[2])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nullptr), &c2_thisId,
                        c2_svPtr, c2_y);
  sf_mex_destroy(&c2_nullptr);
}

static void c2_h_emlrt_marshallIn(SFc2_Modele_3DInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, uint32_T c2_y[2])
{
  int32_T c2_i;
  uint32_T c2_uv[2];
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_uv, 1, 7, 0U, 1, 0U, 1, 2);
    for (c2_i = 0; c2_i < 2; c2_i++) {
      c2_y[c2_i] = c2_uv[c2_i];
    }
  }

  sf_mex_destroy(&c2_u);
}

static const mxArray *c2_feval(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static void c2_b_feval(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  (void)chartInstance;
  sf_mex_call(c2_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c2_input0), 14,
              sf_mex_dup(c2_input1));
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
}

static const mxArray *c2_c_feval(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static void c2_d_feval(SFc2_Modele_3DInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  (void)chartInstance;
  sf_mex_call(c2_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c2_input0), 14,
              sf_mex_dup(c2_input1));
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
}

static void c2_b_CharacterVector_setVector(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_robotics_manip_internal_CharacterVector *c2_obj, char_T c2_vec_data[],
  int32_T c2_vec_size[2])
{
  real_T c2_len;
  int32_T c2_tmp_data[200];
  int32_T c2_b_tmp_size[2];
  int32_T c2_iv[2];
  int32_T c2_iv1[2];
  int32_T c2_tmp_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_b_varargin_2;
  int32_T c2_c_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_loop_ub;
  int32_T c2_varargin_2;
  char_T c2_b_tmp_data[204];
  boolean_T c2_b;
  boolean_T c2_b1;
  (void)chartInstance;
  c2_varargin_2 = c2_vec_size[1];
  c2_b_varargin_2 = c2_varargin_2;
  c2_len = (real_T)c2_b_varargin_2;
  c2_obj->Length = c2_len;
  c2_b = (c2_len < 1.0);
  if (c2_b) {
    c2_i1 = -1;
  } else {
    c2_i = 1;
    if ((c2_i < 1) || (c2_i > c2_vec_size[1])) {
      emlrtDynamicBoundsCheckR2012b(c2_i, 1, c2_vec_size[1], &c2_yb_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i2 = (int32_T)c2_len;
    if ((c2_i2 < 1) || (c2_i2 > c2_vec_size[1])) {
      emlrtDynamicBoundsCheckR2012b(c2_i2, 1, c2_vec_size[1], &c2_ac_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i1 = c2_i2 - 1;
  }

  c2_b1 = (c2_len < 1.0);
  if (c2_b1) {
    c2_i4 = -1;
  } else {
    c2_i3 = (int32_T)c2_len;
    if ((c2_i3 < 1) || (c2_i3 > 200)) {
      emlrtDynamicBoundsCheckR2012b(c2_i3, 1, 200, &c2_bc_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i4 = c2_i3 - 1;
  }

  c2_tmp_size[0] = c2_i4 + 1;
  c2_loop_ub = c2_i4;
  for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
    c2_tmp_data[c2_i5] = c2_i5;
  }

  c2_b_tmp_size[0] = 1;
  c2_b_tmp_size[1] = c2_i1 + 1;
  c2_b_loop_ub = c2_i1;
  for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
    c2_b_tmp_data[c2_i6] = c2_vec_data[c2_i6];
  }

  c2_iv[0] = 1;
  c2_iv[1] = c2_tmp_size[0];
  emlrtSubAssignSizeCheckR2012b(&c2_iv[0], 2, &c2_b_tmp_size[0], 2,
    &c2_o_emlrtECI, (void *)c2_sp);
  c2_iv1[1] = c2_tmp_size[0];
  c2_c_loop_ub = c2_iv1[1] - 1;
  for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
    c2_obj->Vector[c2_tmp_data[c2_i7]] = c2_b_tmp_data[c2_i7];
  }
}

static void c2_plus(SFc2_Modele_3DInstanceStruct *chartInstance, real_T
                    c2_in1_data[], int32_T c2_in1_size[1], real_T c2_in2_data[],
                    int32_T c2_in2_size[1])
{
  real_T c2_b_in1_data[7];
  int32_T c2_b_in1_size[1];
  int32_T c2_aux_0_0;
  int32_T c2_aux_1_0;
  int32_T c2_b_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_loop_ub;
  int32_T c2_stride_0_0;
  int32_T c2_stride_1_0;
  (void)chartInstance;
  if (c2_in2_size[0] == 1) {
    c2_b_in1_size[0] = c2_in1_size[0];
  } else {
    c2_b_in1_size[0] = c2_in2_size[0];
  }

  c2_stride_0_0 = (c2_in1_size[0] != 1);
  c2_stride_1_0 = (c2_in2_size[0] != 1);
  c2_aux_0_0 = 0;
  c2_aux_1_0 = 0;
  if (c2_in2_size[0] == 1) {
    c2_i = c2_in1_size[0];
  } else {
    c2_i = c2_in2_size[0];
  }

  c2_loop_ub = c2_i - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_in1_data[c2_i1] = c2_in1_data[c2_aux_0_0] + c2_in2_data[c2_aux_1_0];
    c2_aux_1_0 += c2_stride_1_0;
    c2_aux_0_0 += c2_stride_0_0;
  }

  c2_in1_size[0] = c2_b_in1_size[0];
  c2_b_loop_ub = c2_b_in1_size[0] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_b_loop_ub; c2_i2++) {
    c2_in1_data[c2_i2] = c2_b_in1_data[c2_i2];
  }
}

static void c2_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_robotics_manip_inte
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  c2_robotics_manip_internal_CollisionGeometry *c2_newData;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (c2_robotics_manip_internal_CollisionGeometry *)emlrtMallocMex
      (sizeof(c2_robotics_manip_internal_CollisionGeometry) * (uint32_T)
       c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof
             (c2_robotics_manip_internal_CollisionGeometry) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_boolean_T_2D_SetSize(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_boolean_T_2D
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  boolean_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (boolean_T *)emlrtMallocMex(sizeof(boolean_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(boolean_T)
             * (uint32_T)c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_sb0EDBCsZRrtH46t9p8H3X_2D(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_sb0EDBCsZRrtH46t9p8
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  c2_sb0EDBCsZRrtH46t9p8H3X *c2_newData;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (c2_sb0EDBCsZRrtH46t9p8H3X *)emlrtMallocMex(sizeof
      (c2_sb0EDBCsZRrtH46t9p8H3X) * (uint32_T)c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof
             (c2_sb0EDBCsZRrtH46t9p8H3X) * (uint32_T)c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_s_dcxMVnjsLRtcxNw5c8LFlF_(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_s_dcxMVnjsLRtcxNw5c
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  c2_s_dcxMVnjsLRtcxNw5c8LFlF *c2_newData;
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (c2_s_dcxMVnjsLRtcxNw5c8LFlF *)emlrtMallocMex(sizeof
      (c2_s_dcxMVnjsLRtcxNw5c8LFlF) * (uint32_T)c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof
             (c2_s_dcxMVnjsLRtcxNw5c8LFlF) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  for (c2_i = c2_coderArray->vector.numel; c2_i < c2_newNumel; c2_i++) {
    c2_b_array_s_dcxMVnjsLRtcxNw5c8LFlF_(chartInstance,
      &c2_coderArray->vector.data[c2_i]);
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_b_array_s_dcxMVnjsLRtcxNw5c8LFlF_(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_s_dcxMVnjsLRtcxNw5c8LFlF *c2_pStruct)
{
  c2_array_char_T_1x200_Constructor(chartInstance, &c2_pStruct->JointName);
  c2_array_real_T_1x7_Constructor(chartInstance, &c2_pStruct->JointPosition);
}

static void c2_array_char_T_1x200_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_char_T_1x200 *c2_pArray)
{
  (void)chartInstance;
  c2_pArray->size[0] = 0;
  c2_pArray->size[1] = 0;
}

static void c2_array_real_T_1x7_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T_1x7 *c2_pArray)
{
  (void)chartInstance;
  c2_pArray->size[0] = 0;
  c2_pArray->size[1] = 0;
}

static void c2_array_real_T_SetSize(SFc2_Modele_3DInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0)
{
  real_T *c2_newData;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c2_coderArray->size[0], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(real_T) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_int32_T_2D_SetSize(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_int32_T_2D
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  int32_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(int32_T) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_real_T_2D_SetSize(SFc2_Modele_3DInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_real_T_2D
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  real_T *c2_newData;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(real_T) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_b_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet c2_pMatrix[6])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 6; c2_i++) {
    c2_c_array_robotics_manip_internal_C(chartInstance, &c2_pMatrix[c2_i]);
  }
}

static void c2_c_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet *c2_pStruct)
{
  c2_d_array_robotics_manip_internal_C(chartInstance,
    &c2_pStruct->CollisionGeometries);
}

static void c2_d_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_robotics_manip_inte *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (c2_robotics_manip_internal_CollisionGeometry *)
    NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree c2_pMatrix[2])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_b_array_robotics_manip_internal_R(chartInstance, &c2_pMatrix[c2_i]);
  }
}

static void c2_b_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree *c2_pStruct)
{
  c2_c_array_robotics_manip_internal_R(chartInstance, &c2_pStruct->Base);
  c2_c_array_robotics_manip_internal_R(chartInstance, &c2_pStruct->_pobj0);
}

static void c2_c_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBody_1 *c2_pStruct)
{
  c2_c_array_robotics_manip_internal_C(chartInstance,
    &c2_pStruct->CollisionsInternal);
}

static void c2_array_rigidBodyTree_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_rigidBodyTree *c2_pStruct)
{
  c2_d_array_robotics_manip_internal_R(chartInstance, &c2_pStruct->TreeInternal);
  c2_c_array_robotics_manip_internal_C(chartInstance, &c2_pStruct->_pobj0);
}

static void c2_d_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree_1 *c2_pStruct)
{
  c2_e_array_robotics_manip_internal_C(chartInstance, c2_pStruct->_pobj1);
}

static void c2_e_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet c2_pMatrix[3])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 3; c2_i++) {
    c2_c_array_robotics_manip_internal_C(chartInstance, &c2_pMatrix[c2_i]);
  }
}

static void c2_c_array_s_dcxMVnjsLRtcxNw5c8LFlF_(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (c2_s_dcxMVnjsLRtcxNw5c8LFlF *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_f_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet c2_pMatrix[6])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 6; c2_i++) {
    c2_h_array_robotics_manip_internal_C(chartInstance, &c2_pMatrix[c2_i]);
  }
}

static void c2_g_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_robotics_manip_inte *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data !=
       (c2_robotics_manip_internal_CollisionGeometry *)NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_h_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet *c2_pStruct)
{
  c2_g_array_robotics_manip_internal_C(chartInstance,
    &c2_pStruct->CollisionGeometries);
}

static void c2_e_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree c2_pMatrix[2])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_g_array_robotics_manip_internal_R(chartInstance, &c2_pMatrix[c2_i]);
  }
}

static void c2_f_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBody_1 *c2_pStruct)
{
  c2_h_array_robotics_manip_internal_C(chartInstance,
    &c2_pStruct->CollisionsInternal);
}

static void c2_g_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree *c2_pStruct)
{
  c2_f_array_robotics_manip_internal_R(chartInstance, &c2_pStruct->Base);
  c2_f_array_robotics_manip_internal_R(chartInstance, &c2_pStruct->_pobj0);
}

static void c2_i_array_robotics_manip_internal_C(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_CollisionSet c2_pMatrix[3])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 3; c2_i++) {
    c2_h_array_robotics_manip_internal_C(chartInstance, &c2_pMatrix[c2_i]);
  }
}

static void c2_h_array_robotics_manip_internal_R(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_robotics_manip_internal_RigidBodyTree_1 *c2_pStruct)
{
  c2_i_array_robotics_manip_internal_C(chartInstance, c2_pStruct->_pobj1);
}

static void c2_array_rigidBodyTree_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_rigidBodyTree *c2_pStruct)
{
  c2_h_array_robotics_manip_internal_R(chartInstance, &c2_pStruct->TreeInternal);
  c2_h_array_robotics_manip_internal_C(chartInstance, &c2_pStruct->_pobj0);
}

static void c2_d_array_s_dcxMVnjsLRtcxNw5c8LFlF_(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_s_dcxMVnjsLRtcxNw5c *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data !=
       (c2_s_dcxMVnjsLRtcxNw5c8LFlF *)NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_b_array_sb0EDBCsZRrtH46t9p8H3X_2D(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_sb0EDBCsZRrtH46t9p8 *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (c2_sb0EDBCsZRrtH46t9p8H3X *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_boolean_T_2D_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_boolean_T_2D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (boolean_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_c_array_sb0EDBCsZRrtH46t9p8H3X_2D(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_sb0EDBCsZRrtH46t9p8 *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data !=
       (c2_sb0EDBCsZRrtH46t9p8H3X *)NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_boolean_T_2D_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_boolean_T_2D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (boolean_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_real_T_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (real_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
}

static void c2_array_real_T_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (real_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_int32_T_2D_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_int32_T_2D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (int32_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_int32_T_2D_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_int32_T_2D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (int32_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_real_T_2D_Constructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T_2D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (real_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_real_T_2D_Destructor(SFc2_Modele_3DInstanceStruct
  *chartInstance, c2_coder_array_real_T_2D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (real_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void init_dsm_address_info(SFc2_Modele_3DInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_Modele_3DInstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_tx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_ty = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_tz = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_rx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c2_ry = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c2_rz = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c2_CArm_Tilt = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_CArm_Orbital = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_Modele_3D_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1434882715U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3370929795U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1809555537U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4021629611U);
}

mxArray *sf_c2_Modele_3D_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "robotics.core.internal.coder.CollisionGeometryBuildable"));
  return(mxcell3p);
}

mxArray *sf_c2_Modele_3D_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("collisioncodegen_copyGeometry");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_Modele_3D_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_Modele_3D(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiBu4GVgYAPSHEDMxAABrFA+IxBzQWmIOAtcXAGISyoLUkHixUXJnilAOi8xF8x"
    "PLK3wzEvLB5tvwYAwnw2L+YxI5nNCxSHggz1l+rUcQPoNkPSzYNHPhKRfAMgrqoCECyx8Bs79Ou"
    "S5v3KwuF+PPPdXDRb3i5Dl/pJBk37UyHP/oEk/GuS5n2rpR8CBMv2Y9mNzPxuK+yH83NSSjPwUi"
    "P4ARvzlMyNa+cyEZG4OQyZDAdQdDgT8wYTmDwGYJyIaHMB0R4MDNdJDA4HwCEALDxDf2SomoCg/"
    "vSgxV8EtMye1OMbXMcTH0SkmyMjAyCQppiQ/PycpvyImNTcnJiczKSY3sSQnMSmmKDEvJa00L6a"
    "gKLMssSQVJB0PEtPLHQrpghUtHED84hKgP6D6MwY6XTSkQNKFQipV0sUMAuGRhBYeSVRPF/G5ye"
    "mGZhYG5vHgcE4rzdHLHTrlyKBPLweg6SWBPuklGS08kmmQXkoMLS2NzROL0BPMaHqhQnpZAE0vD"
    "sOmfCnOKDJOzs9LxyhfAPH63TA="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_Modele_3D_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sn7tKJqITNnxAX5pu7QdXiE";
}

static void sf_opaque_initialize_c2_Modele_3D(void *chartInstanceVar)
{
  initialize_params_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*)
    chartInstanceVar);
  initialize_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_Modele_3D(void *chartInstanceVar)
{
  enable_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_Modele_3D(void *chartInstanceVar)
{
  disable_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_Modele_3D(void *chartInstanceVar)
{
  sf_gateway_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_Modele_3D(SimStruct* S)
{
  return get_sim_state_c2_Modele_3D((SFc2_Modele_3DInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_Modele_3D(SimStruct* S, const mxArray *st)
{
  set_sim_state_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_Modele_3D(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_Modele_3DInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Modele_3D_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_Modele_3D(void *chartInstanceVar)
{
  mdl_start_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc2_Modele_3DInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c2_Modele_3D(void *chartInstanceVar)
{
  mdl_terminate_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_Modele_3D(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_Modele_3D((SFc2_Modele_3DInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_Modele_3D_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [25] = {
    "eNrtWt1u40QUdqI2oqtuVSQkuABRaaXVip+qPyzdXSFomx8ItNuwSXcrFCgT+yQedTx2Z8Zpsle",
    "95BG45BEQT8A7cMM9L8Al3HHGcdKsGxrbydJ0hSXXGdvfnDOfvznneFwjU943cFvC/ec7hpHD42",
    "u4Z43eNh+2M0N77/yc8UnYrtwyDNMmQpV50zWSb6ZrQQt41W82aSchlvtOhQjiyBR2OXHgCUiX+",
    "Yq6PJnzlDdBADexA88VKpFdSR2fUX5S8rmpLctnNjXtqu36zNrFDol1wFn33+x6vqqgxQIVYKoS",
    "gKVs4fotu8RI62oWhDrL22CeSN9JzJUEVfU9PVS57zNFPQbFDphlLhVBFuSY8VYVUZBXncQKobL",
    "aR7uOxyjh8bm2iayCh+pQcOhZ+PfAV8heTLtor0E5Ua6ghBUdltcKj4mtMPRzH2XNEvOsHFWAht",
    "9qUd7S7ArfAY7jR53E4KqZd9sgSAsOeMI5qEdX7AQPeKDL+HOwrGWZag76Tu+pyFTYwG6xjQzJl",
    "HZLJs8TxmQybM319qANLLBfIIqkwPbsJwBLSa2a+5QIPQsSziSf01MfQmze5RaN/4TbEVQQcB9j",
    "8IwBp46WFFhI88D1QUfjNOlL5Tp5nEaFvb2Y9i5jy1yBaBITYsc+QagEdDjQVUK7FpWkwTQaWVL",
    "BKGP3ADw11JBNnxfOXHGCHCcNshdc6ZmQDA1WCwqgIAgYRVT3U8L8mD47EiOclsehxIiVzC5i9f",
    "xJBTaJaYOl8wllsA9SdyBjx2fMIzs42jZV3QJIU1Av7kzyJViYSDRLta4Hh/yEu2e8JFynGlYEV",
    "+gKAKMGERzTwi6mJdEtofPxvBZwWtPKSlOeOUQx0tDa+Bw4ZhY9Vp0JiYmzqsixdEOHJsFW6XNM",
    "7VxSqbCc6haDOWAF9ehbmWT16Othe3Mwl8qyJvBJEUzDHCulnUZQ7EGNOhCcqBKsKXrNcNN214w",
    "LuwvZq+1m8VcmJc6YELc9hJsbwc/iEG45bJsbx0FdAsebhVH2F2PwHAdnXMJd8Ns/3hvCZ0bYNY",
    "aO43jKXuIJmcpc5ul2xM5cBJcLufqbPaJ3Gr+889v++3+s3/32u4l0sZRMx0th++1+XTbIXO1Lw",
    "V3f+8UYHbwZ0YFuS76lvvrytFx7zDs7R/c9f+tr64gWg/7Ob1/t762Iv/3zK7grDGxBnBRm2Qrf",
    "sXSb+L3aX/f/YMjf3Bg+Fob0ZBh/fjYZ/r3t6HMcxVf2Bb6yhui8qNvr8/+DdP53Z8X/1XT+P58",
    "V/99I5b+aGf3cTef/zOjnXjr/p6af5e3J8Jftj/I/F4nXuu2Asl2rh68krIuyQ/0ygxreiPohN4",
    "bHhdCXYDs63w6OP5xvT0MP52P4qET40O38o3pFuC18EV0JCuH6/k5tb2e3/mRjbeOjRl25Lmu4n",
    "To4rM5oo94rReuCcAtflOoeVoVYx+vLx/rcqnMTdDEf4WG+/z4S4u3r1sW51dPFCkxFFz+O4aMR",
    "4aMxdV0cO2Zr/eMHa1vHAc9Nn606NyeOzLxefg318v1/oxczwof5EvSi1h8+3NwiIiqY//UyBb3",
    "8FOpl+5WJL9IWm6bLWyPjy01Zh5h13DR5WYyp+zS43Etcj5kmbtLxJV33uen3X/W+YkTuX57hcU",
    "SPadf/Zm1cvxvJ8tq7YfvTwTe5vE2ZNeKrQHh5D0hz1NVXRN9/JeSvvx5Z1PyF/1TwzeYOJ6wra",
    "e+TRv805to2iMElAUSO/tZyHXloknX4M8ot90x+uL5xf2OSvPYP/23LEQ==",
    ""
  };

  static char newstr [1785] = "";
  newstr[0] = '\0';
  for (i = 0; i < 25; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_Modele_3D(SimStruct *S)
{
  const char* newstr = sf_c2_Modele_3D_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1765436665U));
  ssSetChecksum1(S,(498229795U));
  ssSetChecksum2(S,(3811266003U));
  ssSetChecksum3(S,(1583162929U));
}

static void mdlRTW_c2_Modele_3D(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_Modele_3D(SimStruct *S)
{
  SFc2_Modele_3DInstanceStruct *chartInstance;
  chartInstance = (SFc2_Modele_3DInstanceStruct *)utMalloc(sizeof
    (SFc2_Modele_3DInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_Modele_3DInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S)> 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_Modele_3D;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_Modele_3D;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_Modele_3D;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c2_Modele_3D;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_Modele_3D;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_Modele_3D;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_Modele_3D;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_Modele_3D;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_Modele_3D;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_Modele_3D;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_Modele_3D;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_Modele_3D;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_Modele_3D(chartInstance);
}

void c2_Modele_3D_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_Modele_3D(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_Modele_3D(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_Modele_3D(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_Modele_3D_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
