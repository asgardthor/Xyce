
// -*-c++-*-
//-------------------------------------------------------------------------
//   Copyright 2002-2020 National Technology & Engineering Solutions of
//   Sandia, LLC (NTESS).  Under the terms of Contract DE-NA0003525 with
//   NTESS, the U.S. Government retains certain rights in this software.
//
//   This file is part of the Xyce(TM) Parallel Electrical Simulator.
//
//   Xyce(TM) is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
//   Xyce(TM) is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public License
//   along with Xyce(TM).
//   If not, see <http://www.gnu.org/licenses/>.
//-------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//
// Purpose        :
//
// Special Notes  : Generated from verilog file hicumL0V1p32.va with ADMS
//                  interface for Xyce 7.2.0
//                  DO NOT EDIT THIS FILE DIRECTLY!  It may be overwritten!
//
// Creator        : admsXml-2.3.6
//
// Creation Date  : Tue, 28 Jul 2020 16:20:23
//
//-----------------------------------------------------------------------------
#ifndef Xyce_N_DEV_ADMShic0_full_h
#define Xyce_N_DEV_ADMShic0_full_h


#include <N_DEV_Configuration.h>
#include <N_DEV_Const.h>
#include <N_DEV_DeviceBlock.h>
#include <N_DEV_DeviceInstance.h>
#include <N_DEV_DeviceModel.h>
#include <N_DEV_BJT.h>


