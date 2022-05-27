/**
 * @file ConCmd.cc
 * 
 * @breif Used by modules to provide functionality to Khaos
 *
 * @author Matthew Bracker (Qrow)
 * @bug No Known Bugs
 */


#include <ConCmd.hh>

namespace Khaos
{

  CConCmd::CConCmd( const char* pConCmdStr, CConCmdFn Handler )
  {
    m_pConCmdStr = pConCmdStr;
    mCmdHandler = Handler;
  }

  CConCmd::~CConCmd() = default;

  void CConCmd::Run()
  {
    this->mCmdHandler();
  }

}
