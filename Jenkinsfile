pipeline {
    agent any 
    stages {
        stage('Documentación') { 
            steps {
                echo "A documentar!"
            }
        }
    }
    post {
      always {
        //publishCppcheck pattern: 'reports/cppcheck/report.xml'
        //junit 'reports/tests/*.xml' 
	 publishHTML([allowMissing: false, alwaysLinkToLastBuild: false, keepAll: false, reportDir: '', reportFiles: 'index.html', reportName: 'HTML Report', reportTitles: ''])
      }

}