namespace Xyce {
namespace Device {
namespace ADMShic0_full {

class Model;
class Instance;
class InstanceSensitivity;

#ifdef Xyce_ADMS_SENSITIVITIES
//-----------------------------------------------------------------------------
// Class         : InstanceSensitivity
//
// Purpose       : This class is a functor for sensitivity
//
// Special Notes :
// Creator       :
// Creation Date :
//-----------------------------------------------------------------------------
class InstanceSensitivity : public baseSensitivity
{
public:
InstanceSensitivity() :
baseSensitivity() {};

virtual ~InstanceSensitivity() {};

virtual void operator()(
const ParameterBase &entity,
const std::string &param,
std::vector<double> & dfdp,
std::vector<double> & dqdp,
std::vector<double> & dbdp,
std::vector<int> & Findices,
std::vector<int> & Qindices,
std::vector<int> & Bindices
) const ;
};

static InstanceSensitivity instSens;


//-----------------------------------------------------------------------------
// Class         : ModelSensitivity
//
// Purpose       : This class is a functor for sensitivity
//
// Special Notes :
// Creator       :
// Creation Date :
//-----------------------------------------------------------------------------
class ModelSensitivity : public baseSensitivity
{
public:
ModelSensitivity() :
baseSensitivity() {};

virtual ~ModelSensitivity() {};

virtual void operator()(
const ParameterBase &entity,
const std::string &param,
std::vector<double> & dfdp,
std::vector<double> & dqdp,
std::vector<double> & dbdp,
std::vector<int> & Findices,
std::vector<int> & Qindices,
std::vector<int> & Bindices
) const ;
};

static ModelSensitivity modSens;
#endif // Xyce_ADMS_SENSITIVITIES

// general purpose free functions
// thermal voltage at kelvin temperature temp)
template <typename T> static inline T adms_vt(const T temp) {return(CONSTKoverQ*temp);};

// Figure out how to template this shiznit!
//-----------------------------------------------------------------------------


template<typename Tin>
static Tin adms_ternary_op(const bool cond, const Tin &ifTrue, const Tin &ifFalse)
{
if (cond)
return ifTrue;
else
return ifFalse;
}

template<typename Tin>
static Tin adms_ternary_op(const bool cond, const Tin &ifTrue, const double &ifFalse)
{
if (cond)
return ifTrue;
else
return Tin(ifFalse);
}

template<typename Tin>
static Tin adms_ternary_op(const bool cond, const double &ifTrue, const Tin &ifFalse)
{
if (cond)
return Tin(ifTrue);
else
return ifFalse;
}




#ifdef Xyce_ADMS_SENSITIVITIES
//-----------------------------------------------------------------------------
// "structs" to hold instance and model param/variable copies
//-----------------------------------------------------------------------------
class instanceSensStruct
{
public:
// instance parameters
// reals
double instancePar_dt;
double d_instancePar_dt_dX;
bool instancePar_given_dt;
// instance variables
// reals
double instanceVar_qjci;
double d_instanceVar_qjci_dX;
double instanceVar_qjei;
double d_instanceVar_qjei_dX;
double instanceVar_it;
double d_instanceVar_it_dX;
double instanceVar_ijbc;
double d_instanceVar_ijbc_dX;
double instanceVar_iavl;
double d_instanceVar_iavl_dX;
double instanceVar_ijsc;
double d_instanceVar_ijsc_dX;
double instanceVar_Ibici;
double d_instanceVar_Ibici_dX;
double instanceVar_ijbe;
double d_instanceVar_ijbe_dX;
};

class modelSensStruct
{
public:
// model parameters
// reals
double modelPar_is;
double d_modelPar_is_dX;
bool modelPar_given_is;
double modelPar_mcf;
double d_modelPar_mcf_dX;
bool modelPar_given_mcf;
double modelPar_mcr;
double d_modelPar_mcr_dX;
bool modelPar_given_mcr;
double modelPar_vef;
double d_modelPar_vef_dX;
bool modelPar_given_vef;
double modelPar_ver;
double d_modelPar_ver_dX;
bool modelPar_given_ver;
double modelPar_aver;
double d_modelPar_aver_dX;
bool modelPar_given_aver;
double modelPar_iqf;
double d_modelPar_iqf_dX;
bool modelPar_given_iqf;
double modelPar_fiqf;
double d_modelPar_fiqf_dX;
bool modelPar_given_fiqf;
double modelPar_iqr;
double d_modelPar_iqr_dX;
bool modelPar_given_iqr;
double modelPar_iqfh;
double d_modelPar_iqfh_dX;
bool modelPar_given_iqfh;
double modelPar_tfh;
double d_modelPar_tfh_dX;
bool modelPar_given_tfh;
double modelPar_ahq;
double d_modelPar_ahq_dX;
bool modelPar_given_ahq;
double modelPar_ibes;
double d_modelPar_ibes_dX;
bool modelPar_given_ibes;
double modelPar_mbe;
double d_modelPar_mbe_dX;
bool modelPar_given_mbe;
double modelPar_ires;
double d_modelPar_ires_dX;
bool modelPar_given_ires;
double modelPar_mre;
double d_modelPar_mre_dX;
bool modelPar_given_mre;
double modelPar_ibcs;
double d_modelPar_ibcs_dX;
bool modelPar_given_ibcs;
double modelPar_mbc;
double d_modelPar_mbc_dX;
bool modelPar_given_mbc;
double modelPar_cje0;
double d_modelPar_cje0_dX;
bool modelPar_given_cje0;
double modelPar_vde;
double d_modelPar_vde_dX;
bool modelPar_given_vde;
double modelPar_ze;
double d_modelPar_ze_dX;
bool modelPar_given_ze;
double modelPar_aje;
double d_modelPar_aje_dX;
bool modelPar_given_aje;
double modelPar_vdedc;
double d_modelPar_vdedc_dX;
bool modelPar_given_vdedc;
double modelPar_zedc;
double d_modelPar_zedc_dX;
bool modelPar_given_zedc;
double modelPar_ajedc;
double d_modelPar_ajedc_dX;
bool modelPar_given_ajedc;
double modelPar_t0;
double d_modelPar_t0_dX;
bool modelPar_given_t0;
double modelPar_dt0h;
double d_modelPar_dt0h_dX;
bool modelPar_given_dt0h;
double modelPar_tbvl;
double d_modelPar_tbvl_dX;
bool modelPar_given_tbvl;
double modelPar_tef0;
double d_modelPar_tef0_dX;
bool modelPar_given_tef0;
double modelPar_gte;
double d_modelPar_gte_dX;
bool modelPar_given_gte;
double modelPar_thcs;
double d_modelPar_thcs_dX;
bool modelPar_given_thcs;
double modelPar_ahc;
double d_modelPar_ahc_dX;
bool modelPar_given_ahc;
double modelPar_tr;
double d_modelPar_tr_dX;
bool modelPar_given_tr;
double modelPar_rci0;
double d_modelPar_rci0_dX;
bool modelPar_given_rci0;
double modelPar_vlim;
double d_modelPar_vlim_dX;
bool modelPar_given_vlim;
double modelPar_vpt;
double d_modelPar_vpt_dX;
bool modelPar_given_vpt;
double modelPar_vces;
double d_modelPar_vces_dX;
bool modelPar_given_vces;
double modelPar_cjci0;
double d_modelPar_cjci0_dX;
bool modelPar_given_cjci0;
double modelPar_vdci;
double d_modelPar_vdci_dX;
bool modelPar_given_vdci;
double modelPar_zci;
double d_modelPar_zci_dX;
bool modelPar_given_zci;
double modelPar_vptci;
double d_modelPar_vptci_dX;
bool modelPar_given_vptci;
double modelPar_cjcx0;
double d_modelPar_cjcx0_dX;
bool modelPar_given_cjcx0;
double modelPar_vdcx;
double d_modelPar_vdcx_dX;
bool modelPar_given_vdcx;
double modelPar_zcx;
double d_modelPar_zcx_dX;
bool modelPar_given_zcx;
double modelPar_vptcx;
double d_modelPar_vptcx_dX;
bool modelPar_given_vptcx;
double modelPar_fbc;
double d_modelPar_fbc_dX;
bool modelPar_given_fbc;
double modelPar_rbi0;
double d_modelPar_rbi0_dX;
bool modelPar_given_rbi0;
double modelPar_vr0e;
double d_modelPar_vr0e_dX;
bool modelPar_given_vr0e;
double modelPar_vr0c;
double d_modelPar_vr0c_dX;
bool modelPar_given_vr0c;
double modelPar_fgeo;
double d_modelPar_fgeo_dX;
bool modelPar_given_fgeo;
double modelPar_rbx;
double d_modelPar_rbx_dX;
bool modelPar_given_rbx;
double modelPar_rcx;
double d_modelPar_rcx_dX;
bool modelPar_given_rcx;
double modelPar_re;
double d_modelPar_re_dX;
bool modelPar_given_re;
double modelPar_itss;
double d_modelPar_itss_dX;
bool modelPar_given_itss;
double modelPar_msf;
double d_modelPar_msf_dX;
bool modelPar_given_msf;
double modelPar_iscs;
double d_modelPar_iscs_dX;
bool modelPar_given_iscs;
double modelPar_msc;
double d_modelPar_msc_dX;
bool modelPar_given_msc;
double modelPar_cjs0;
double d_modelPar_cjs0_dX;
bool modelPar_given_cjs0;
double modelPar_vds;
double d_modelPar_vds_dX;
bool modelPar_given_vds;
double modelPar_zs;
double d_modelPar_zs_dX;
bool modelPar_given_zs;
double modelPar_vpts;
double d_modelPar_vpts_dX;
bool modelPar_given_vpts;
double modelPar_cbcpar;
double d_modelPar_cbcpar_dX;
bool modelPar_given_cbcpar;
double modelPar_cbepar;
double d_modelPar_cbepar_dX;
bool modelPar_given_cbepar;
double modelPar_eavl;
double d_modelPar_eavl_dX;
bool modelPar_given_eavl;
double modelPar_kavl;
double d_modelPar_kavl_dX;
bool modelPar_given_kavl;
double modelPar_kf;
double d_modelPar_kf_dX;
bool modelPar_given_kf;
double modelPar_af;
double d_modelPar_af_dX;
bool modelPar_given_af;
double modelPar_alqf;
double d_modelPar_alqf_dX;
bool modelPar_given_alqf;
double modelPar_alit;
double d_modelPar_alit_dX;
bool modelPar_given_alit;
double modelPar_vgb;
double d_modelPar_vgb_dX;
bool modelPar_given_vgb;
double modelPar_vge;
double d_modelPar_vge_dX;
bool modelPar_given_vge;
double modelPar_vgc;
double d_modelPar_vgc_dX;
bool modelPar_given_vgc;
double modelPar_vgs;
double d_modelPar_vgs_dX;
bool modelPar_given_vgs;
double modelPar_f1vg;
double d_modelPar_f1vg_dX;
bool modelPar_given_f1vg;
double modelPar_f2vg;
double d_modelPar_f2vg_dX;
bool modelPar_given_f2vg;
double modelPar_alt0;
double d_modelPar_alt0_dX;
bool modelPar_given_alt0;
double modelPar_kt0;
double d_modelPar_kt0_dX;
bool modelPar_given_kt0;
double modelPar_zetact;
double d_modelPar_zetact_dX;
bool modelPar_given_zetact;
double modelPar_zetabet;
double d_modelPar_zetabet_dX;
bool modelPar_given_zetabet;
double modelPar_zetaci;
double d_modelPar_zetaci_dX;
bool modelPar_given_zetaci;
double modelPar_alvs;
double d_modelPar_alvs_dX;
bool modelPar_given_alvs;
double modelPar_alces;
double d_modelPar_alces_dX;
bool modelPar_given_alces;
double modelPar_zetarbi;
double d_modelPar_zetarbi_dX;
bool modelPar_given_zetarbi;
double modelPar_zetarbx;
double d_modelPar_zetarbx_dX;
bool modelPar_given_zetarbx;
double modelPar_zetarcx;
double d_modelPar_zetarcx_dX;
bool modelPar_given_zetarcx;
double modelPar_zetare;
double d_modelPar_zetare_dX;
bool modelPar_given_zetare;
double modelPar_zetaiqf;
double d_modelPar_zetaiqf_dX;
bool modelPar_given_zetaiqf;
double modelPar_alkav;
double d_modelPar_alkav_dX;
bool modelPar_given_alkav;
double modelPar_aleav;
double d_modelPar_aleav_dX;
bool modelPar_given_aleav;
double modelPar_zetarth;
double d_modelPar_zetarth_dX;
bool modelPar_given_zetarth;
double modelPar_zetaver;
double d_modelPar_zetaver_dX;
bool modelPar_given_zetaver;
double modelPar_zetavgbe;
double d_modelPar_zetavgbe_dX;
bool modelPar_given_zetavgbe;
double modelPar_dvgbe;
double d_modelPar_dvgbe_dX;
bool modelPar_given_dvgbe;
double modelPar_aliqfh;
double d_modelPar_aliqfh_dX;
bool modelPar_given_aliqfh;
double modelPar_kiqfh;
double d_modelPar_kiqfh_dX;
bool modelPar_given_kiqfh;
double modelPar_rth;
double d_modelPar_rth_dX;
bool modelPar_given_rth;
double modelPar_cth;
double d_modelPar_cth_dX;
bool modelPar_given_cth;
double modelPar_tnom;
double d_modelPar_tnom_dX;
bool modelPar_given_tnom;
// non-reals (including hidden)
int modelPar_it_mod;
bool modelPar_given_it_mod;
int modelPar_flnqs;
bool modelPar_given_flnqs;
int modelPar_tef_temp;
bool modelPar_given_tef_temp;
int modelPar_flsh;
bool modelPar_given_flsh;
int modelPar_type;
bool modelPar_given_type;
};



//-----------------------------------------------------------------------------
// Free functions used by sensitivity
//
//-----------------------------------------------------------------------------
void evaluateModelEquations(
std::vector <double> & probeVars,
// probe constants
const int admsProbeID_V_s_GND,
const int admsProbeID_V_ei_GND,
const int admsProbeID_V_ci_GND,
const int admsProbeID_V_bi_GND,
const int admsProbeID_V_s_c,
const int admsProbeID_V_c_e,
const int admsProbeID_V_b_c,
const int admsProbeID_V_xf_GND,
const int admsProbeID_V_xf2_GND,
const int admsProbeID_V_xf1_GND,
const int admsProbeID_V_tnode_GND,
const int admsProbeID_V_b_e,
const int admsProbeID_V_b_bi,
const int admsProbeID_V_ci_c,
const int admsProbeID_V_ei_e,
const int admsProbeID_V_s_ci,
const int admsProbeID_V_ci_ei,
const int admsProbeID_V_bi_ei,
const int admsProbeID_V_bi_ci,
const int admsProbeID_V_b_ci,
// node constants
const int admsNodeID_c,
const int admsNodeID_b,
const int admsNodeID_e,
const int admsNodeID_s,
const int admsNodeID_tnode,
const int admsNodeID_ci,
const int admsNodeID_bi,
const int admsNodeID_ei,
const int admsNodeID_xf1,
const int admsNodeID_xf2,
const int admsNodeID_xf,
instanceSensStruct & instanceStruct,
modelSensStruct & modelStruct,
// basic variables
 double admsTemperature, double adms_vt_nom, double ADMSgmin_arg, std::vector <double> & d_staticContributions_dX, std::vector <double> & d_dynamicContributions_dX, const Instance & theInstance);

void evaluateInitialInstance(
instanceSensStruct & instanceStruct,
modelSensStruct & modelStruct,
 double admsTemperature,double adms_vt_nom, double ADMSgmin_arg, const Instance & theInstance);

void evaluateInitialModel(
modelSensStruct & modelStruct,
 double admsTemperature, double ADMSgmin_arg, const Instance & theInstance);

#endif // Xyce_ADMS_SENSITIVITIES


// Limited exponential --- NOT what verilog LRM says, but what qucs,
// ng-spice, and zspice do.

template <typename T>
T limexp(const T &x)
{
  if ((x) < 80.0)
  return (exp(x));
  else
  return (exp(80.0)*(x-79.0));
}


struct Traits: public DeviceTraits<Model, Instance, BJT::Traits>
{
  static const char *name() {return "HICUM L0 v1.32";}
  static const char *deviceTypeName() {return "q level 230";}

