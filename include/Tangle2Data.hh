#ifndef Tangle2Data_hh
#define Tangle2Data_hh

#include "globals.hh"
#include "G4Threading.hh"
#include "G4AutoLock.hh"

#include <fstream>

#include "g4root.hh"
#include "G4ThreeVector.hh"

class G4VPhysicalVolume;

// This is a lazy way of sharing memory. To avoid polluting the global
// namespace we define our own distinctive namespace.
namespace Tangle2 {
  extern G4Mutex outFileMutex;
  extern std::ofstream outFile;
  extern G4int nMasterEventsPh;
  // Worker quantities
  extern G4ThreadLocal G4int nEventsPh;
  extern G4ThreadLocal G4double eDepEvent;
  extern G4ThreadLocal G4double eDepCryst[18];
  extern G4ThreadLocal G4int nb_Compt;
  extern G4ThreadLocal G4ThreeVector posA;
  extern G4ThreadLocal G4ThreeVector posB;
}

#endif
