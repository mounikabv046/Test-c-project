pipeline {
  agent any 
  stages {
      stage ('build' ) {
        steps { 
          sh ''' make clean '''
        }
      }
    stage ( 'archve' ) {
      steps {
        archiveArtifacts artifacts: '/var/lib/jenkins/workspace/archive-testc-project/SANDEEP.exe', followSymlinks: true
      }
    }
    }
}