  static int numNodes() {return 5;}


  static bool modelRequired() {return true;}
  static bool isLinearDevice() {return false;}

  static Device *factory(const Configuration &configuration, const FactoryBlock &factory_block);
  static void loadModelParameters(ParametricData<Model> &model_parameters);
  static void loadInstanceParameters(ParametricData<Instance> &instance_parameters);
};

//-----------------------------------------------------------------------------
// Class         : Instance

//
// Purpose       : This class represents a single instance  of the
//                 device.  It mainly contains indices and pointers into
//                 the matrix equation (see the resistor instance class for
//                 more details).
//
// Special Notes :
// Creator       :
// Creation Date :
//-----------------------------------------------------------------------------
class Instance : public DeviceInstance
{
  friend class ParametricData<Instance>;
  friend class Model;
#ifdef Xyce_ADMS_SENSITIVITIES
  friend class InstanceSensitivity;
  friend class ModelSensitivity;
#endif // Xyce_ADMS_SENSITIVITIES
  friend struct Traits;

  public:
    Instance(
      const Configuration &       configuration,
      const InstanceBlock &       instance_block,
      Model &                     model,
      const FactoryBlock &        factory_block);

    ~Instance();

private:
    Instance(const Instance &);
    Instance &operator=(const Instance &);

public:
    void registerLIDs( const LocalIdVector & intLIDVecRef,
                       const LocalIdVector & extLIDVecRef );
    void registerStoreLIDs( const LocalIdVector & stoLIDVecRef );
    void setupPointers();

