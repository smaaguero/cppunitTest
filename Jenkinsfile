pipeline {
    agent any
	 options {
	    disableConcurrentBuilds()
	  }
    stages {
  stage('Running cpp tests') {
  	steps {
		  sh '''#!/bin/bash
          mkdir -p build
          cd build
          cmake .. -DUSEXUNIT=ON
          make -j4
          ./test/aritTest
          '''
  	}
  }
    }
  post {
    always {
        xunit '**/testResult.xml'
        cleanWs()
    }
  }
}
