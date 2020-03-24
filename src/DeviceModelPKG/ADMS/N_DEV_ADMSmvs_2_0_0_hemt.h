
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
// Special Notes  : Generated from verilog file mvs_2_0_0_hemt.va with ADMS
//                  interface for Xyce 6.12.0
//                  DO NOT EDIT THIS FILE DIRECTLY!  It may be overwritten!
//
// Creator        : admsXml-2.3.6
//
// Creation Date  : Tue, 24 Mar 2020 14:42:16
//
//-----------------------------------------------------------------------------
#ifndef Xyce_N_DEV_ADMSmvs_2_0_0_hemt_h
#define Xyce_N_DEV_ADMSmvs_2_0_0_hemt_h


#include <Sacado_No_Kokkos.hpp>

#include <N_DEV_Configuration.h>
#include <N_DEV_Const.h>
#include <N_DEV_DeviceBlock.h>
#include <N_DEV_DeviceInstance.h>
#include <N_DEV_DeviceModel.h>
#include <N_DEV_MOSFET1.h>


namespace Xyce {
namespace Device {
namespace ADMSmvs_2_0_0_hemt {

// This typedef is for our automatic differentiation:
  typedef Sacado::Fad::SFad<double,7> AdmsFadType;
  typedef Sacado::Fad::SFad<double,1> AdmsSensFadType;

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
// Free functions used by sensitivity
//
//-----------------------------------------------------------------------------
void evaluateModelEquations(
std::vector <double> & probeVars,
// probe constants
const int admsProbeID_V_sf_GND,
const int admsProbeID_V_s_GND,
const int admsProbeID_V_d_GND,
const int admsProbeID_V_di_GND,
const int admsProbeID_V_si_GND,
const int admsProbeID_V_g_GND,
const int admsProbeID_I_sf_GND,
// node constants
const int admsNodeID_d,
const int admsNodeID_g,
const int admsNodeID_s,
const int admsNodeID_di,
const int admsNodeID_si,
const int admsNodeID_sf,
const int admsBRA_ID_sf_GND,
// model parameters
// reals
AdmsSensFadType & modelPar_version,
bool modelPar_given_version,
AdmsSensFadType & modelPar_W,
bool modelPar_given_W,
AdmsSensFadType & modelPar_Lgdr,
bool modelPar_given_Lgdr,
AdmsSensFadType & modelPar_dLg,
bool modelPar_given_dLg,
AdmsSensFadType & modelPar_Cins,
bool modelPar_given_Cins,
AdmsSensFadType & modelPar_Tjun,
bool modelPar_given_Tjun,
AdmsSensFadType & modelPar_energy_diff_volt,
bool modelPar_given_energy_diff_volt,
AdmsSensFadType & modelPar_delta,
bool modelPar_given_delta,
AdmsSensFadType & modelPar_n0,
bool modelPar_given_n0,
AdmsSensFadType & modelPar_Rc0,
bool modelPar_given_Rc0,
AdmsSensFadType & modelPar_nacc,
bool modelPar_given_nacc,
AdmsSensFadType & modelPar_meff,
bool modelPar_given_meff,
AdmsSensFadType & modelPar_np_mass,
bool modelPar_given_np_mass,
AdmsSensFadType & modelPar_mu_eff,
bool modelPar_given_mu_eff,
AdmsSensFadType & modelPar_ksee,
bool modelPar_given_ksee,
AdmsSensFadType & modelPar_B,
bool modelPar_given_B,
AdmsSensFadType & modelPar_dqm0,
bool modelPar_given_dqm0,
AdmsSensFadType & modelPar_eps,
bool modelPar_given_eps,
AdmsSensFadType & modelPar_theta,
bool modelPar_given_theta,
AdmsSensFadType & modelPar_beta,
bool modelPar_given_beta,
AdmsSensFadType & modelPar_nd,
bool modelPar_given_nd,
// non-reals (including hidden)
int modelPar_type,
bool modelPar_given_type,
// basic variables
 double admsTemperature, double adms_vt_nom, double ADMSgmin_arg, std::vector <AdmsSensFadType> & staticContributions, std::vector <AdmsSensFadType> & dynamicContributions, const Instance & theInstance);

void evaluateInitialInstance(
// model parameters
// reals
AdmsSensFadType & modelPar_version,
bool modelPar_given_version,
AdmsSensFadType & modelPar_W,
bool modelPar_given_W,
AdmsSensFadType & modelPar_Lgdr,
bool modelPar_given_Lgdr,
AdmsSensFadType & modelPar_dLg,
bool modelPar_given_dLg,
AdmsSensFadType & modelPar_Cins,
bool modelPar_given_Cins,
AdmsSensFadType & modelPar_Tjun,
bool modelPar_given_Tjun,
AdmsSensFadType & modelPar_energy_diff_volt,
bool modelPar_given_energy_diff_volt,
AdmsSensFadType & modelPar_delta,
bool modelPar_given_delta,
AdmsSensFadType & modelPar_n0,
bool modelPar_given_n0,
AdmsSensFadType & modelPar_Rc0,
bool modelPar_given_Rc0,
AdmsSensFadType & modelPar_nacc,
bool modelPar_given_nacc,
AdmsSensFadType & modelPar_meff,
bool modelPar_given_meff,
AdmsSensFadType & modelPar_np_mass,
bool modelPar_given_np_mass,
AdmsSensFadType & modelPar_mu_eff,
bool modelPar_given_mu_eff,
AdmsSensFadType & modelPar_ksee,
bool modelPar_given_ksee,
AdmsSensFadType & modelPar_B,
bool modelPar_given_B,
AdmsSensFadType & modelPar_dqm0,
bool modelPar_given_dqm0,
AdmsSensFadType & modelPar_eps,
bool modelPar_given_eps,
AdmsSensFadType & modelPar_theta,
bool modelPar_given_theta,
AdmsSensFadType & modelPar_beta,
bool modelPar_given_beta,
AdmsSensFadType & modelPar_nd,
bool modelPar_given_nd,
// non-reals (including hidden)
int modelPar_type,
bool modelPar_given_type,
 double admsTemperature,double adms_vt_nom, double ADMSgmin_arg, const Instance & theInstance);

void evaluateInitialModel(
// model parameters
// reals
AdmsSensFadType & modelPar_version,
bool modelPar_given_version,
AdmsSensFadType & modelPar_W,
bool modelPar_given_W,
AdmsSensFadType & modelPar_Lgdr,
bool modelPar_given_Lgdr,
AdmsSensFadType & modelPar_dLg,
bool modelPar_given_dLg,
AdmsSensFadType & modelPar_Cins,
bool modelPar_given_Cins,
AdmsSensFadType & modelPar_Tjun,
bool modelPar_given_Tjun,
AdmsSensFadType & modelPar_energy_diff_volt,
bool modelPar_given_energy_diff_volt,
AdmsSensFadType & modelPar_delta,
bool modelPar_given_delta,
AdmsSensFadType & modelPar_n0,
bool modelPar_given_n0,
AdmsSensFadType & modelPar_Rc0,
bool modelPar_given_Rc0,
AdmsSensFadType & modelPar_nacc,
bool modelPar_given_nacc,
AdmsSensFadType & modelPar_meff,
bool modelPar_given_meff,
AdmsSensFadType & modelPar_np_mass,
bool modelPar_given_np_mass,
AdmsSensFadType & modelPar_mu_eff,
bool modelPar_given_mu_eff,
AdmsSensFadType & modelPar_ksee,
bool modelPar_given_ksee,
AdmsSensFadType & modelPar_B,
bool modelPar_given_B,
AdmsSensFadType & modelPar_dqm0,
bool modelPar_given_dqm0,
AdmsSensFadType & modelPar_eps,
bool modelPar_given_eps,
AdmsSensFadType & modelPar_theta,
bool modelPar_given_theta,
AdmsSensFadType & modelPar_beta,
bool modelPar_given_beta,
AdmsSensFadType & modelPar_nd,
bool modelPar_given_nd,
// non-reals (including hidden)
int modelPar_type,
bool modelPar_given_type,
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

// Maybe this will do as a substitute for a sacado-provided "floor" and "ceil"?
// It is wrong to try to propagate the Sacado derivatives to the return
// value, as the floor and ceil functions have zero derivative w.r.t. any
// of the variables in the argument, except when X is an integer at which
// point the derivative is undefined.
template <typename T>
double ADMSfloor(const T & x)
{
return (floor(x.val()));
}

template <typename T>
double ADMSceil(const T & x)
{
return (ceil(x.val()));
}


struct Traits: public DeviceTraits<Model, Instance, MOSFET1::Traits>
{
  static const char *name() {return "MVS HEMT 2.0.0";}
  static const char *deviceTypeName() {return "m level 2001";}

  static int numNodes() {return 3;}
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


  private:

  public:
    // iterator reference to the mvs_2_0_0_hemt model which owns this instance.
    // Getters and setters
    Model &getModel()
    {
      return model_;
    }

  private:

    Model & model_;   //< Owning Model
    // Begin verilog Instance Variables
    //   Instance Parameters
    //  Variables of global_instance scope
    // end verilog Instance Variables=====
    // Nodal LID Variables
    int li_d;
    int li_g;
    int li_s;
    int li_di;
    int li_si;
    int li_sf;
    // end Nodal LID Variables
    // Branch LID Variables
    int li_BRA_sf_GND;
    // end Branch LID Variables
    // Lead (branch) LID Variables
    int li_branch_id;
    int li_branch_ig;
    int li_branch_is;
    // end Lead (branch) LID Variables
    // Jacobian  pointers
    double * f_di_Equ_si_Node_Ptr;
    double * f_si_Equ_si_Node_Ptr;
    double * f_di_Equ_di_Node_Ptr;
    double * f_si_Equ_di_Node_Ptr;
    double * f_di_Equ_sf_Node_Ptr;
    double * f_si_Equ_sf_Node_Ptr;
    double * f_d_Equ_si_Node_Ptr;
    double * f_d_Equ_sf_Node_Ptr;
    double * f_d_Equ_di_Node_Ptr;
    double * f_d_Equ_d_Node_Ptr;
    double * f_di_Equ_d_Node_Ptr;
    double * f_s_Equ_di_Node_Ptr;
    double * f_s_Equ_sf_Node_Ptr;
    double * f_si_Equ_s_Node_Ptr;
    double * f_s_Equ_s_Node_Ptr;
    double * f_s_Equ_si_Node_Ptr;
    double * f_sf_Equ_BRA_sf_GND_Var_Ptr;
    double * f_BRA_sf_GND_Equ_sf_Node_Ptr;
    double * f_BRA_sf_GND_Equ_si_Node_Ptr;
    double * f_BRA_sf_GND_Equ_g_Node_Ptr;
    double * f_BRA_sf_GND_Equ_di_Node_Ptr;
    double * q_di_Equ_si_Node_Ptr;
    double * q_si_Equ_si_Node_Ptr;
    double * q_di_Equ_di_Node_Ptr;
    double * q_si_Equ_di_Node_Ptr;
    double * q_di_Equ_sf_Node_Ptr;
    double * q_si_Equ_sf_Node_Ptr;
    double * q_d_Equ_si_Node_Ptr;
    double * q_d_Equ_sf_Node_Ptr;
    double * q_d_Equ_di_Node_Ptr;
    double * q_d_Equ_d_Node_Ptr;
    double * q_di_Equ_d_Node_Ptr;
    double * q_s_Equ_di_Node_Ptr;
    double * q_s_Equ_sf_Node_Ptr;
    double * q_si_Equ_s_Node_Ptr;
    double * q_s_Equ_s_Node_Ptr;
    double * q_s_Equ_si_Node_Ptr;
    double * q_sf_Equ_BRA_sf_GND_Var_Ptr;
    double * q_BRA_sf_GND_Equ_sf_Node_Ptr;
    double * q_BRA_sf_GND_Equ_si_Node_Ptr;
    double * q_BRA_sf_GND_Equ_g_Node_Ptr;
    double * q_BRA_sf_GND_Equ_di_Node_Ptr;
    // Jacobian offsets
    int A_di_Equ_si_NodeOffset;
    int A_si_Equ_si_NodeOffset;
    int A_di_Equ_di_NodeOffset;
    int A_si_Equ_di_NodeOffset;
    int A_di_Equ_sf_NodeOffset;
    int A_si_Equ_sf_NodeOffset;
    int A_d_Equ_si_NodeOffset;
    int A_d_Equ_sf_NodeOffset;
    int A_d_Equ_di_NodeOffset;
    int A_d_Equ_d_NodeOffset;
    int A_di_Equ_d_NodeOffset;
    int A_s_Equ_di_NodeOffset;
    int A_s_Equ_sf_NodeOffset;
    int A_si_Equ_s_NodeOffset;
    int A_s_Equ_s_NodeOffset;
    int A_s_Equ_si_NodeOffset;
    int A_sf_Equ_BRA_sf_GND_Var_Offset;
    int A_BRA_sf_GND_Equ_sf_Node_Offset;
    int A_BRA_sf_GND_Equ_si_Node_Offset;
    int A_BRA_sf_GND_Equ_g_Node_Offset;
    int A_BRA_sf_GND_Equ_di_Node_Offset;
    // end of Jacobian and pointers
   // node numbers
    static const int admsNodeID_d = 0;
    static const int admsNodeID_g = 1;
    static const int admsNodeID_s = 2;
    static const int admsNodeID_di = 3;
    static const int admsNodeID_si = 4;
    static const int admsNodeID_sf = 5;
    static const int admsNodeID_GND = -1;
   // end node numbers
   // Additional IDs for branch equations
    static const int admsBRA_ID_sf_GND = 6;
   // end branch numbers
   // Probe numbers
    static const int admsProbeID_V_sf_GND = 0;
    static const int admsProbeID_V_s_GND = 1;
    static const int admsProbeID_V_d_GND = 2;
    static const int admsProbeID_V_di_GND = 3;
    static const int admsProbeID_V_si_GND = 4;
    static const int admsProbeID_V_g_GND = 5;
    static const int admsProbeID_I_sf_GND = 6;
   // end probe numbers
   // Store LIDs
   // end store LIDs
 // Arrays to hold probes
 std::vector < double > probeVars;
 std::vector < std::vector < double > > d_probeVars;
 // Arrays to hold contributions
 // dynamic contributions are differentiated w.r.t time
 std::vector < double > staticContributions;
 std::vector < std::vector < double > > d_staticContributions;
 std::vector < double > dynamicContributions;
 std::vector < std::vector < double > > d_dynamicContributions;


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


    static JacobianStamp jacStamp;
    static IdVector nodeMap;
    static PairMap pairToJacStampMap;

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
    double version;
    int type;
    double W;
    double Lgdr;
    double dLg;
    double Cins;
    double Tjun;
    double energy_diff_volt;
    double delta;
    double n0;
    double Rc0;
    double nacc;
    double meff;
    double np_mass;
    double mu_eff;
    double ksee;
    double B;
    double dqm0;
    double eps;
    double theta;
    double beta;
    double nd;
    //  Variables of global_model scope
    // end verilog model variables=====
};

void registerDevice(const DeviceCountMap& deviceMap = DeviceCountMap(),
                    const std::set<int>& levelSet = std::set<int>());

} // namespace ADMSmvs_2_0_0_hemt
} // namespace Device
} // namespace Xyce
#endif //Xyce_N_DEV_ADMSmvs_2_0_0_hemt_h