    void loadNodeSymbols(Util::SymbolTable &symbol_table) const;

    const JacobianStamp & jacobianStamp() const;
    void registerJacLIDs( const JacobianStamp & jacLIDVec );

    void registerBranchDataLIDs(const std::vector<int> & branchLIDVecRef);

    bool processParams();
    bool updateTemperature ( const double & temp = -999.0 );
    bool updateIntermediateVars ();
    bool updatePrimaryState ();
    bool updateSecondaryState ();

    // load functions, residual:
    bool loadDAEQVector ();
    bool loadDAEFVector ();

    // load functions, Jacobian:
    bool loadDAEdQdx ();
    bool loadDAEdFdx ();

      void collapseNodes();
      int getNumNoiseSources () const;  // 6
      void setupNoiseSources (Xyce::Analysis::NoiseData & noiseData);
      void getNoiseSources (Xyce::Analysis::NoiseData & noiseData);

  private:

  public:
    // iterator reference to the hic0_full model which owns this instance.
    // Getters and setters
    Model &getModel()
    {
      return model_;
    }

  private:

    Model & model_;   //< Owning Model
    // Begin verilog Instance Variables
    //   Instance Parameters
    double dt;
    //  Variables of global_instance scope
    double qjci;
     double d_qjci_dV_bi_ci;
     double d_qjci_dV_bi_ci_dV_bi_ci;
     double d_qjci_dV_bi_ci_dV_tnode_GND;
     double d_qjci_dV_bi_ci_dV_b_ci;
     double d_qjci_dV_tnode_GND;
     double d_qjci_dV_b_ci;
     double d_qjci_dV_b_ci_dV_bi_ci;
     double d_qjci_dV_b_ci_dV_tnode_GND;
     double d_qjci_dV_b_ci_dV_b_ci;
    double qjei;
     double d_qjei_dV_tnode_GND;
     double d_qjei_dV_ci_ei;
     double d_qjei_dV_ci_ei_dV_tnode_GND;
     double d_qjei_dV_ci_ei_dV_ci_ei;
     double d_qjei_dV_ci_ei_dV_bi_ei;
     double d_qjei_dV_ci_ei_dV_bi_ci;
     double d_qjei_dV_ci_ei_dV_b_ci;
     double d_qjei_dV_bi_ei;
     double d_qjei_dV_bi_ei_dV_tnode_GND;
     double d_qjei_dV_bi_ei_dV_ci_ei;
     double d_qjei_dV_bi_ei_dV_bi_ei;
     double d_qjei_dV_bi_ei_dV_bi_ci;
     double d_qjei_dV_bi_ei_dV_b_ci;
     double d_qjei_dV_bi_ci;
     double d_qjei_dV_bi_ci_dV_tnode_GND;
     double d_qjei_dV_bi_ci_dV_ci_ei;
     double d_qjei_dV_bi_ci_dV_bi_ei;
     double d_qjei_dV_bi_ci_dV_bi_ci;
     double d_qjei_dV_bi_ci_dV_b_ci;
     double d_qjei_dV_b_ci;
     double d_qjei_dV_b_ci_dV_tnode_GND;
     double d_qjei_dV_b_ci_dV_ci_ei;
     double d_qjei_dV_b_ci_dV_bi_ei;
     double d_qjei_dV_b_ci_dV_bi_ci;
     double d_qjei_dV_b_ci_dV_b_ci;
    double it;
     double d_it_dV_xf2_GND;
     double d_it_dV_tnode_GND;
     double d_it_dV_bi_ei;
     double d_it_dV_bi_ei_dV_xf2_GND;
     double d_it_dV_bi_ei_dV_tnode_GND;
     double d_it_dV_bi_ei_dV_bi_ei;
     double d_it_dV_bi_ei_dV_bi_ci;
     double d_it_dV_bi_ei_dV_b_ci;
     double d_it_dV_bi_ei_dV_ci_ei;
     double d_it_dV_bi_ci;
     double d_it_dV_bi_ci_dV_xf2_GND;
     double d_it_dV_bi_ci_dV_tnode_GND;
     double d_it_dV_bi_ci_dV_bi_ei;
     double d_it_dV_bi_ci_dV_bi_ci;
     double d_it_dV_bi_ci_dV_b_ci;
     double d_it_dV_bi_ci_dV_ci_ei;
     double d_it_dV_b_ci;
     double d_it_dV_b_ci_dV_xf2_GND;
     double d_it_dV_b_ci_dV_tnode_GND;
     double d_it_dV_b_ci_dV_bi_ei;
     double d_it_dV_b_ci_dV_bi_ci;
     double d_it_dV_b_ci_dV_b_ci;
     double d_it_dV_b_ci_dV_ci_ei;
     double d_it_dV_ci_ei;
     double d_it_dV_ci_ei_dV_xf2_GND;
     double d_it_dV_ci_ei_dV_tnode_GND;
     double d_it_dV_ci_ei_dV_bi_ei;
     double d_it_dV_ci_ei_dV_bi_ci;
     double d_it_dV_ci_ei_dV_b_ci;
     double d_it_dV_ci_ei_dV_ci_ei;
    double ijbc;
     double d_ijbc_dV_tnode_GND;
     double d_ijbc_dV_bi_ci;
     double d_ijbc_dV_bi_ci_dV_tnode_GND;
     double d_ijbc_dV_bi_ci_dV_bi_ci;
     double d_ijbc_dV_bi_ci_dV_bi_ei;
     double d_ijbc_dV_bi_ei;
    double iavl;
     double d_iavl_dV_tnode_GND;
     double d_iavl_dV_bi_ei;
     double d_iavl_dV_bi_ci;
     double d_iavl_dV_bi_ci_dV_tnode_GND;
     double d_iavl_dV_bi_ci_dV_bi_ei;
     double d_iavl_dV_bi_ci_dV_bi_ci;
     double d_iavl_dV_bi_ci_dV_b_ci;
     double d_iavl_dV_bi_ci_dV_ci_ei;
     double d_iavl_dV_b_ci;
     double d_iavl_dV_b_ci_dV_tnode_GND;
     double d_iavl_dV_b_ci_dV_bi_ei;
     double d_iavl_dV_b_ci_dV_bi_ci;
     double d_iavl_dV_b_ci_dV_b_ci;
     double d_iavl_dV_b_ci_dV_ci_ei;
     double d_iavl_dV_ci_ei;
     double d_iavl_dV_ci_ei_dV_tnode_GND;
     double d_iavl_dV_ci_ei_dV_bi_ei;
     double d_iavl_dV_ci_ei_dV_bi_ci;
     double d_iavl_dV_ci_ei_dV_b_ci;
     double d_iavl_dV_ci_ei_dV_ci_ei;
    double ijsc;
     double d_ijsc_dV_tnode_GND;
     double d_ijsc_dV_s_ci;
     double d_ijsc_dV_bi_ci;
     double d_ijsc_dV_bi_ei;
    double Ibici;
     double d_Ibici_dV_tnode_GND;
     double d_Ibici_dV_bi_ci;
     double d_Ibici_dV_bi_ci_dV_tnode_GND;
     double d_Ibici_dV_bi_ci_dV_bi_ci;
     double d_Ibici_dV_bi_ci_dV_bi_ei;
     double d_Ibici_dV_bi_ci_dV_b_ci;
     double d_Ibici_dV_bi_ci_dV_ci_ei;
     double d_Ibici_dV_bi_ei;
     double d_Ibici_dV_b_ci;
     double d_Ibici_dV_b_ci_dV_tnode_GND;
     double d_Ibici_dV_b_ci_dV_bi_ci;
     double d_Ibici_dV_b_ci_dV_bi_ei;
     double d_Ibici_dV_b_ci_dV_b_ci;
     double d_Ibici_dV_b_ci_dV_ci_ei;
     double d_Ibici_dV_ci_ei;
     double d_Ibici_dV_ci_ei_dV_tnode_GND;
     double d_Ibici_dV_ci_ei_dV_bi_ci;
     double d_Ibici_dV_ci_ei_dV_bi_ei;
     double d_Ibici_dV_ci_ei_dV_b_ci;
     double d_Ibici_dV_ci_ei_dV_ci_ei;
    double ijbe;
     double d_ijbe_dV_tnode_GND;
     double d_ijbe_dV_bi_ei;
     double d_ijbe_dV_bi_ei_dV_tnode_GND;
     double d_ijbe_dV_bi_ei_dV_bi_ei;
    double IAVL;
    double VBE;
    double VBC;
    double VCE;
    double VSC;
    double GMi;
    double RPIi;
    double RMUi;
    double ROi;
    double CPIi;
    double CMUi;
    double CBCX;
    double CCS;
    double RBi;
    double RB;
    double RCX;
    double RE;
    double BETAAC;
    double TF;
    double FT;
    // end verilog Instance Variables=====
    // Nodal LID Variables
    int li_c;
    int li_b;
    int li_e;
    int li_s;
    int li_tnode;
    int li_ci;
    int li_bi;
    int li_ei;
    int li_xf1;
    int li_xf2;
    int li_xf;
    // end Nodal LID Variables
    // Branch LID Variables
    // end Branch LID Variables
    // Lead (branch) LID Variables
    int li_branch_ic;
    int li_branch_ib;
    int li_branch_ie;
    int li_branch_is;
    int li_branch_itnode;
    // end Lead (branch) LID Variables
    // Jacobian  pointers
    double * f_bi_Equ_bi_Node_Ptr;
    double * f_bi_Equ_ei_Node_Ptr;
    double * f_ei_Equ_bi_Node_Ptr;
    double * f_ei_Equ_ei_Node_Ptr;
    double * f_bi_Equ_ci_Node_Ptr;
    double * f_ci_Equ_bi_Node_Ptr;
    double * f_ci_Equ_ci_Node_Ptr;
    double * f_ci_Equ_ei_Node_Ptr;
    double * f_ei_Equ_ci_Node_Ptr;
    double * f_b_Equ_s_Node_Ptr;
    double * f_b_Equ_ci_Node_Ptr;
    double * f_s_Equ_s_Node_Ptr;
    double * f_s_Equ_ci_Node_Ptr;
    double * f_b_Equ_b_Node_Ptr;
    double * f_s_Equ_b_Node_Ptr;
    double * f_b_Equ_tnode_Node_Ptr;
    double * f_s_Equ_tnode_Node_Ptr;
    double * f_s_Equ_bi_Node_Ptr;
    double * f_s_Equ_ei_Node_Ptr;
    double * f_ci_Equ_s_Node_Ptr;
    double * f_ci_Equ_tnode_Node_Ptr;
    double * f_ci_Equ_b_Node_Ptr;
    double * f_b_Equ_bi_Node_Ptr;
    double * f_b_Equ_e_Node_Ptr;
    double * f_e_Equ_b_Node_Ptr;
    double * f_e_Equ_e_Node_Ptr;
    double * f_ei_Equ_tnode_Node_Ptr;
    double * f_e_Equ_tnode_Node_Ptr;
    double * f_ei_Equ_e_Node_Ptr;
    double * f_e_Equ_ei_Node_Ptr;
    double * f_c_Equ_tnode_Node_Ptr;
    double * f_ci_Equ_c_Node_Ptr;
    double * f_c_Equ_ci_Node_Ptr;
    double * f_c_Equ_c_Node_Ptr;
    double * f_bi_Equ_b_Node_Ptr;
    double * f_b_Equ_ei_Node_Ptr;
    double * f_bi_Equ_tnode_Node_Ptr;
    double * f_bi_Equ_xf_Node_Ptr;
    double * f_ei_Equ_xf_Node_Ptr;
    double * f_ei_Equ_b_Node_Ptr;
    double * f_ci_Equ_xf2_Node_Ptr;
    double * f_ei_Equ_xf2_Node_Ptr;
    double * f_tnode_Equ_tnode_Node_Ptr;
    double * f_tnode_Equ_ci_Node_Ptr;
    double * f_tnode_Equ_ei_Node_Ptr;
    double * f_tnode_Equ_b_Node_Ptr;
    double * f_tnode_Equ_bi_Node_Ptr;
    double * f_tnode_Equ_s_Node_Ptr;
    double * f_tnode_Equ_e_Node_Ptr;
    double * f_tnode_Equ_c_Node_Ptr;
    double * f_xf1_Equ_ci_Node_Ptr;
    double * f_xf1_Equ_ei_Node_Ptr;
    double * f_xf1_Equ_b_Node_Ptr;
    double * f_xf1_Equ_bi_Node_Ptr;
    double * f_xf1_Equ_tnode_Node_Ptr;
    double * f_xf1_Equ_xf2_Node_Ptr;
    double * f_xf1_Equ_xf1_Node_Ptr;
    double * f_xf2_Equ_bi_Node_Ptr;
    double * f_xf2_Equ_ei_Node_Ptr;
    double * f_xf2_Equ_ci_Node_Ptr;
    double * f_xf2_Equ_b_Node_Ptr;
    double * f_xf2_Equ_tnode_Node_Ptr;
    double * f_xf2_Equ_xf1_Node_Ptr;
    double * f_xf2_Equ_xf2_Node_Ptr;
    double * f_xf_Equ_ci_Node_Ptr;
    double * f_xf_Equ_ei_Node_Ptr;
    double * f_xf_Equ_bi_Node_Ptr;
    double * f_xf_Equ_b_Node_Ptr;
    double * f_xf_Equ_tnode_Node_Ptr;
    double * f_xf_Equ_xf_Node_Ptr;
    double * q_bi_Equ_bi_Node_Ptr;
    double * q_bi_Equ_ei_Node_Ptr;
    double * q_ei_Equ_bi_Node_Ptr;
    double * q_ei_Equ_ei_Node_Ptr;
    double * q_bi_Equ_ci_Node_Ptr;
    double * q_ci_Equ_bi_Node_Ptr;
    double * q_ci_Equ_ci_Node_Ptr;
    double * q_ci_Equ_ei_Node_Ptr;
    double * q_ei_Equ_ci_Node_Ptr;
    double * q_b_Equ_s_Node_Ptr;
    double * q_b_Equ_ci_Node_Ptr;
    double * q_s_Equ_s_Node_Ptr;
    double * q_s_Equ_ci_Node_Ptr;
    double * q_b_Equ_b_Node_Ptr;
    double * q_s_Equ_b_Node_Ptr;
    double * q_b_Equ_tnode_Node_Ptr;
    double * q_s_Equ_tnode_Node_Ptr;
    double * q_s_Equ_bi_Node_Ptr;
    double * q_s_Equ_ei_Node_Ptr;
    double * q_ci_Equ_s_Node_Ptr;
    double * q_ci_Equ_tnode_Node_Ptr;
    double * q_ci_Equ_b_Node_Ptr;
    double * q_b_Equ_bi_Node_Ptr;
    double * q_b_Equ_e_Node_Ptr;
    double * q_e_Equ_b_Node_Ptr;
    double * q_e_Equ_e_Node_Ptr;
    double * q_ei_Equ_tnode_Node_Ptr;
    double * q_e_Equ_tnode_Node_Ptr;
    double * q_ei_Equ_e_Node_Ptr;
    double * q_e_Equ_ei_Node_Ptr;
    double * q_c_Equ_tnode_Node_Ptr;
    double * q_ci_Equ_c_Node_Ptr;
    double * q_c_Equ_ci_Node_Ptr;
    double * q_c_Equ_c_Node_Ptr;
    double * q_bi_Equ_b_Node_Ptr;
    double * q_b_Equ_ei_Node_Ptr;
    double * q_bi_Equ_tnode_Node_Ptr;
    double * q_bi_Equ_xf_Node_Ptr;
    double * q_ei_Equ_xf_Node_Ptr;
    double * q_ei_Equ_b_Node_Ptr;
    double * q_ci_Equ_xf2_Node_Ptr;
    double * q_ei_Equ_xf2_Node_Ptr;
    double * q_tnode_Equ_tnode_Node_Ptr;
    double * q_tnode_Equ_ci_Node_Ptr;
    double * q_tnode_Equ_ei_Node_Ptr;
    double * q_tnode_Equ_b_Node_Ptr;
    double * q_tnode_Equ_bi_Node_Ptr;
    double * q_tnode_Equ_s_Node_Ptr;
    double * q_tnode_Equ_e_Node_Ptr;
    double * q_tnode_Equ_c_Node_Ptr;
    double * q_xf1_Equ_ci_Node_Ptr;
    double * q_xf1_Equ_ei_Node_Ptr;
    double * q_xf1_Equ_b_Node_Ptr;
    double * q_xf1_Equ_bi_Node_Ptr;
    double * q_xf1_Equ_tnode_Node_Ptr;
    double * q_xf1_Equ_xf2_Node_Ptr;
    double * q_xf1_Equ_xf1_Node_Ptr;
    double * q_xf2_Equ_bi_Node_Ptr;
    double * q_xf2_Equ_ei_Node_Ptr;
    double * q_xf2_Equ_ci_Node_Ptr;
    double * q_xf2_Equ_b_Node_Ptr;
    double * q_xf2_Equ_tnode_Node_Ptr;
    double * q_xf2_Equ_xf1_Node_Ptr;
    double * q_xf2_Equ_xf2_Node_Ptr;
    double * q_xf_Equ_ci_Node_Ptr;
    double * q_xf_Equ_ei_Node_Ptr;
    double * q_xf_Equ_bi_Node_Ptr;
    double * q_xf_Equ_b_Node_Ptr;
    double * q_xf_Equ_tnode_Node_Ptr;
    double * q_xf_Equ_xf_Node_Ptr;
    // Jacobian offsets
    int A_bi_Equ_bi_NodeOffset;
    int A_bi_Equ_ei_NodeOffset;
    int A_ei_Equ_bi_NodeOffset;
    int A_ei_Equ_ei_NodeOffset;
    int A_bi_Equ_ci_NodeOffset;
    int A_ci_Equ_bi_NodeOffset;
    int A_ci_Equ_ci_NodeOffset;
    int A_ci_Equ_ei_NodeOffset;
    int A_ei_Equ_ci_NodeOffset;
    int A_b_Equ_s_NodeOffset;
    int A_b_Equ_ci_NodeOffset;
    int A_s_Equ_s_NodeOffset;
    int A_s_Equ_ci_NodeOffset;
    int A_b_Equ_b_NodeOffset;
    int A_s_Equ_b_NodeOffset;
    int A_b_Equ_tnode_NodeOffset;
    int A_s_Equ_tnode_NodeOffset;
    int A_s_Equ_bi_NodeOffset;
    int A_s_Equ_ei_NodeOffset;
    int A_ci_Equ_s_NodeOffset;
    int A_ci_Equ_tnode_NodeOffset;
    int A_ci_Equ_b_NodeOffset;
    int A_b_Equ_bi_NodeOffset;
    int A_b_Equ_e_NodeOffset;
    int A_e_Equ_b_NodeOffset;
    int A_e_Equ_e_NodeOffset;
    int A_ei_Equ_tnode_NodeOffset;
    int A_e_Equ_tnode_NodeOffset;
    int A_ei_Equ_e_NodeOffset;
    int A_e_Equ_ei_NodeOffset;
    int A_c_Equ_tnode_NodeOffset;
    int A_ci_Equ_c_NodeOffset;
    int A_c_Equ_ci_NodeOffset;
    int A_c_Equ_c_NodeOffset;
    int A_bi_Equ_b_NodeOffset;
    int A_b_Equ_ei_NodeOffset;
    int A_bi_Equ_tnode_NodeOffset;
    int A_bi_Equ_xf_NodeOffset;
    int A_ei_Equ_xf_NodeOffset;
    int A_ei_Equ_b_NodeOffset;
    int A_ci_Equ_xf2_NodeOffset;
    int A_ei_Equ_xf2_NodeOffset;
    int A_tnode_Equ_tnode_NodeOffset;
    int A_tnode_Equ_ci_NodeOffset;
    int A_tnode_Equ_ei_NodeOffset;
    int A_tnode_Equ_b_NodeOffset;
    int A_tnode_Equ_bi_NodeOffset;
    int A_tnode_Equ_s_NodeOffset;
    int A_tnode_Equ_e_NodeOffset;
    int A_tnode_Equ_c_NodeOffset;
    int A_xf1_Equ_ci_NodeOffset;
    int A_xf1_Equ_ei_NodeOffset;
    int A_xf1_Equ_b_NodeOffset;
    int A_xf1_Equ_bi_NodeOffset;
    int A_xf1_Equ_tnode_NodeOffset;
    int A_xf1_Equ_xf2_NodeOffset;
    int A_xf1_Equ_xf1_NodeOffset;
    int A_xf2_Equ_bi_NodeOffset;
    int A_xf2_Equ_ei_NodeOffset;
    int A_xf2_Equ_ci_NodeOffset;
    int A_xf2_Equ_b_NodeOffset;
    int A_xf2_Equ_tnode_NodeOffset;
    int A_xf2_Equ_xf1_NodeOffset;
    int A_xf2_Equ_xf2_NodeOffset;
    int A_xf_Equ_ci_NodeOffset;
    int A_xf_Equ_ei_NodeOffset;
    int A_xf_Equ_bi_NodeOffset;
    int A_xf_Equ_b_NodeOffset;
    int A_xf_Equ_tnode_NodeOffset;
    int A_xf_Equ_xf_NodeOffset;
    // end of Jacobian and pointers
   // node numbers
    static const int admsNodeID_c = 0;
    static const int admsNodeID_b = 1;
    static const int admsNodeID_e = 2;
    static const int admsNodeID_s = 3;
    static const int admsNodeID_tnode = 4;
    static const int admsNodeID_ci = 0+5;
    static const int admsNodeID_bi = 1+5;
    static const int admsNodeID_ei = 2+5;
    static const int admsNodeID_xf1 = 3+5;
    static const int admsNodeID_xf2 = 4+5;
    static const int admsNodeID_xf = 5+5;
    static const int admsNodeID_GND = -1;
   // end node numbers
   // Additional IDs for branch equations
   // end branch numbers
   // Probe numbers
    static const int admsProbeID_V_s_GND = 0;
    static const int admsProbeID_V_ei_GND = 1;
    static const int admsProbeID_V_ci_GND = 2;
    static const int admsProbeID_V_bi_GND = 3;
    static const int admsProbeID_V_s_c = 4;
    static const int admsProbeID_V_c_e = 5;
    static const int admsProbeID_V_b_c = 6;
    static const int admsProbeID_V_xf_GND = 7;
    static const int admsProbeID_V_xf2_GND = 8;
    static const int admsProbeID_V_xf1_GND = 9;
    static const int admsProbeID_V_tnode_GND = 10;
    static const int admsProbeID_V_b_e = 11;
    static const int admsProbeID_V_b_bi = 12;
    static const int admsProbeID_V_ci_c = 13;
    static const int admsProbeID_V_ei_e = 14;
    static const int admsProbeID_V_s_ci = 15;
    static const int admsProbeID_V_ci_ei = 16;
    static const int admsProbeID_V_bi_ei = 17;
    static const int admsProbeID_V_bi_ci = 18;
    static const int admsProbeID_V_b_ci = 19;
   // end probe numbers
   // Store LIDs
   // end store LIDs
   // Store LIDs for output vars
    int li_store_qjci;
    int li_store_qjei;
    int li_store_it;
    int li_store_ijbc;
    int li_store_iavl;
    int li_store_ijsc;
    int li_store_Ibici;
    int li_store_ijbe;
    int li_store_IAVL;
    int li_store_VBE;
    int li_store_VBC;
    int li_store_VCE;
    int li_store_VSC;
    int li_store_GMi;
    int li_store_RPIi;
    int li_store_RMUi;
    int li_store_ROi;
    int li_store_CPIi;
    int li_store_CMUi;
    int li_store_CBCX;
    int li_store_CCS;
    int li_store_RBi;
    int li_store_RB;
    int li_store_RCX;
    int li_store_RE;
    int li_store_BETAAC;
    int li_store_TF;
    int li_store_FT;
   // end store LIDs for output vars
     // bools for collapsing nodes
     bool collapseNode_ci;
     bool collapseNode_bi;
     bool collapseNode_ei;
 // Arrays to hold probes
 std::vector < double > probeVars;
 std::vector < std::vector < double > > d_probeVars;
 // Arrays to hold contributions
 // dynamic contributions are differentiated w.r.t time
 std::vector < double > staticContributions;
 std::vector < std::vector < double > > d_staticContributions;
 std::vector < double > dynamicContributions;
 std::vector < std::vector < double > > d_dynamicContributions;
//vectors to hold noise information for communication between methods
std::vector<double> noiseContribsPower;
std::vector<double> noiseContribsExponent;


