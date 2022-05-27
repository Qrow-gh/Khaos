/**
 * @file ConCmd.hh
 * 
 * @breif Used by modules to provide functionality to Khaos
 *
 * @author Matthew Bracker (Qrow)
 * @bug No Known Bugs
 */

#pragma once

namespace Khaos
{
  class CConCmd
  {
    public:

      using CConCmdFn = void ( * )();

      CConCmd( const char* pConCmdStr, CConCmdFn Handler );
      ~CConCmd();

      void Run();

    private:

      const char* m_pConCmdStr;
      CConCmdFn mCmdHandler;

  };
}