    // this is what we'll use when any model uses $temperature.  We'll
    // set it in updateTemperature, and initialize it to whatever
    // is in devOptions when the instance is constructed.
    double admsTemperature;

    // vt at $temperature;
    double adms_vt_nom;


    // This one is for the annoying bogus "XyceADMSInstTemp" parameter
    // that we need so we can set it from the device manager when there's no
    // "TEMP" parameter to use
    double admsInstTemp;


    JacobianStamp jacStamp;
    IdVector nodeMap;
    PairMap pairToJacStampMap;

    // These instance-owned vectors are for storage of lead current data
    std::vector<double> leadCurrentF;
    std::vector<double> leadCurrentQ;


    };


//-----------------------------------------------------------------------------
// Class         : Model

// Purpose       :
// Special Notes :
// Creator       :
// Creation Date :
//-----------------------------------------------------------------------------
class Model : public DeviceModel
{
    typedef std::vector<Instance *> InstanceVector;

    friend class ParametricData<Model>;
    friend class Instance;
#ifdef Xyce_ADMS_SENSITIVITIES
    friend class InstanceSensitivity;
    friend class ModelSensitivity;
#endif // Xyce_ADMS_SENSITIVITIES
    friend struct Traits;

  public:
    Model(
      const Configuration &       configuration,
      const ModelBlock &          model_block,
      const FactoryBlock &        factory_block);

    ~Model();

private:
    Model(const Model &);
    Model &operator=(const Model &);

public:
    virtual void forEachInstance(DeviceInstanceOp &op) const /* override */;
    virtual std::ostream &printOutInstances(std::ostream &os) const;
    bool processParams();
    bool processInstanceParams();

  private:

  public:
    void addInstance(Instance *instance)
    {
      instanceContainer.push_back(instance);
    }

    void setupBaseInstanceContainer()
    {
      std::vector<Instance*>::iterator iter = instanceContainer.begin();
      std::vector<Instance*>::iterator end   = instanceContainer.end();
      for ( ; iter!=end; ++iter)
      {
      Xyce::Device::DeviceModel::baseInstanceContainer.push_back( static_cast<Xyce::Device::DeviceInstance *>(*iter) );
    }
  }

  private:
    std::vector<Instance*> instanceContainer;

  private:

    // This one is for the annoying bogus "XyceADMSInstTemp" parameter
    // that we need so we can set it from the device manager when there's no
    // "TEMP" model parameter to use
    double admsModTemp;
// Begin verilog Model Variables
//   Model Parameters
    double is;
    int it_mod;
    double mcf;
    double mcr;
    double vef;
    double ver;
    double aver;
    double iqf;
    double fiqf;
    double iqr;
    double iqfh;
    double tfh;
    double ahq;
    double ibes;
    double mbe;
    double ires;
    double mre;
    double ibcs;
    double mbc;
    double cje0;
    double vde;
    double ze;
    double aje;
    double vdedc;
    double zedc;
    double ajedc;
    double t0;
    double dt0h;
    double tbvl;
    double tef0;
    double gte;
    double thcs;
    double ahc;
    double tr;
    double rci0;
    double vlim;
    double vpt;
    double vces;
    double cjci0;
    double vdci;
    double zci;
    double vptci;
    double cjcx0;
    double vdcx;
    double zcx;
    double vptcx;
    double fbc;
    double rbi0;
    double vr0e;
    double vr0c;
    double fgeo;
    double rbx;
    double rcx;
    double re;
    double itss;
    double msf;
    double iscs;
    double msc;
    double cjs0;
    double vds;
    double zs;
    double vpts;
    double cbcpar;
    double cbepar;
    double eavl;
    double kavl;
    double kf;
    double af;
    double alqf;
    double alit;
    int flnqs;
    double vgb;
    double vge;
    double vgc;
    double vgs;
    double f1vg;
    double f2vg;
    double alt0;
    double kt0;
    double zetact;
    double zetabet;
    double zetaci;
    double alvs;
    double alces;
    double zetarbi;
    double zetarbx;
    double zetarcx;
    double zetare;
    double zetaiqf;
    double alkav;
    double aleav;
    double zetarth;
    int tef_temp;
    double zetaver;
    double zetavgbe;
    double dvgbe;
    double aliqfh;
    double kiqfh;
    int flsh;
    double rth;
    double cth;
    int type;
    double tnom;
    //  Variables of global_model scope
    // end verilog model variables=====
};

void registerDevice(const DeviceCountMap& deviceMap = DeviceCountMap(),
                    const std::set<int>& levelSet = std::set<int>());

} // namespace ADMShic0_full
} // namespace Device
} // namespace Xyce
#endif //Xyce_N_DEV_ADMShic0_full_h
